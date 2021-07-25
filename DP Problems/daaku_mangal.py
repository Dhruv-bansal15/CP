
# def daaku_mangal_BOTTOM_UP(N,arr):
#     if N==0:
#         return arr[0]
#     if N==1:
#         return max(arr[0],arr[1])
    
#     dp[0]= arr[0]
#     dp[1]= max(arr[0],arr[1])
#     for i in range(2,N):
#         dp[i]= max(dp[i-1], dp[i-2] + arr[i])
#     return dp[N - 1]
def daaku_mangal_top_down(N,arr):
    dp[0] = arr[0]
    dp[1] = max(arr[0],arr[1])
    
    if N==0:
        return arr[0]
    if N==1:
        return max(arr[0],arr[1])
    if dp[N]!=-1:
        return dp[N]
    dp[N] = max(daaku_mangal_top_down(N-2, arr) + arr[N], daaku_mangal_top_down(N-1, arr))
    return dp[N]
N=int(input())
dp=[-1]*(N)
arr=list(map(int, input().split()))
print(daaku_mangal_top_down(N-1,arr))

