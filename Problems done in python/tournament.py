no_of_unproffitable_matches_list=[]
under=[]
def merge(a, b):
	count=False
	n = len(a)
	u = len(b) 
	output = [0]*(n+u) 
	i, j, k = 0, 0, 0
	while(i < n and j < u):
		if a[i] <= b[j]:
			if a[i]==b[j]:
				count=True 
			output[k] = a[i]
			i += 1
			k += 1
			
		
		else:
			output[k] = b[j]
			j += 1
			k += 1

	while(j < u):
		
		output[k] = b[j]

		j += 1
		k += 1

	while(i < n):
		
		output[k] = a[i]
		i += 1
		k += 1
	if count==True:
		no_of_unproffitable_matches_list.append(1)
	

	return output


def merge_sort(arr, left, right):
	
	if(left == right):
		
		return [arr[left]] 

	mid = (left + right) // 2
	left_half = merge_sort(arr, left, mid) 
	right_half = merge_sort(arr, mid+1, right)
	output = merge(left_half, right_half) 
	return output


n=int(input())
li = list(map(int, input().split()))
merge_sort(li, 0, len(li) - 1)
x=len(no_of_unproffitable_matches_list)
final_result= n-1-x
print(final_result)
