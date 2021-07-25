def sort_counting(arr):
	the_max= max(arr)
	freq_and_then_prefixsum=[0]*(the_max+1)
	for i in range(0,len(arr)):
		freq_and_then_prefixsum[arr[i]]+=1

	#lets calculate prefix sum now 
	for i in range(1,len(freq_and_then_prefixsum)):
		freq_and_then_prefixsum[i]=freq_and_then_prefixsum[i]+freq_and_then_prefixsum[i-1]

	final_output=[0]*len(arr)

	for i in range(len(arr)-1, -1, -1): 
		final_output[freq_and_then_prefixsum[arr[i]] - 1] = arr[i]
		freq_and_then_prefixsum[arr[i]] -= 1

	#lets print the list now
	for i in range(0,len(final_output)):
		print(final_output[i],end=" ")
	print()
T=int(input())
for i in range(0,T):
	n=int(input())
	list_of_numbers=list(map(int, input().split()))
	sort_counting(list_of_numbers)
