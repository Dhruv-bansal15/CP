import math 
def check_prime(num):
	if num==2:
		return True
	elif num==3:
		return True 
	elif num%2==0:
		return False
	else:
		for i in range(3,math.floor(num**0.5)+1):
			if num%i==0:
				return False
		return True 
def pwr(a, b):
    ans=1
    for i in range(0,b):
        ans*=a 
    
    
    return ans
a,b=[int(x) for x in input().split()]
answer=pwr(a,b)
print(answer)











