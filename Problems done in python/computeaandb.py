import sys
 
def add(a, b):
    print('1', a, b) 
    sys.stdout.flush()
    return int(input())
# --------------------- Do not touch anything above this line ----------------------
 
# The return value of this function is wrong, write the correct version of this function using the add(a, b) ...
# function defined above.
 
# Note that this function should return (a ** b) % m, you are guaranteed that add(a, b) returns (a + b) % m
 
def pwr(a, b):
	ans=1
	for i in range(0,b-1):
		ans*=a 	
	answer=0
	for i in range(0,ans//2):
		x=add(a,a)
		answer+=x
	if ans%2!=0:
		answer+=a 

	return answer
    
 
 
# --------------------- Do not touch anything below this line ----------------------
 
a, b = map(int, input().split())
ans = pwr(a, b)
print('2', ans)