
# Assignment 11 : Group B
# "Write a Python program to store first year percentage of students in array. Write function for sorting array of floating point numbers in ascending order using ⦁ Selection Sort
# ⦁ Bubble sort and display top five scores."							


marks=[]




def selection_sort(marks):
	for i in range(len(marks)):
		min=i
		for j in range(i,len(marks)):
			if marks[min]>marks[j]:
				min=j
		temp=marks[i]
		marks[i]=marks[min]
		marks[min]=temp
	print(marks)
	


def bubble_sort(marks):
	
	for i in range(len(marks)-1):
		
		for j in range(len(marks)-1):
			if marks[j]>marks[j+1]:
				temp=marks[j]
				marks[j]=marks[j+1]
				marks[j+1]=temp
	print(marks)
	
def highest(marks):
	print("Highest 5 Marks : ")
	n=len(marks)-1-5
	for i in range(len(marks)-1,n,-1):
		print(marks[i])
	



n=int(input("Enter Number of Students : "))
for i in range(n):
	element=int(input())
	marks.append(element)
		
print("Your Entered Marks : ")
print(marks)
		
flag=1
while(flag):



	print("*******************  CHOICE  ********************")
	print("1] Selection Sort : ")
	print("2] Bubble Sort    : ")
	print("33] Exit          : ")
	
	ch=int(input("Enter your Choice : "))
	
	if(ch==1):
		selection_sort(marks)
		highest(marks)
	if(ch==2):
		bubble_sort(marks)
		highest(marks)
		
	if(ch==3):	
		flag=0
		
		
		
		
		
		
		
		
		
		
		
	
