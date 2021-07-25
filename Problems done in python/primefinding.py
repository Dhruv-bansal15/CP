N=int(input())
a=[]
p=0
i=3
divisor=2
while p<=N:
	if divisor<=i**(0.5):
		if i%divisor==0:
			i=i+1
		else:
			divisor=divisor+1
			if divisor>=i**(0.5):
				p=p+1
				a.append(i)
				i=i+1
i=0
while i<len(a):
	print(a[i],end="")