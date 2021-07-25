name="Dhruv Bansal"
year=1
branch="CSE"
cg=8.56
greeting="My name is %s and i am currently in my %dst year of %s and my motive is to score a CGPA of %f"%(name,year,branch,cg)
print(greeting)
greet= f"Hello my name is {name} and i am currently in my {year}st year"
print(greet)
print(format(45,"b"))
greets="My name is {} and i am in my {}st year and i want to score {} CGPA".format(name,year,cg)
print(greets)
greets="My name is {x} and i am in my {y}st year and i want to score {z} CGPA".format(x=name,y=year,z=cg)
print(greets)

def Addition(x,y):
	Sum=x+y
	print("Congratulation")
	return Sum
print(Addition(2,5))
def Dhruv():
	print("Dheeraj is a good boy")
Dhruv()
def Hypotonuse(A,B):
	
	answer=(A**2+B**2)**(0.5)
	print("So here you got the result")
	return answer
print(Hypotonuse(23,22))

last_name="Khandelwal"
lists=[0,1,2,3,4,5,6]
print(last_name[0:5])
print(last_name[0:])
print(last_name[-3:])
print(last_name[2:6])
print(last_name[0::2])
lists[0:4]=[10,9,8,7]
print(lists)