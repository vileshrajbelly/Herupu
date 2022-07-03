clc;

close all;
ka=200; kp=1;
num1=[173.9];
deno= [1 6 173.9];
tf1= tf(num1,deno);
[y1 t1]= step(tf1);
figure(1);
subplot(2,1,1)
plot(t1,y1);

% xlabel('time in sec');
% ylabel('amplitude');
% title('dc motor position control');
stepinfo(tf1)

ka=1000; kp=1;
num2=[869.56];
deno2= [1 6 869.56];
tf2= tf(num1,deno2);
[y2 t2]= step(tf2);
figure(1);
subplot(2,1,2)
plot(t2,y2);

% xlabel('time in sec');
% ylabel('amplitude');
% title('dc motor position control');
stepinfo(tf2)
