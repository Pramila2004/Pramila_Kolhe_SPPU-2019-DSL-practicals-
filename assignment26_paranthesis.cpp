// Assignment 26 : Group D
// "In any language program mostly syntax error occurs due to unbalancing delimiter such as
// (),{},[]. Write C++ program using stack to check whether given expression is well parenthesized or not."							


#include <iostream>
#include <stdlib.h>
#include <conio.h>

#define MAX 20
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

void pop(){
	

	if(isEmpty()){
		cout<<"Stack is Empty!!!"<<endl;
		
	}else{
	
		// stack[top]=NULL;
		top--;
	
	}

	

}


int main()
{

		string exp;
		system("CLS");
		cout<<"Enter your Expression : ";
		cin>>exp;
		
		char popped_element;
		for(int i=0;i<exp.length();i++)
		{

			switch (exp[i])
			{
				case '(':
					push('(');
				break;	
				case '[':
					push('[');
				break;	
				case '{':
					push('{');
				break;	
				case ')':
					popped_element=stack[top];
					if(popped_element!='('){
						cout<<"Invalid Expression !!!"<<endl;
						return 0;
					}
					else{
					
						pop();
					}
				break;	
				case ']':
					popped_element=stack[top];
					if(popped_element!='['){
						cout<<"Invalid Expression !!!"<<endl;
						return 0;
					}else{
					
						pop();
					}
				break;	
				case '}':
					popped_element=stack[top];
					if(popped_element!='{'){
						cout<<"Invalid Expression !!!"<<endl;
						return 0;
					}else{
					
						pop();
					}
				break;	
			
			}

			
		}

		if(isEmpty()){
			cout<<"Valid Expression !!!"<<endl;
		}else{
			cout<<"Invalid Expression !!!"<<endl;
		
		}


	return 0;
}



















