for _ in range(int(input())):
    n=int(input())
    arr=list(map(int, input().split()))
    total = sum(arr)
    if(total/n -1==0):
        print("0")
    elif(total/n>1):
        print(total-n)
    else:
        print(1)