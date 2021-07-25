print("Enter your Good Name Sir/Mam")
Name=input()
print("Hello Mr.", Name, "Welcome to the Calculator application")
print("Enter on which two numbers, you want to perform the operation")
a=int(input())
b=int(input())
print("Enter the operation you want to perform")
operation=input()
if operation=="*":
	print("Output is:",a*b)
elif operation=="-":
	print("Output is:",a-b)
elif operation=="/":
	print("Output is:",a/b)
elif operation=="+":
	print("Output is:",a+b)
print("Thanks for using Mr. Dhruv's Application")	
