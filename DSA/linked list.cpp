#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;

}*head;
class SLL
{
public:
	SLL()
	{
		head=NULL;

	}
	void createSLL();
	void display();
	void addnode();
	void delnode();
	void delendnode();
	void addendnode();
	

};
node *createnode()
{
	node*newnode;
	newnode=new node;
	cout<<"\nEnter the data"<<endl;
	cin>>newnode->data;
	newnode->next=NULL;
	return newnode;
}
void SLL::createSLL()
{
	int n,i;
	node *newnode,*temp;
	cout<<"Enter the number of nodes in linked list==";
	cin>>n;
	for(i=0;i<n;i++)
	{
		newnode=createnode();
			if(head==NULL)
			{
				head=newnode;
			}
			else
			{
				temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=newnode;
			}
	}
}
void SLL::display()
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"--->";
		temp=temp->next;
	}
	cout<<"\t"<<"NULL";
}
void SLL::addnode()
{
		node*newnode;
		newnode=createnode();
		newnode->next=head;
		head=newnode;
		cout<<endl<<"AFTER ADDING ELEMENT AT STARTING OF LINKEDLIST"<<endl;
		display();
}
void SLL::delnode()
{
		node*temp=head;
		head=temp->next;
		delete(temp);
		cout<<endl<<"AFTER DELETING ELEMENT AT STARTING OF LINKEDLIST"<<endl;
		display();
		
}
void SLL::delendnode()
{
		node*temp=head;
		node*second=head->next;
		cout<<"\n Deleting last element of linked list"<<endl;
		while(second->next!=NULL)
		{
			temp=temp->next;
			second=second->next;
		}
		temp->next=NULL;
		delete(second);
		display();
}
void SLL::addendnode()
{
		node*newnode;
		newnode=createnode();
		node*second=head->next;
		cout<<"\n After Adding element at the end of linked list"<<endl;
		while(second->next!=NULL)
		{
			second=second->next;
		}
		second->next=newnode;
		display();
}

int main()
{
	SLL s;
	char q;
	int a;
	s.createSLL();
	s.display();
	
	do
	{
		cout<<"\n Enter the operation you want to perform on linked list:- \n1]adding node at beggining \n 2]delete first node \n 3]delete last node \n 4]add node at end \n";
		cin>>a;
	
		switch(a)
		{
			case 1:
			{
				s.addnode();
				break;
			}
			case 2:
			{
				s.delnode();
				break;
			}
			case 3:
			{
				s.delendnode();
				break;
			}
			case 4:
			{
				s.addendnode();
				break;
			}
			
		}cout<<"\n Enter Y if you want to continue:- ";
		 cin>>q;
	}while(q='Y');

	return 0;
}


