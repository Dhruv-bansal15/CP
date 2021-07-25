tuple1=("String",2,6,9,False,"Dhruv","2")
tuple2=(2,8,-8,"Bansal")

print(tuple2+tuple1)
print(tuple2[2])
print(tuple1[5],tuple2[3])
print(tuple1[6])
print(tuple1)

for i in range(0,len(tuple1)):
	print(tuple1[i],end="  ")


print(tuple2*4)
print(tuple1[5] *4)
print(list(tuple1))

x=list(tuple2)
x.append("Dhruv")
x.pop(2)
x.remove("Bansal")
for i in range(0,len(x)):
	print(x[i])

print(tuple2[6:])
print(tuple1[1:5])
print(tuple1[1:5:2])

print("")
print("")
dic1={"Dhruv":"Good boy",5:"An integer",(2,"Prabhu"):"Tuple",5:-9}
dic2={"Bansal":"Last name",6:8}
print(dic1)


dic2["Bansal"]="Singh"
print(dic2)

dic2["location"]="Bathida"
print(dic2)

del dic2["location"]
print(dic2)

print(dic2.get("Singh"), dic2.get("Location"))

print(dic2.keys())
x=dic1.keys()
print(x)

for i in x:
	print(i)

print(len(dic1))
print("")
print("")

for i in range(0,9):
	print(i,end=" ")
print("")
for i in range(0,9,2):
	print(i,end=" ")
print("")
for i in range(0,9,1):
	print(i,end=" ")
print("")

for i in range(9,1,-1):
	print(i,end=" ")
