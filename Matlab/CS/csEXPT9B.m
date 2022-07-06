clc;clear all; close all;
syms s;
k=input('enter value of k,k=');
num=k;
deno=[1 25];
oltf=tf(num,deno);
cltf=feedback(oltf,1);

kp=limit (k/(s+25),0)
essstep=1/(1+kp)
kv=limit(s*(k/(s+25)),0)
essramp=1/kv
ka= limit(s*s*(k/(s+25)),0)
esspara=1/ka

%for type 1
kp=limit(k/(s*(s+1)),0)
essstep=1/(1+kp)
kv=limit(s*(k/s*(s+1),0)
essramp=1/kv
ka=limit((s*s*(k/s*(s+1)),0)
esspara=1/ka

%for type 2
kp=limit(k/((s^3)+2*(s^2)),0)
essstep=1/(1+kp)
kv=limit((s+k)/(s^3)+2*(s^2),0)
essramp=1/kv
ka=limit((s*s*k)/(s^2)+(2*(s^2)),0)
esspara=1/ka
