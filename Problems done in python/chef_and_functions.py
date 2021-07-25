import math
def root(i,x):
	ans= math.floor(x**(1/i))
	return ans

def f(A,values_of_x):
	n=len(A)
	no_of_queries=len(values_of_x)
	for i in range(no_of_queries):
		ans=0
		x=values_of_x[i]
		ans+=root(i,x)*A[i-1] for i in range(1,n+1) 
	ans= ans%(10**9 + 7)
	print(ans, end=" ")


T=int(input())
for i in range(T):
	N,Q=map(int, input().split())
	elements_of_A=list(map(int, input().split()))
	values_of_x=list(map(int, input().split()))
	f(elements_of_A,values_of_x)