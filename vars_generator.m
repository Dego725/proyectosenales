%% Proyect Vars

z = 0:0.001:5;      % vector de tiempo
x = square(2*pi*100*z);  % señal cuadrada de 100 Hz

Fs = 1000;
T_muestreo = 5;


save("Variables.mat");