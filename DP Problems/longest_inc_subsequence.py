def ls_bottom_up(n,arr):
    for i in range(1,n):
        for j in range(0,i):
            if arr[i]>arr[j]:
                dp[i] = max(dp[i], 1 + dp[j])
    return max(dp)
n= int(input())
arr=list(map(int, input().split()))
dp=[1]*n 
print(ls_bottom_up(n, arr))












