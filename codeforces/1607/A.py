h = int(input())

while h:

    h =h- 1

    f = input()
    k = input()
    out = 0
    for i in range(1, len(k)):
        out += abs(f.index(k[i])-f.index(k[i-1]))
    print(out)
