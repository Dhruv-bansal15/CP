n= int(input())
if(n<3):
    print(-1)
else:
    if(n==3):
        print(210)
    else:
        remain = (10**(n-1))%210
        num = 10**(n-1) + 210 - remain
        print(num)
        