
// Assignment 32 : Group E
// "Pizza parlor accepting maximum M orders. Orders are served in first come first served basis. Order once placed cannot be cancelled. Write C++ program to simulate the system
// using circular queue using array."							



#include <iostream>
#include <conio.h>
using namespace std;

# define MAX_ORDER 5

int front=-1,rare=-1,order[MAX_ORDER];



int isEmpty(){

    if (front==-1 && rare==-1)
    {
        return 1;
    }else{
        return 0;
    }
    
}
int isFull(){
    if ((front==0 && rare==MAX_ORDER-1)||front==rare+1)
    {
        return 1;
    }else
    {
        return 0;
    }
}

void addOrder(){
    if (isFull())
    {
        cout<<"\n\nQueue is Full!!!"<<endl;
      
    }else{
        cout<<"\n\nEnter your Pizza ID : ";
        if (front==-1 && rare==-1)
        {
            front=0;
            rare=0;
            
        }
        else if(front>0 && rare==MAX_ORDER-1)
        {
            rare=0;
        }
        else
        {

            rare++;
        }
        cin>>order[rare];
        cout<<"\n\nThank You For Placing an Order !!!"<<endl;
        // system("CLS")
        // char c;
        // cout<<"\n Do you want to add another order ? (y/n) : ";
        // cin>>c;
        // if(c=='y'||c=='Y'){
        //     addOrder();
        // }else{
        //     return;
        // }
        
        
    }
}

void serverOrder(){
    if (isEmpty())
    {
        cout<<"\n\nQueue is Empty!!!"<<endl;
       
    }else{
        cout<<"\n\nOrder is Serverd : "<<order[front];
        if (front==rare)
        {
            front=-1;
            rare=-1;
        }else if(front==MAX_ORDER-1){
            front=0;
           
        }   
        else{

            front++;
        }
        
    }
}


void display()  
{  
     
    if(isEmpty())  
    {  
        cout<<"\n\n Queue is empty"<<endl;  
    }  
    else  
    {  
        cout<<"\n\nTotal Orders : "; 
        int i=front;
        
          
        do{  
            cout<<"\n\nOrder : "<<order[i]<<endl; 
            
            if (i==MAX_ORDER-1)
            {
                i=0;
            }else{
                i++;
            }
                
            
            

        }while(i!=(rare+1)%MAX_ORDER);
    }  
}  


int main(){

    int ch;
    
    bool flag=true;
    while (flag)
    {
        system("CLS");
        cout<<"\n\n ********************************* PIZZA PARLOUR ****************************** \n\n";
        cout<<"\n 1. Add a Pizza \n 2. Display the Orders \n 3. Serve a pizza \n 4. Exit \n Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                addOrder();
                getch();
            break;

            case 2:

                display();
                getch();
            break;

            case 3:

                serverOrder();
                getch();            
            break;

            case 4:
                flag=false;
           
            break;
            default:
            cout<<"Invalid choice ";
            getch();

        
        }
    
      
    }
      return 0;
}