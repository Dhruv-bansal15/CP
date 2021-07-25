
def min_coins(X,arr):
    for i in range(1,X+1):
        for j in range(0,N):
            if arr[j]>i:
                continue
            dp[i] = min(dp[i], 1 + dp[i - arr[j]])
    return dp[X]

N,X= map(int, input().split())

dp=[10**18]*(X + 1)
dp[0]=0
arr= list(map(int, input().split()))
result= min_coins(X,arr)
if result==10**18:
    print("-1")
else:
    print(result)
