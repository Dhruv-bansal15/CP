def min_mixing_req(color_values,n):
	freq={}



T=int(input())
for i in range(T):
	n=int(input())
	color_values=list(map(int, input().split()))
	color_values.sort()
	min_mixing_req(color_values,n)
