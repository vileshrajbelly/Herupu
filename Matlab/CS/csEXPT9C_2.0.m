clear;
clc;
num1=[4500];
deno1=[1 50.5 4500];
tf1=tf(num1,deno1);
[y1 t1]=step(tf1);
subplot(2,1,1);
plot(t1,y1);
out1=stepinfo(tf1)

num2=[4500 90000];
deno2=[1 75.5 5763 90000];
tf2=tf(num2,deno2);
[y2 t2]=step(tf2);
subplot(2,1,2);
plot(t2,y2);
out2=stepinfo(tf2)
