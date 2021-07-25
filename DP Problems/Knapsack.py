def knapsack(n,w):
    if w==0:
        return 0
    if n==1:
        if weight[n]<=w:
            return cost[n]
        else:
            return 0
    if n==0:
        return 0
    if dp[n][w] != -1:
        return dp[n][w]
    if weight[n]>w:
        dp[n][w] = knapsack(n-1, w)
    else:
        dp[n][w] = max(knapsack(n-1, w), cost[n] + knapsack(n-1, w - weight[n]))
    return dp[n][w]


N,W= map(int, input().split())
weight=[]
cost=[]
weight.append(0)
cost.append(0)
for i in range(N):
    x,y= map(int, input().split())
    x.append(weight)
    y.append(cost)
dp=[[-1]*10**5]*(N + 1)
print(knapsack(N,W))