clc;
clear all;
close all;
num=[0 0 0 1]
den=[1 2 0 0]
subplot(3,1,1);
sys=tf(num,den)
rlocus(sys)
title('original system');
num1=[0 0 1 1]
den1=[1 2 0 0]
subplot(3,1,2);
sys1=tf(num1,den1)
rlocus(sys1)
title('system with additional zero');
num2=[0 0 0 0 1]
den2=[1 3 2 0 0]
subplot(3,1,3);
sys2=tf(num2,den2)
rlocus(sys2)
title('system with additional pole');