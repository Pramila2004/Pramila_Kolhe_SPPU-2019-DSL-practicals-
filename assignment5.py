
# Assignment 5 : Group A
# Write a Python program to compute following operations on String:
# ⦁ To display word with the longest length
# ⦁ To determines the frequency of occurrence of particular character in the string
# ⦁ To check whether given string is palindrome or not
# ⦁ To display index of first appearance of the substring
# ⦁ To count the occurrences of each word in a given string							


def longest_length():
	str=input("Enter your String : ")
	print("Your String : ",str)
	large=0
	large_word=""
	word=""
	count=0
	str+=" "
	for i in range(len(str)):	
		if str[i]== " ":
			if count>large:
				large=count
				large_word=word
			count=0
			word=""
		else:
			word += str[i]
			count += 1

	print(large)
	print(large_word)
	
	
	
	
def palindrome():
	str=input("Enter your String : ")
	print("Your String : ",str)

	temp=""
	i=len(str)-1
	while i>=0:
		temp+=str[i]
		i -= 1
	print(str) 
	
	if str==temp:
		print("String is Palindrom!!!")
	else:
		print("String is not Palindrom!!!")
		
		
def frequency():
	str=input("Enter your String : ")
	ch=input("Enter Your character : ")
	count=0
	for i in range(len(str)):
		if(str[i]==ch):
			count=count+1
	print("Frequency occurence of ",ch," in ",str," is ",count)
		
			 
		
def substring_index():
	str=input("Enter your String : ")
	sub=input("Enter Your Substring : ")
	x=len(str)
	y=len(sub)
	
	if y==1:
		for i in range(x):
			if str[i]==sub:
				return i
			
			return -1
	
	for i in range(x-y+1):
		for j in range(y):
			if str[i+j]!=sub[j]:
				break
	
		if j+1==y:
			return i
	return -1
	
		
	
def occurance_of_each_word():
	str=input("Enter your String : ")
	occurance_of_words={}
	word=""
	for i in range(len(str)):
		if str[i]==" ":
			if word in occurance_of_words.keys():
				occurance_of_words[word]+=1
			else:
				occurance_of_words[word]=1;		
			word=""
		elif i==len(str)-1:
			word+=str[i]
			if word in occurance_of_words.keys():
				occurance_of_words[word]+=1
			else:
				occurance_of_words[word]=1
				
		else:
			word+=str[i]
	return occurance_of_words

print("1.To display word with the longest length")
print("2.To determines the frequency of occurrence of particular character in the string")
print("3.To check whether given string is palindrome or not")
print("4.To display index of first appearance of the substring ")
print("5.To count the occurrences of each word in a given string")
print("6.Exit")	

flag=1	
while(flag):

	choice=int(input("Enter your choice : "))
	if choice>6 and choice<1:
		print("Invalid Input!!")
	if choice==1:
		longest_length()
	if choice==2:
		frequency()
	if choice==3:
		palindrome()	
	if choice==4:
		index=substring_index()
		if index== -1:
			print("Substring is not Found!!!")
		else:
			print("Substring found at index ",index)
	if choice==5:
		a=occurance_of_each_word()
		print(a)
	if choice==6:
		flag=0































































































