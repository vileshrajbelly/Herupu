clear
clc
num1=[10];
den1=[1 14];
sys1=tf(num1,den1);
[y1 t1]=step(sys1);
stepinfo(sys1)
subplot(3,2,1); plot(t1,y1);
title("stepreponse of openloop");xlabel("time in sec");ylabel("amplitude");

num2=[20];
den2=[1 24];
sys2=tf(num2,den2);
[y2 t2]=step(sys2);
stepinfo(sys2)
subplot(3,2,2); plot(t2,y2);
title("stepreponse of p");xlabel("time in sec");ylabel("amplitude");

num3=[2 20];
den3=[3 24];
sys3=tf(num3,den3);
[y3 t3]=step(sys3);
stepinfo(sys3)
subplot(3,2,3); plot(t3,y3);
title("stepreponse of pd");xlabel("time in sec");ylabel("amplitude");

num4=[20 0.5];
den4=[1 24 0.5];
sys4=tf(num4,den4);
[y4 t4]=step(sys4);
stepinfo(sys4)
subplot(3,2,4); plot(t4,y4);
title("stepreponse of pi");xlabel("time in sec");ylabel("amplitude");

num5=[2 20 1];
den5=[3 24 1];
sys5=tf(num5,den5);
[y5 t5]=step(sys5);
stepinfo(sys5)
subplot(3,2,5); plot(t5,y5);
title("stepreponse of pi");xlabel("time in sec");ylabel("amplitude");