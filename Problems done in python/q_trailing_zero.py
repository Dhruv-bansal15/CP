def no_of_zeroes(n):
	count=0
	i=5
	while (n/i)>=1:
		count+= int(n/i)
		i*=5
	
	return count

Q=int(input())
lo=5
hi= 4*(10**8) + 15
arr=[]
while lo<=hi:
	mid= lo + (hi-lo)//2
	trailing_zeroes= no_of_zeroes(mid)
	if trailing_zeroes==Q:
		arr.append(mid)
		hi=mid-1
	elif trailing_zeroes>Q:
		hi=mid-1
	else:
		lo=mid+1
if len(arr)>0:
	print(arr[-1])
else:
	print("No solution")
