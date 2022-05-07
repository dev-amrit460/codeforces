from math import factorial
m,n=map(int,input().split(' '))
if m==0:
    if n>4:
        print(0)
    else:
        print(factorial(n)%10)
else:
    ans=n%10
    for i in range(1,n-m):
        if(n-m>1 and (n-i)%10==5):
            ans=0
            break
        ans*=(n-i)%10
    if(n-m==0):
        ans=1
    print(ans%10)