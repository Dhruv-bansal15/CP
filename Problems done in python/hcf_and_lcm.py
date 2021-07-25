#a,b=input().split()
#a=int(a)
#b=int(b)
#i=2
#HCF=0
#LCM=0
#while i<=min(a,b):
#	if a%i==0 and b%i==0:
#		HCF=i
#	i=i+1	
#i=max(a,b)	
#while True:
#	if i%a==0 and i%b==0:
#		LCM=i
#		break
#	i=i+1
#if HCF==0:
#	HCF=1
#print(HCF,LCM)

a,b=input().split()
a=int(a)
b=int(b)
list1=[]
list2=[]
x=1
while x<=max(a,b):
	y=a*x
	z=b*x
	list1.append(y)
	list2.append(z)
	mix=set(list1).intersection(list2)
	if len(mix)>0:
		LCM=max(mix)
		break
	x=x+1
x=1
y=1
list1=[]
list2=[]
while a>=x:
	if a%x==0:
		list1.append(x)
	x+=1
while b>=y:
	if b%y==0:
		list2.append(y)
	y+=1
mix=set(list1).intersection(list2)
HCF=max(mix)
print(HCF,LCM)
