n,k= map(int, input().split())
arr= list(map(int, input().split()))
dp=[0]*(k+1)
for i in range(1, k + 1):
    for j in range(len(arr)):
        if arr[j] > i:
            continue
        if dp[i - arr[j]]==0:
            dp[i]=1
if dp[k]==1:
    print("First player won")
else:
    print("Second player won")
