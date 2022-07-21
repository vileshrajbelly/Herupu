g1=[ 2 1 2 1];
g2=[1,2,3,4];

n1=length(g1);
n2=length(g2);

g1e=[g1,zeros(1,n2-1)];
g2e=[g2,zeros(1,n1-1)];


N=n1+n2-1;

for n=0:N-1
    y(n+1)=0;
    for k=0:N-1
        i=mod((n-k),N);
        if i<0
            i=i+N;
        end
        y(n+1)=y(n+1)+g2e(k+1)*g1e(i+1);
    end
end
disp('Circular convolution:y(m)==>')
disp(y)

subplot(3,1,1);
stem(g1);
xlabel('--->n');ylabel('amp');title('first input x(n)');

subplot(3,1,2);
stem(g2);
xlabel('--->n');ylabel('amp');title('second input h(n)');

subplot(3,1,3);
stem(y);
xlabel('--->n');ylabel('amp');title('linear convolution output y(n)');
