t=int(input())
while t:
    t-=1
    sz=int(input())
    mx=float('-inf')
    k=list(map(int,input().split()))
    for i in range(0,sz):
        mx=max(mx,k[i]-(i+1))
    print(mx)
    

