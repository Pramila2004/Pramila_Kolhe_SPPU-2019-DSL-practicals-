
# Assignment 1 : Group A
# In second year computer engineering class, group A student’s play cricket, group B
# students play badminton and group C students play football. Write a Python program 
# using functions to compute following: -
# ⦁ List of students who play both cricket and badminton
# ⦁ List of students who play either cricket or badminton but not both
# ⦁ Number of students who play neither cricket nor badminton
# ⦁ Number of students who play cricket and football but not badminton.
# 						

comp=[]
cricket=[]
football=[]
Badminton=[]

n=int(input("Enter total number of students : "))

print("Enter rollnumbers of students : ")
for i in range (0,n):
	element=int(input())
	if(element not in comp):
		comp.append(element)

	else:
		print("*****Repeated roll number*****")
		
print(comp)

c=int(input("Enter total number of students who plays cricket : "))
print("Enter Rollnumbers of students who plays cricket : ")
for i in range (0,c):
	element=int(input())
	if(element in comp and element not in cricket):
		cricket.append(element)
	else:
		print("*****Repeated or invalid roll number*****")
	
print(cricket)

f=int(input("Enter total number of students who plays football : "))
print("Enter Rollnumbers of students who plays football : ")
for i in range (0,f):
	element=int(input())
	if(element in comp and element not in football):
		football.append(element)
	else:
		print("*****Repeated or invalid roll number*****")
	
print(football)


b=int(input("Enter total number of students who plays Badminton : "))
print("Enter Rollnumbers of students who plays Badminton : ")
for i in range (0,b):
	element=int(input())
	if(element in comp and element not in Badminton):
		Badminton.append(element)
	else:
		print("*****Repeated or invalid roll number*****")
	
print(Badminton)



def intersectionFun(l1,l2):
	l3=[]
	for i in l1:
		if i in l2:
			l3.append(i)
			
	return l3


def symmetricDiff(l1,l2):

	l3=[]
	for i in l1:
		if i not in l2:
			l3.append(i)
			
			
	for i in l2:
		if i not in l1:
			l3.append(i)
			
	return l3

def union(l1,l2):
	l3=[]
	for i in l1:
		l3.append(i)

	for i in l2:
		if i not in l3:
			l3.append(i)

	return l3
		

def diffrence(l1,l2):
    l3=[]
    for i in l1:
        if i not in l2:
            l3.append(i)
    return l3



	
flag=True
print()
print("1. List of students who play both cricket and badminton : ")
print("2. List of students who play either cricket or badminton but not both : ")	
print("3. Number of students who play neither cricket nor badminton : ")	
print("4. Number of students who play cricket and football but not badminton : ")	
print("5. Exit")	
print()	
while(flag):	
			
	ch=int(input("Enter your choice : "))

	if ch>5 and ch<1:
		print("Invalid Input!!")
	elif ch==1:
		print()
		print("List of Students who plays both cricket and Badminton ",intersectionFun(cricket,Badminton))
		print()
	elif ch==2:
		print()
		print("List of students who play either cricket or badminton but not both ",symmetricDiff(cricket,Badminton))
		print()
	elif ch==3:
		print()
		print("Number of students who play neither cricket nor badminton ",len(diffrence(football,union(cricket,Badminton))))
		print()
	elif ch==4:
		print()
		print("Number of students who play cricket and football but not badminton ",len(diffrence(intersectionFun(cricket,football),Badminton)))
		print()
	elif ch==5:
		flag=False

	
		


