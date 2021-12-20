t=int(input())
while t:
    t-=1
    n=input()
    if(len(n)%2!=0):
        print("NO")
    else:
        if(n[0:len(n)//2]==n[len(n)//2:len(n)]):
            print("YES")
        else:
            print("NO")