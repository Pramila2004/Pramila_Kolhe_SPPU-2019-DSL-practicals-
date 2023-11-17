
// Assignment 31 : Group E
// "A double-ended queue (deque) is a linear list in which additions and deletions may be made at either end. Obtain a data representation mapping a deque into a one- dimensional array. Write C++ program to simulate deque with functions to add and
// delete elements from either end of the deque."							


#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 5

int front=-1,rear=-1,Queue[MAX],count=0;


int isFull(){
    if(rear >= MAX-1)
	{
		
		return 1;
	}else{
        return 0;
    }
}
int isEmpty(){
    if(front== -1)
	{
		return 1;
		
	}else{
        return 0;
    }
}
void insert_at_begining(int val){


        if(front==-1 && rear==-1)
        {
            front=rear=0;
            Queue[front]=val;
        }

        else if(front!=0)
        {
            front=front-1;
            Queue[front]=val;
        }

        else
        {
            cout<<"\nNot possible ";
        }
                
        
    

}
void insert_at_ending(int val){

        if (isFull())
        {
            cout<<"Queue is Full!!!"<<endl;
        }

        else
        {
            

            if(front==-1 && rear==-1)
            {
                front=rear=0;
                Queue[rear]=val;
                cout<<"\n\nElement Entered Successfully into The Queue"<<endl<<endl;
            }
            else
            {
                rear++;
                Queue[rear]=val;
                cout<<"\n\nElement Entered Successfully into The Queue"<<endl<<endl;
            }
        }
          
    
        
    

}

void delete_at_front(){

    if (isEmpty())
    {
        cout<<"Queue is Empty!!!"<<endl;
    }
    else
    {
        cout<<"the deleted element is :    "<<Queue[front];
        if(front==rear)
		{
			front=rear=-1;
			return;
		}else{
            front++;
        }
		
    }
}


void delete_at_rare(){

    if (isEmpty())
    {
        cout<<"Queue is Empty!!!"<<endl;
    }
    else
    {
        cout<<"the deleted element is :    "<<Queue[rare];
        if(front==rear)
		{
			front=rear=-1;
			
		}
		else{
            rear--;
        }
		
    }
}


void display(){
    if (isEmpty())
    {
        cout<<"\nQueue is Empty!!!"<<endl;
    }else{
        
        for(int i=front ; i<=rear ; i++)
        {
            cout<<Queue[i]<<"     ";
        }
            cout<<endl<<endl;
    }
            
}





int main(){

    bool flag=true;
    int ch,data;
    while (flag)
    {
        system("CLS");
        cout<<"**********************************MENU******************************************"<<endl<<endl;
		cout<<"\n1.Insert at beginning";
		cout<<"\n2.Insert at end";
		cout<<"\n3.Deletion from front";
		cout<<"\n4.Deletion from rear";
        cout<<"\n5.Display";
		cout<<"\n6.Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;

        switch(ch)
        {  
            case 1: 
            {   
                    cout<<"Enter the element to be inserted:";
			        cin>>data;
			        insert_at_begining(data);
                    getch();
            }
            break;
            case 2: 
            {
                
                    cout<<"Enter the element to be inserted:";
			        cin>>data;
			        insert_at_ending(data);
                    getch();
            }
            break;
            case 3: 
            {  
                    delete_at_front();
                    cout<<"\n\n*******************************Remaining Elements After Deleting Element ********************************"<<endl<<endl;
                    display();
                    getch();
			
                  
            }
                
            break;
            case 4: 
            {  
                    delete_at_rare();
                    cout<<"\n\n*******************************Remaining Elements After Deleting Element ********************************"<<endl<<endl;
                    display();
                    getch();
            }
                
            break;
            case 5: 
            {  
                    cout<<"\n\nAll Elements of Queue : \n\n";
                    display();
                    getch();
            }
                
            break;
            case 6: 
            {
                    flag=false;
            }
            break;
            default:
            {
                    cout<<"Invalid Input !!!"<<endl<<endl;
                    getch();
            }
            break;

        }
        
    }

    

    return 0;
}