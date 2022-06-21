clear
clc
k=input('enter the value of gain k');
num=[50];
den=[1 4 0];
sys=tf(num,den);
subplot(2,1,1);
bode(sys);
xlabel('freq (rad/sec)');
ylabel('magnitude(db)');
title('Bode diagram');
[g,ph,wp,wg]=margin(sys);
cltf=feedback(sys ,1)
[y t]=step(cltf);
subplot(2,1,2);
plot(t,y);
stepinfo(cltf)