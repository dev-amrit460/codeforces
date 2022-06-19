t=int(input())
for i in range(t):
    n=int(input())
    a=int(input())
    for i in range(1,9):
        b=str(i)*(n+1)
        c=str(i)*(n)
        if len(str(int(b)-a))==n:
            print(int(b)-a)
            break
        elif len(str(int(c)-a))==n:
            print(int(c)-a)
            break