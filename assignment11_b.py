# Assignment 11 : Group B
# B. Write a Python program to store roll numbers of student array who attended
#  training program in sorted order. Write function for searching whether particular 
# student attended training program or not, using Binary search and Fibonacci search"							



def binary_search(Roll_no,key):
	low=0
	high=len(Roll_no)-1
	flag=0
	while(low<=high):
		mid=(low+high)//2
		if Roll_no[mid]==key:
			flag=1
			print("Element ",Roll_no[mid]," is Found at ",mid)
			break
		elif Roll_no[mid]<key:
			low=mid+1
		else:
			high=mid-1
			

	if flag!=1:
		print("Element Not found")


def fibonacci_search(Roll_no,key):
	flag=0
	fib1=0
	fib2=1
	fib=fib1+fib2
	n=len(Roll_no)-1
	while(fib<n):
		fib1=fib2
		fib2=fib
		fib=fib1+fib2
		
	offset=-1
	while(fib>1):
		i=min(offset+fib1,n)
		if Roll_no[i]==key:
			flag=1
			print("Element is found!!!")
			break
		
		elif Roll_no[i]>key:
			fib=fib1
			fib2=fib2-fib1
			fib1=fib-fib2
		else:
			fib=fib2
			fib2=fib1
			fib1=fib-fib2
			offset=i
			        
	if flag!=1:
		print("Element Not found")






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
	print("1.Binary Search")
	print("2.Fibonacci Search")
	print("3.Exit")
	choice=int(input("Enter your choice : "))
	if choice==1:
		key=int(input("Eneter Roll Number to be Searched : "))
		binary_search(Roll_no,key)
	if choice==2:
		key=int(input("Eneter Roll Number to be Searched : "))
		fibonacci_search(Roll_no,key)
	if choice==3:
		flag=0


