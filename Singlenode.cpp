#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	
};struct node *head;
void begininsert() 
{
	struct node* ptr;
	ptr =(struct node*)malloc(sizeof(struct node));
	int item;
	if(ptr==NULL)
	{
		cout<<"Over flow";
	}
	else{
	cout<<"Enter the value:";
	cin>>item;
	ptr->data=item;
	ptr->next=head;
	head=ptr;
       }
}
void lastinsert()
{
	struct node* ptr,*temp;
	ptr =(struct node*)malloc(sizeof(struct node));
	int item;
	if(ptr==NULL)
	{
		cout<<"Over flow";
	}
	else{
	cout<<"Enter the value:";
	cin>>item;
	ptr->data=item;
    if(head==NULL)
     {
     	ptr->next=NULL;
     	head=ptr;
     	cout<<"Node inserted:";
	 }
	 else
	 {
	 	temp=head;
	 	while(temp->next!=NULL)
	 	  {
	 	  	temp=temp->next;
		   }
		   temp->next=ptr;
		   ptr->next=NULL;
			cout<<"Node inserted:";
	 }  
   }
}
void randominsert()
{
    struct node* ptr,*temp;
	ptr =(struct node*)malloc(sizeof(struct node));
	int item,loc;
	if(ptr==NULL)
	{
		cout<<"Over flow";
	}
	else{
	cout<<"Enter the value:";
	cin>>item;
	ptr->data=item;
	cout<<"\nEnter the location:";
	cin>>loc;
	temp=head;
	for(int i=0;i<loc;i++)
      {
      	temp=temp->next;
      	if(temp==NULL)
      	   {
      	   	cout<<"\nCannoot be inserted";
      	   	
			 }
		  }	
		  ptr->next=temp->next;
		  temp->next=ptr;
       }
}
void begindelete()
{
	struct node  *ptr;
	if(head==NULL)
	{
		cout<<"The list is empty";
	}
	else
	  {
	  	ptr=head;
	  	head=ptr->next;
	  	free(ptr);
	  	cout<<"The node is deleted in begining";
	  	
	  }
}
void lastdelete()
{
	struct node*ptr,*ptr1;
	if(head==NULL)
	{
		cout<<"The list is empty";
	}
    else if(head->next==NULL)
      {
      	head=NULL;
      	free(head);
        cout<<"The node is deleted in last";	
	  }
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		 {
		 	ptr1=ptr;
		 	ptr=ptr->next;
		 }
		 ptr->next=NULL;
		 free(ptr);
		  cout<<"The node is deleted in last";	
 	}
}
void randomdelete()
{
	struct node*ptr,*ptr1;
	int loc;
	cout<<"Enter the location:";
	cin>>loc;
	ptr=head;
	for(int i=0;i<loc;i++)
	 {
	 	ptr1=ptr;
	 	ptr=ptr->next;
	 	if(ptr==NULL)
	 	 {
	 	 	cout<<"Cannot delete";
		  }
	 }
	 ptr1->next=ptr->next;
	 free(ptr);
	 cout<<"\nDelete";
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	 {
	 	 cout<<"No elements";
	 }
	 else
	 {
	 	cout<<"The values:";
	 	while(ptr!=NULL)
	 	  {
	 	  	cout<<ptr->data;
	 	  	ptr=ptr->next;
		   }
	 }
}
int main()
{
	int c=0;
	while(c!=8)
	  {
	  	cout<<"\n1.Insert in begining \n2.insert at last \n3.insert at random \n4.Delete in begining \n5.Delete at last \n6.delete  at random \n7.Display\n";
	  	cin>>c;
	  	switch(c)
	  	{
	  		case 1:begininsert();break;
	  		case 2:lastinsert();break;
	  		case 3:randominsert();break;
	  		case 4:begindelete();break;
	  		case 5:lastdelete();break;
	  		case 6:randomdelete();break;
            case 7:display();break;
            default:cout<<"Invalid";
		  }
	  }
	  return 0;
}#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	
};struct node *head;
void begininsert() 
{
	struct node* ptr;
	ptr =(struct node*)malloc(sizeof(struct node));
	int item;
	if(ptr==NULL)
	{
		cout<<"Over flow";
	}
	else{
	cout<<"Enter the value:";
	cin>>item;
	ptr->data=item;
	ptr->next=head;
	head=ptr;
       }
}
void lastinsert()
{
	struct node* ptr,*temp;
	ptr =(struct node*)malloc(sizeof(struct node));
	int item;
	if(ptr==NULL)
	{
		cout<<"Over flow";
	}
	else{
	cout<<"Enter the value:";
	cin>>item;
	ptr->data=item;
    if(head==NULL)
     {
     	ptr->next=NULL;
     	head=ptr;
     	cout<<"Node inserted:";
	 }
	 else
	 {
	 	temp=head;
	 	while(temp->next!=NULL)
	 	  {
	 	  	temp=temp->next;
		   }
		   temp->next=ptr;
		   ptr->next=NULL;
			cout<<"Node inserted:";
	 }  
   }
}
void randominsert()
{
    struct node* ptr,*temp;
	ptr =(struct node*)malloc(sizeof(struct node));
	int item,loc;
	if(ptr==NULL)
	{
		cout<<"Over flow";
	}
	else{
	cout<<"Enter the value:";
	cin>>item;
	ptr->data=item;
	cout<<"\nEnter the location:";
	cin>>loc;
	temp=head;
	for(int i=0;i<loc;i++)
      {
      	temp=temp->next;
      	if(temp==NULL)
      	   {
      	   	cout<<"\nCannoot be inserted";
      	   	
			 }
		  }	
		  ptr->next=temp->next;
		  temp->next=ptr;
       }
}
void begindelete()
{
	struct node  *ptr;
	if(head==NULL)
	{
		cout<<"The list is empty";
	}
	else
	  {
	  	ptr=head;
	  	head=ptr->next;
	  	free(ptr);
	  	cout<<"The node is deleted in begining";
	  	
	  }
}
void lastdelete()
{
	struct node*ptr,*ptr1;
	if(head==NULL)
	{
		cout<<"The list is empty";
	}
    else if(head->next==NULL)
      {
      	head=NULL;
      	free(head);
        cout<<"The node is deleted in last";	
	  }
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		 {
		 	ptr1=ptr;
		 	ptr=ptr->next;
		 }
		 ptr->next=NULL;
		 free(ptr);
		  cout<<"The node is deleted in last";	
 	}
}
void randomdelete()
{
	struct node*ptr,*ptr1;
	int loc;
	cout<<"Enter the location:";
	cin>>loc;
	ptr=head;
	for(int i=0;i<loc;i++)
	 {
	 	ptr1=ptr;
	 	ptr=ptr->next;
	 	if(ptr==NULL)
	 	 {
	 	 	cout<<"Cannot delete";
		  }
	 }
	 ptr1->next=ptr->next;
	 free(ptr);
	 cout<<"\nDelete";
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	 {
	 	 cout<<"No elements";
	 }
	 else
	 {
	 	cout<<"The values:";
	 	while(ptr!=NULL)
	 	  {
	 	  	cout<<ptr->data;
	 	  	ptr=ptr->next;
		   }
	 }
}
int main()
{
	int c=0;
	while(c!=8)
	  {
	  	cout<<"\n1.Insert in begining \n2.insert at last \n3.insert at random \n4.Delete in begining \n5.Delete at last \n6.delete  at random \n7.Display\n";
	  	cin>>c;
	  	switch(c)
	  	{
	  		case 1:begininsert();break;
	  		case 2:lastinsert();break;
	  		case 3:randominsert();break;
	  		case 4:begindelete();break;
	  		case 5:lastdelete();break;
	  		case 6:randomdelete();break;
            case 7:display();break;
            default:cout<<"Invalid";
		  }
	  }
	  return 0;
}
