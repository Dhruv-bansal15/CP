def lets_cut_the_sticks(arr,x):
	for i in range(len(arr)):
		arr[i]-=x
	
	i=0
	while arr[i]==0:
		arr.remove(0)
		if len(arr)==0:
			return arr
		
	return arr

N=int(input())
len_of_sticks=list(map(int, input().split()))
len_of_sticks.sort()
while len(len_of_sticks)>0:
	print(len(len_of_sticks))
	length_cutted=len_of_sticks[0]
	len_of_sticks= lets_cut_the_sticks(len_of_sticks,length_cutted)
