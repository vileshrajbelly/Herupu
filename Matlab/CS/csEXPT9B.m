clc;clear all; close all;
syms s;
k=input('enter value of k,k=');
num=k;
deno=[1 25];
%for type 2:
deno=[1 2 0 0]
kp=limit((10/s*(s+2)),0)
esspara=1/kp;
kv=limit((s*10/s^2*(s+2)),0)
essramp= 1/kv

ka=limit((s^2*10/s^2+(s+2)),0)
esspara=1/ka