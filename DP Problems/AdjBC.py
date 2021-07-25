def adjbc(n,k,first_bit):
    if n==0:
        return 0
    if n==1:
        if k==0:
            return 1
        else:
            return 0
    if dp[n][k][first_bit] != -1:
        return dp[n][k][first_bit]
    if first_bit==0:
        answer= adjbc(n-1, k, 0) + adjbc(n-1, k, 1)
    else:
        answer= adjbc(n-1, k, 0) + adjbc(n-1, k-1, 1)
    dp[n][k][first_bit] = answer 
    return dp[n][k][first_bit]

for i in range(int(input())):
    num,n,k=map(int, input().split())
    dp= [[[-1]*2]*105]*105
    ans = adjbc(n,k,0) + adjbc(n,k,1)
    print(ans)

    