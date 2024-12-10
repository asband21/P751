%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% This is a simplified model of a boat in one dimension with a single thruster. i 
% The state space includes position and velocity. 
% The goal is to estimate the drag coefficient of the boat in one dimension.
% The estimated parameter is used in an extended Kalman filter, implemented 
% as an inner function, to see if we can accurately estimate the system parameters.
% Written by Asbjørn.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all; close all; clc;

N = 1000; % Number of simulation steps
time = zeros(1, N); 
ts = 0.1; % Time step size
time = ts:ts:N * ts;

% State variables: position, velocity, and drag coefficient
x = zeros(3, N);        
x(:, 1) = [0; -1; -1200];    % Initial state [position, velocity, drag coefficient]

% Estimated state and covariance matrix initialization
x_est = zeros(3, N);         % Estimated state
x_est(:, 1) = [0; -0.5; 0];  % Initial guess for estimated state
P_est = eye(3) * 1e-3;       % Initial covariance matrix

% Input (control signal)
u = zeros(3, N);   
for i = 500:N
    u(2, i) = sin(i  * 0.006) * 1000; 
end
u(2, 100:200) = 500;
u(2, 400:750) = -700;

% Loop through all time steps, calculate true dynamics, add measurement noise,
% and apply the extended Kalman filter.
for i = 2:N
    % Compute true system dynamics
    x(:, i) = dynamics(time(i), time(i-1), x(:, i-1), u(:, i-1)); 
    
    % Add noise to measurement
    noisy_measurement = x(:, i-1) + [1, 0, 0] * random('Normal', 0, 1, [3, 1]) * 1;
    
    % Apply extended Kalman filter
    [x_est(:, i), P_est] = extended_kalman_filter_sim(time(i), time(i-1), P_est, x_est(:, i-1), u(:, i-1), noisy_measurement);
end

% Plot results
figure;
subplot(3,1,1);
plot(time, x(1, :), 'b', time, x_est(1, :), 'r');
xlabel('Time (s)');
ylabel('Position (m)');
legend('True Position', 'Estimated Position');
title('Position Estimation');

subplot(3,1,2);
plot(time, x(2, :), 'b', time, x_est(2, :), 'r');
xlabel('Time (s)');
ylabel('Velocity (m/s)');
legend('True Velocity', 'Estimated Velocity');
title('Velocity Estimation');

subplot(3,1,3);
plot(time, x(3, :), 'b', time, x_est(3, :) - 1000, 'r');
xlabel('Time (s)');
ylabel('Drag Coefficient (b_c)');
legend('True b_c', 'Estimated b_c');
title('Drag Coefficient Estimation');

% Function for true system dynamics
function [x_next] = dynamics(current_time, previous_time, x, u)
    delta_t = current_time - previous_time; % Time step
    m = 1500; % Mass of the boat
    A = [0, 1, 0; 
         0, x(3)/m, 0; 
         0, 0, 0];
    B = [0, 0, 0; 
         0, 1/m, 0; 
         0, 0, 0];
    x_next = A * x * delta_t + B * u * delta_t + x;
end
