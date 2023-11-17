// Assignment 25 : Group D
// "A palindrome is a string of character that‘s the same forward and backward. Typically, punctuation, capitalization, and spaces are ignored. For example, “Poor Dan is in a droop” is a palindrome, as can be seen by examining the characters “poor danisina droop” and observing that they are the same forward and backward. One way to check for a palindrome is to reverse the characters in the string and then compare with them the original-in a palindrome, the sequence will be identical. Write C++ program with functions-
// ⦁ To print original string followed by reversed string using stack
// ⦁ To check whether given string is palindrome or not"							


#include <iostream>
#include <stdlib.h>

#define MAX 50
char stack[MAX];
int top=-1;

using namespace std;


int isEmpty(){
	if(top==-1){
	
		return 1;
	
	}else{
		return 0;
	}

}

int isFull(){
	if(top>=MAX){
	
		return 1;
	
	}else{
		return 0;
	}

}

void push(char ch){
	
	if(isFull()){
		cout<<"Stack Overload!!!"<<endl;
	
	}else{
	
		top++;
		stack[top]=ch;
	
	}


}

char pop(){
	
    char popped_element;
	if(isEmpty()){
		cout<<"Stack is Empty!!!"<<endl;
		
	}else{
        popped_element=stack[top];
		top--;
	
	}
    
    return popped_element;

	

}

void reversing_string(string str){
        int i;
        for ( i = 0; i < str.length(); i++)
        {
            push(str[i]);
        }

        string reversed="";
       
        while(!isEmpty())
        {
            reversed+=pop();
        }

		cout<<"Original String : "<<str<<endl;
		cout<<"Reversed String : "<<reversed<<endl;

}

void palindrome(string str){
    int i;
    for (i = 0; i < str.length(); i++) {
        push(tolower(str[i])); 
    }

    
    for (i = 0; i < str.length(); i++) {
        if (stack[top] !=tolower(str[i])) {
            cout<<"String is Not palindrome!!!"<<endl;
            return;
        }
        pop();
    }
    if (isEmpty())
    {
        cout<<"String is Palindrome!!!"<<endl;
    }
    

     

}


int main()
{

		string str;
		
		cout<<"Enter your String : ";
		getline(cin,str);

        bool flag=true;
        int ch;

        cout<<"************************************MENU*********************************"<<endl<<endl;
        cout<<"1.To print original string followed by reversed string "<<endl;
        cout<<"2.To check whether given string is palindrome or not"<<endl<<endl;
        while (flag)
        {
            cout<<"Enter your choice : ";
            cin>>ch;
            switch (ch)
            {
                case 1:
                {
                    palindrome(str);
                }
                break;
                case 2:
                {
                    reversing_string(str);
                }
                break;
                case 3:
                {
                    flag=false;
                }
                break;
                default:
                {
                    cout<<"Invalid Input !!!!"<<endl;
                }
                break;
            }
        }

       
		



	return 0;
}



















