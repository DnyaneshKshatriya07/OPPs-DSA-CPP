#include<iostream>
using namespace std;

class node{
	int data;
	node*next;
public:
	node*createnode();
	void accept();
	void display();
	void insertAtFirst();
	void deleteAtfirst();
	void deleteAtend();
	void insertAtend();
	void deleteAtmiddle();
	void insertAtmiddle();
	void concatinate();
	void count();

}*head;

node* node :: createnode(){
	node*newnode = new(node);
	cout<<"Enter the data";
	cin>>newnode->data;
	newnode->next = NULL;
	return newnode;
}

void node :: count()
{
	int count = 0;
	node*temp = head;
	while(temp!=NULL)
	{
		count++;
		temp = temp->next;
	}
	cout<<"The total number of nodes present is "<<count<<endl;
}

void node :: concatinate()
{
	node*temp = head;
	accept();
	node*head2 = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = head2;
	display();
}

void node :: accept()
{
	int n,i;
	cout<<"How many nodes you wan to enter in the Linked List"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		node*newnode;
		newnode = createnode();
		if(head==NULL)
		{
			head = newnode;
		}
		else{
			node*temp = head;
			while(temp->next!=NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}


	}
}

void node :: insertAtFirst()
{
	cout<<"enter the data you want to insert";
	node*newnode = createnode();
	newnode->next = head;
	head = newnode;
	display();

}

void node :: deleteAtfirst()
{
	node*temp = head;
	head = temp->next;
	delete(temp);
	display();
}

void node :: deleteAtend()
{
	node*temp = head;
	node*second = head->next;
	while(second->next!=NULL)
	{
		temp = temp->next;
		second = second->next;
	}
	temp->next = NULL;
	delete(second);
	display();
}

void node :: insertAtend()
{
	node*newnode = createnode();
	node*temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	display();
}

void node :: insertAtmiddle()
{
	int index = 0;
	node*temp = head;
	cout<<"Enter the index after which you want to insert data"<<endl;
	cin>>index;
	node*newnode = createnode();
	for(int i=0;i<index;i++)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	display();
}

void node :: deleteAtmiddle()
{
	int pos = 0;
	int i=0;
	cout<<"enter the position where you want to perform deletion"<<endl;
	cin>>pos;
	node*p = head;
	node*q = head->next;
	while(i<pos)
	{
		p = p->next;
		q = q->next;
		i++;
	}
	p->next = q->next;
	delete(q);
	display();
}

void node :: display()
{
	node*temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"NULL";
	cout<<endl;
}

int main()
{
	node n;
	n.accept();
	int c;
	do{
		cout<<"1.Display \t 2.Insert At Beginning \t 3.Insert At End \t 4.Insert At Middle \t 5.Delete At First \t 6.Delete At End \t 7.Delete At Middle \t 8. Merge Two LL \t 9. Count the No of Nodes"<<endl;
		cout<<"Enter the Choice";
		cin>>c;
		switch(c)
		{
			case 1:
			{
				n.display();
				break;
			}
			case 2:
			{
				n.insertAtFirst();
				break;
			}
			case 3:
			{
				n.insertAtend();
				break;
			}
			case 4:
			{
				n.insertAtmiddle();
				break;
			}
			case 5:
			{
				n.deleteAtfirst();
				break;
			}
			case 6:
			{
				n.deleteAtend();
				break;
			}
			case 7:
			{
				n.deleteAtmiddle();
				break;
			}
			case 8:
			{
				n.concatinate();
				break;
			}
			case 9:
			{
				n.count();
				break;
			}
			default:
			{
				cout<<"Enter Valid Choice";
				break;
			}



		}
	}while(c<10);

	return 0;
}

