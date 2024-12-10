function [x_hat,P] = extended_kalman_filter_sim(time, olde_time, P_m1, Xp_m1, u_m1, y)
    td = time - olde_time;
    m = 1500; 
    b = -1000;
    Q_m1 = diag([1e-5, 1e-5, 1e-5]);
    R = diag([1e-2, 1e-3, 1e-2]);
    
    h = @(Xp_m1) [Xp_m1(1); 0; 0];
    f = @(xp_m1, u_m1) xp_m1 + [0, 1, 0 ;0, b/m+xp_m1(3)/m, 0; 0, 0, 0]*xp_m1*td + [0, 1/m, 0]*td*u_m1;% + [0;0;Xp_m1(3)];
    F_m1 = @(Xp_m1) [1, td, 0;
                     0, 1+td*(b/m+Xp_m1(3)/m), td/m;
                     0, 0, 1];
                      
    L_m1 = @(w) [1, 0, 0;
                 0, 1, 0;
                 0, 0, 1];
    H_f = @(Xp_m1) [1, 0, 0; % C matrix
                    0, 0, 0;
                    0, 0, 0];
    
    M_f = @(Xp_m1) [1, 0, 0;
                    0, 1, 0;
                    0, 0, 1];
    H = H_f(Xp_m1);
    
    I = eye(3);
    Pm = F_m1(Xp_m1)*P_m1*F_m1(Xp_m1)'+L_m1(Xp_m1)*Q_m1*L_m1(Xp_m1)';
    Xm = f(Xp_m1,u_m1);

    H = H_f(Xp_m1);
    M = M_f([1;1;1]);
    K = Pm * H' / (H * Pm * H' + M * R * M');
    Xp = Xm + K*(y-h(Xp_m1));
    Pp = (I - K*H)*Pm*(I - K*H)' + K*R*K';
    P = Pp;
    x_hat = Xp;
end