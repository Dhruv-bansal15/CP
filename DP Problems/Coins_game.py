def fun(n,l,k):
    for i in range(1,n + 1):
        if i<l and i<k:
            if dp[i - 1]==0:
                dp[i]=1
        else:
            if dp[i-1]==0:
                dp[i]=1
                continue
            
            if i>=l:
                if dp[i-l]==0:
                    dp[i]=1
                    continue
            if i>=k:
                if dp[i - k]==0:
                    dp[i]=1
                    continue
    return dp[n]

t=int(input())
for _ in range(t):
    N,l,k= map(int, input().split())
    dp=[0]*(N + 1)
    if fun(N,l,k)==1:
        print("Asen")
    else:
        print("Boyan")