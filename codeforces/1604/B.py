k = int(input())

while k:
    k -= 1

    ln = int(input())
    f=False
    t = list(map(int, input().split()))
    
    if len(set(t))%2==0:
        print("YES")
    else:
        for i in range(1,ln):
            if t[i]>t[i-1]:
                continue
            else:
                f=True
                break
        if f==True:
            print("YES")
        else:
            print("NO")
