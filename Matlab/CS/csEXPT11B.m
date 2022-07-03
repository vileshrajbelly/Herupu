clc
clear all
close all
num=[1]
den=[1 3 2 0]
subplot(3,1,1)
sys=tf(num,den)
rlocus(sys)
title('root locus');
subplot(3,1,2)
bode(sys)
title('bode plot');
subplot(3,1,3)
nyquist(sys)
title('nyquist plot');