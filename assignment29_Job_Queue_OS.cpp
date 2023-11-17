// Assignment 29 : Group E
// "Queues are frequently used in computer programming, and a typical example is the creation of a job queue by an operating system. If the operating system does not use priorities, then the jobs are processed in the order they enter the system. Write C++
// program for simulating job queue. Write functions to add job and delete job from queue"							


#include <iostream>
#include <conio.h>
using namespace std;

#define MAX 10

int front=-1,rare=-1,Queue[MAX];


int isFull(){
    if (rare==MAX-1)
    {
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(){
    if (rare<front)
    {
        return 1;
    }else{
        return 0;
    }
}

void enqueue(int x){

    if (isFull())
    {
        cout<<"Queue is Full!!!"<<endl;
    }else{
        if (front==-1 && rare==-1)
        {
            front=0;
            rare=0;
        }else{
            rare++;
        }
        Queue[rare]=x;
        cout<<"\n\nJob Entered Successfully into The Job Queue"<<endl<<endl;
    }
}
int dequeue(){
    int data;
    if (isEmpty())
    {
        cout<<"Queue is Empty!!!"<<endl;
    }else{
        data=Queue[front];
        front++;
    }
    return data;
}

void display(){

    int i=front;
    if (isEmpty())
    {
        cout<<"Queue Is Empty!!!"<<endl<<endl;
    }else{
        
        while (i<=rare)
        {
            cout<<i+1<<".    "<<Queue[i]<<endl;
            i++;
        }
    cout<<endl;
    }

    

}

int main(){

    int ch,job;
    bool flag=true;
    while (flag)
    {
        system("CLS");
        cout<<"**********************************MENU******************************************"<<endl;
        cout<<"\n 1.Insert Job\n 2.Delete Job\n 3.Display\n 4.Exit\n\n Enter your choice : ";
        cin>>ch;
        switch(ch)
        {  
            case 1: 
            {   
                    cout<<"\n Enter data of Job : \n";
                    cin>>job;
                    enqueue(job);
                    
                    getch();
            }
            break;
            case 2: 
            {
                
                    dequeue();
                    cout<<"\n\n*******************************Remaining Jobs After Deleting Job ********************************"<<endl<<endl;
                    display();
                    getch();
            }
            break;
            case 3: 
            {  
                    cout<<"\n\nAll Jobs Queue contains : \n\n";
                    display();
                    getch();
            }
                
            break;
            case 4: 
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