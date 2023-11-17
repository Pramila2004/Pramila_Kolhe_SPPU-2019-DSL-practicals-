# Assignment 11 : Group B
# "A.  Write a Python program to store roll numbers of student in array who 
# attended training program in random order. Write function for searching whether 
# particular student attended training program or not, using Linear search and Sentinel search.

def linear_search(Roll_no,key):
	flag=0
	for i in range(len(Roll_no)):
		
		if Roll_no[i]==key:
			flag=1
			print("Element ",Roll_no[i]," Found at ",i)
			
	if flag!=1:
		print("Element Not found!!!")



def sentinel_search(Roll_no,key):
	size=len(Roll_no)
	last=Roll_no[size-1]
	Roll_no[n-1]=key
	i=0
	while(Roll_no[i]!=key):
		i+=1
		

	Roll_no[n-1]=last
	

	if((i<size-1)or(Roll_no[size-1]==key)):
		print("Element ",key," Found at ",i)
	else:
		print("Element is Not found ")


Roll_no=[]
n=int(input("Enter total number of students : "))
print("Enter Roll Numbers of students : ")
i=0
while(i<n):
	element=int(input())
	if(element not in Roll_no):
		Roll_no.append(element)
	else:
		n+=1
		print("*****Repeated roll number*****")	
	i+=1	
print("Entered Roll Numbers : ",Roll_no)






flag=1	
while(flag):
	print("********************************MENU*******************************")
	print("1.Linear Search")
	print("2.Sentinel Search")
	print("3.Exit")
	choice=int(input("Enter your choice : "))
	if choice==1:
		key=int(input("Eneter Roll Number to be Searched : "))
		linear_search(Roll_no,key)
	if choice==2:
		key=int(input("Eneter Roll Number to be Searched : "))
		sentinel_search(Roll_no,key)
	if choice==3:
		flag=0
	
		