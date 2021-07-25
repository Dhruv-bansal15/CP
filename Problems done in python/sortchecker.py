def issorted(arr1,arr2):
	sorted_array=arr1(sorted)
	if sorted_array==arr2:
		return True
	else:
		print(sorted_array)
		return False




T=int(input())
for i in range(0,T):
	n=int(input())
	arr1=input().split()
	arr2=input().split()
	x=issorted(arr1,arr2)
	if x==True:
		print("yes")
	else:
		print("no")

