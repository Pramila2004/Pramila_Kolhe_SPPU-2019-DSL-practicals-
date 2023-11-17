
# Assignment 16 : Group B
# Write a Python program to store first year percentage of students in array. Write function for sorting array of floating point numbers in ascending order using quick sort and display top five scores.							


def partition(arr,low,high):
	pivot=arr[low]
	i=low+1
	j=high
	while i<=j:
		while i <= j and arr[i] <= pivot:
			i += 1
		
		while i <= j and arr[j] >= pivot:
			j -= 1
		
		if i<=j:
			temp=arr[i]
			arr[i]=arr[j]
			arr[j]=temp
				 	
	temp=arr[low]
	arr[low]=arr[j]
	arr[j]=temp
	
	return j
		
	
def Quick_sort(arr,low,high):
	if low<high:
		pivot_position=partition(arr,low,high)
		Quick_sort(arr,low,pivot_position-1)
		Quick_sort(arr,pivot_position+1,high)
	

marks=[]

n=int(input("Enter Number of Students : "))
for i in range(n):
	element=int(input())
	marks.append(element)
		
print("Your Entered Marks : ")
print(marks)

Quick_sort(marks,0,n-1)
print("Sorted Marks : ",marks)	
print("Top 5 Scores : ",marks[-5:])	



#Quick sor with out using reccurssion
# def quick(arr):
# 	if len(arr)<=1:
# 		return arr
		
# 	s=[(0,len(arr)-1)]
# 	while s:
# 		left,right=s.pop()
# 		print(left," ",right)
# 		pivot=arr[right]
# 		i=left-1
# 		for j in range(left,right):
# 			if arr[j]<pivot:
# 				i+=1
# 				arr[i],arr[j]=arr[j],arr[i]
# 		arr[i+1],arr[right]=arr[right],arr[i+1]
# 		pind=i+1
# 		if pind-1>left:
# 			s.append((left,pind-1))
# 		if pind+1<right:
# 			s.append((pind+1,right))
		
# 	print("Sorted Marks List : ",arr)	

# 	ts=arr[-5:]
# 	return ts












