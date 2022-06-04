clear;
clc;
num=[1 4];
den=[1 20 5];
g=idtf(num,den);
t=0:0.001:5;
u=sin(t);
h=lsim(g,u,t);
plot(t,h);