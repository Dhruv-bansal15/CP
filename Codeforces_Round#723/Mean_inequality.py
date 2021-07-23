for _ in range(int(input())):
    n=int(input())
    arr= list(map(int, input().split()))
    arr.sort()
    for i in range(n):
        print(arr[i],end=" ")
        print(arr[2*n - 1 - i],end=" ")
    print()