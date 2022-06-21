clear 
clc

num1=16;
den1=[1,4,16];
sys1=tf(num1,den1);
[y1,t1]=step(sys1);
subplot(3,1,1);
plot(t1,y1);
xlabel('T in sec');ylabel('Amplitude');title('under damped response 1BG19EE048');
op1=stepinfo(sys1,'risetimelimits',[0 1]);


num2=16;
den2=[1,8,16];
sys2=tf(num2,den2);
[y2,t2]=step(sys2);
subplot(3,1,2);
plot(t2,y2);
xlabel('T in sec');ylabel('Amplitude');title('critically damped response');
op2=stepinfo(sys2);


num3=16;
den3=[1,16,16];
sys3=tf(num3,den3);
[y3,t3]=step(sys3);
subplot(3,1,3);
plot(t3,y3);
xlabel('T in sec');ylabel('Amplitude');title('over damped response');
op3=stepinfo(sys3);