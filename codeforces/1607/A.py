a=int(input())
while a:
    a-=1
    n=input()
    k=input()
    ans=0
    for i in range(1,len(k)):
        ans+=abs(n.index(k[i])-n.index(k[i-1]))
    print(ans)
