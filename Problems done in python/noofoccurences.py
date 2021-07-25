

import sys
 
def find_pos(x):
    print('1 ' + str(x))
    sys.stdout.flush()
    t = int(input())
    return t
# ----------------- Do not modify anything above this line -----------------------
# Complete this function count(n, x), this returns 0 always and hence is wrong, it should return the number of occurrences of x in Chef's array
# You can use the function find_pos(x) to find the value of the element at position x (0 indexed)
# If the index is invalid or you use more than 40 queries to obtain the value, you will receive Wrong Answer
# Chef's array size is not more than 10 ** 5
def count(n, x):
	lowest_index=0 



	highest_index=0
	answer=0
	lo,hi=0,10**5
	while lo<=hi:
		mid=(lo+hi)//2
		if find_pos(mid)>x:
			highest_index=mid-1
			hi=mid-1
		elif find_pos(mid)<=x:
			lo=mid+1
	lo,hi=0,10**5
	while lo<=hi:
		mid=(lo+hi)//2
		if find_pos(mid)<x:
			lowest_index=mid+1
			lo=mid+1 
		elif find_pos(mid)>=x:
			hi=mid-1
	answer= highest_index - lowest_index -1
	return answer
		
 
# ----------------- Do not modify anything below this line -----------------------
 
n = int(input())
x = int(input())
 
print('2 ' + str(count(n, x)))