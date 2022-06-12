clear
clc
num=[0 0 0 1];
den=[1 3 2 0];
sys=tf(num,den);
rlocus(sys);
[k,p1]=rlocfind(sys);
[k,p2]=rlocfind(sys);