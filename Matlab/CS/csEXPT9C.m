clc
clear all
Ka=900; %input('Enter the value of Ka, Ka=');
num=[5*Ka];
den=[1 50.5 0];
sys_ol=tf(num,den);
sys=feedback(sys_ol,1)
[y t]=step(sys); stepinfo(sys)
subplot(1,2,1); plot(t,y); xlabel('Time(sec)'); ylabel('Magnitude');
title('step response'); grid;
% response with lead compensator
T1=50*10^-3; alfa=0.8;
zc=1/T1; pc=1/(alfa*T1);
num_lead=[1 zc];den_lead=[1 pc];
num_comp=conv(num,num_lead);
den_comp=conv(den,den_lead);
sys_comp_ol=tf(num_comp,den_comp);
sys_comp_cl=feedback(sys_comp_ol,1)
[y_comp t_comp]=step(sys_comp_cl);stepinfo(sys_comp_cl)
subplot(1,2,2); plot(t_comp,y_comp); xlabel('Time(sec)'); ylabel('Magnitude');
title('step response with lead compensator');