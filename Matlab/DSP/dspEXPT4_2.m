x1=input('enter the 1st sequence x(n)=')
h1=input('enter the second sequence h(n)=')
n1=length(x1);
n2=length(h1);
N=max(n1,n2);
if(n1>n2)
    h1=[h1,zeros(1,n1-n2)];
else
    x1=[x1,zeros(1,n2-n1)];
end
x=transpose(x1);
h=transpose(h1);
temp=h;
for i=1:N-1;
    temp=circshift(temp,1);
    h=horzcat(h,temp);
end
h
y=h*x
subplot(3,1,1);
stem(x1);
xlabel('N--->');ylabel('amp');title('first input sequence');

subplot(3,1,2);
stem(h1);
xlabel('N--->');ylabel('amp');title('second input sequence');

subplot(3,1,3);
stem(y);
xlabel('N--->');ylabel('amp');title('circular convoled output y(n)');
