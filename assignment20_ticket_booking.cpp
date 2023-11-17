
// Assignment 20 : Group C
// The ticket booking system of Cinemax theater has to be implemented using C++ program. There are 10 rows and 7 seats in each row. Doubly circular linked list has to be maintained to keep track of free seats at rows. Assume some random booking to start with. Use array to store pointers (Head pointer) to each row. On demand
// ⦁ The list of available seats is to be displayed
// ⦁ The seats are to be booked
// ⦁ The booking can be cancelled							



#include <iostream>
#include <conio.h>
using namespace std;

struct Seat{

    int no;
    int isbooked;
    struct Seat *next;
    struct Seat *pre;
};



struct Seat *create(struct Seat *head,int n){
    struct Seat *temp=head;
    struct Seat *new_node=(struct Seat *)malloc(sizeof(struct Seat));
    new_node->no=n;
    new_node->isbooked=0;
    

    if (head==NULL)
    {
        head=new_node;
        new_node->next=new_node;
        new_node->pre=new_node;
    }
    else
    {
        while (temp->next!=head)
        {
            temp=temp->next;
        }

        new_node->next=temp->next;
        temp->next=new_node;
        new_node->pre=temp;


    }

    return head;

}

void traversal(struct Seat *head){

    struct Seat *temp=head;

    if (head!=NULL)
    {
       do{
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    cout<<temp->no<<"   ";
                    temp=temp->next;
                }
                    cout<<endl<<endl;
            
            }
        }while (temp!=head);
 
    }
    else{
        cout<<"List is Empty!!!"<<endl;
    }
    
}


void update_at_first(struct Seat *head,int n){


    if(head->isbooked==0){
        head->isbooked=1;
    }else{
        cout<<"All ready Booked Seat"<<endl;

    }
    
  

}

struct Seat *book(struct Seat *head,int num){

    struct Seat *temp=head;

    if (num>=1 && num<=70)
    {
        if (num==1)
        {
            update_at_first(head,num);
        }
        else
        {
            while (temp->no!=num)
            {
                temp=temp->next;
            }
            if (temp->isbooked==0)
            {
                temp->isbooked=1;

            }else{
                cout<<"All ready Booked seat"<<endl;
            }
        }
    }

    return head;
        
}

void cancel_at_first(struct Seat *head,int n){


    if(head->isbooked==1){
        head->isbooked=0;
    }else{
        cout<<"Not Booked Seat"<<endl;

    }
    
  

}




struct Seat *cancel(struct Seat *head,int num){

    struct Seat *temp=head;

    if (num>=1 && num<=70)
    {
        if (num==1)
        {
            cancel_at_first(head,num);
        }
        else
        {
            while (temp->no!=num)
            {
                temp=temp->next;
            }
            if (temp->isbooked==1)
            {
                temp->isbooked=0;

            }else{
                cout<<"Not Booked seat"<<endl;
            }
        }
    }

       return head; 
}


struct Seat *available_seats(struct Seat *head){
    struct Seat *temp=head;

    if (head!=NULL)
    {
       do{
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (temp->isbooked==0)
                    {
                        cout<<temp->no<<"   ";
                    }else{

                        cout<<"   _  ";
                    }
                    
                    temp=temp->next;
                }
                    cout<<endl<<endl;
            
            }
        }while (temp!=head);
 
    }
    else{
        cout<<"List is Empty!!!"<<endl;
    } 
    return head;
}



struct Seat *booked_seats(struct Seat *head){
    struct Seat *temp=head;

    if (head!=NULL)
    {
       do{
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (temp->isbooked==1)
                    {
                        cout<<temp->no<<"   ";
                    }else{

                        cout<<"   _  ";
                    }
                    
                    temp=temp->next;
                }
                    cout<<endl<<endl;
            
            }
        }while (temp!=head);
 
    }
    else{
        cout<<"List is Empty!!!"<<endl;
    } 
    return head;
}



int main(){


    struct Seat *head=NULL;
    int count=1,ch;
    bool flag=true;
    int no;
    for (int i = 0; i < 70; i++)
    {
        
            head=create(head,count);
            count++;

        
    }


    while (flag)
    {
        system("CLS");
        cout<<"*****************************************MENU*********************************"<<endl<<endl;
        cout<<"1. Book Seat"<<endl;
        cout<<"2. Cancel Seat"<<endl;
        cout<<"3. Available Seats"<<endl;
        cout<<"4. Booked Seats"<<endl;
        cout<<"5. Show Seating Arrangement"<<endl;
        cout<<"6. Exit"<<endl<<endl;

        cout<<"\nEnter yout choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                cout<<"Enter Seat No : ";
                cin>>no;
                head=book(head,no);
                getch();
            }
            break;
            case 2:
            {
                cout<<"Enter Seat No : ";
                cin>>no;
                head=cancel(head,no);
                getch();
            }
            break;
            case 3:
            {
                cout<<"*****************************************Available Seats*********************************"<<endl<<endl;
                head=available_seats(head);
                getch();
            }
            break;
            case 4:
            {
                cout<<"*****************************************Booked Seats************************************"<<endl<<endl;
                head=booked_seats(head);
                getch();
            }
            break;
            case 5:
            {
                cout<<"************************************Seating Arrangement of seats**************************"<<endl<<endl;
                traversal(head);
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
                cout<<"\n\nInvalid Input!!!"<<endl;
                getch();
            }
            break;
        }
    
        
    }

    // traversal(head);
    // cout<<endl;
  
    // cout<<endl;
    // head=book(head,1);
    // head=book(head,70);
    // head=book(head,9);
    // head=available_seats(head);
    // cout<<endl;
    // head=cancel(head,70);
    // cout<<endl;
    // head=available_seats(head);
    // cout<<endl;
    // head=booked_seats(head);
    // cout<<endl;
    return 0;
}