clc; clear all; close all;
k= input('enter the value of k');
num=k;
den= [1 4 0];
sys= tf(num, den);
subplot(2,1,1);
bode(sys);
ylabel(' magnitude'); xlabel('frequency');
title('bode diagram');
[gm,pm,wpc,wgc]= margin(sys)
cltf=feedback(sys,1);
[y t]= step(cltf);
subplot(2,1,2)
plot(t,y);
stepinfo(cltf);