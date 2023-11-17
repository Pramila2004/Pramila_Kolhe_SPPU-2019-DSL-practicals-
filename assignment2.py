# Assignment 2 : Group A
# Write a Python program to store marks scored in subject “Fundamental of Data Structure” by N students in the class. Write functions to compute following:
# ⦁ The average score of class
# ⦁ Highest score and lowest score of class
# ⦁ Count of students who were absent for the test
# ⦁ Display mark with highest frequency							


rollNumber=[]
marks=[]

n=int(input("Enter total number of students : "))

i=0

while i<n:
	element=int(input("Enter Roll Numbers : "))
	element2=int(input("Enter Marks        : "))
    
   
	if((element not in rollNumber) and (element2 <=30 and element2 >=-1)):
		rollNumber.append(element)
		marks.append(element2)
		
	else:
		n=n+1
		print("*****Repeated roll number or invalid marks*****")
		

	i=i+1
	
print("Roll Numbers         Marks")
j=0
for i in rollNumber:
	print(i,"                       ",marks[j])
	j=j+1



def avg(m):
	sum=0
	i=0
	length=len(m)
	for i in range(length):
		if m[i] != -1:
			sum=sum+m[i]
			i=i+1
		else:
			length=length-1		
	print("Average : ",sum/length)
	
	
def highest(m):
	i=0
	length=len(m)
	high=0
	
	for i in range(length):
		if m[i]>high:
			high=m[i]
			i+=1


	print("Highest Score : ",high)
	
	
def lowest(m):
	i=0
	low=0
	length=len(m)
	
	
	for i in range(length):
		if m[i]!=-1:
			low=m[i]
			break
		else:
			i=i+1

	i=0
	while i<length:
		if low>m[i] and m[i]!=-1:
			low=m[i]
		i=i+1
	print("Lowest Score : ",low)

def absent(m):
	count=0
	for i in range(len(m)):
		if marks[i]== -1:
			count+=1
			
	print("Number of Absent Students : ",count)

def Frequency(m):

	count=0
	freq=0 
	for i in range(len(m)):
		for j in range(len(m)):
			if m[i]==m[j]:
				count+=1
		freq=count
		count=0
		
		if freq<count:
			freq=count
		
	print("Highest Frequency of marks ",m[i]," is ",freq)


flag=True
print()
print("1. The average score of class : ")
print("2. Highest score and lowest score of class : ")	
print("3. Count of students who were absent for the test : ")	
print("4. Display mark with highest frequency : ")	
print("5. Exit")	
print()	
while(flag):	
			
	ch=int(input("Enter your choice : "))

	if ch>5 and ch<1:
		print("Invalid Input!!")
	elif ch==1:
		print()
		avg(marks)
		print()
	elif ch==2:
		print()
		highest(marks)
		lowest(marks)
		print()
	elif ch==3:
		print()
		absent(marks)
		print()
	elif ch==4:
		print()
		Frequency(marks)
		print()
	elif ch==5:
		flag=False

	
		





	




	











