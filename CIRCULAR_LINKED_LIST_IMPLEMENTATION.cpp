//This program is to implement a circular linked list
#include<iostream>
using namespace std;
class linked
{
	private:
		struct node
		{
			int data;
			node *next;
		}*head=NULL,*tail=NULL;
	public:
		void insert_end();
		void create(int);
		void del_beg();
		void deallocate();
		void display();
};
int main()
{
	linked l1;int n,ch=1;
	cout<<"1.To insert one node in the end "<<endl;
	cout<<"2.To insert n nodes in the end "<<endl;
	cout<<"3.To delete one node from the end "<<endl;
	cout<<"4.To delete entire lsit "<<endl;
	cout<<"5.To display the list "<<endl;
	while(ch)
	{
		cout<<"Enter your choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				l1.insert_end();
				break;
			case 2:
				cout<<"Enter the number of nodes "<<endl;
				cin>>n;
				l1.create(n);
				break;
			case 3:
				l1.del_beg();
				break;
			case 4:
				l1.deallocate();
				break;
			case 5:
				l1.display();
				break;
			default:
				cout<<"Invalid Input "<<endl;
		}
		cout<<"Do you want to continue (1 for yes / 0 for no) "<<endl;
		cin>>n;
	}
	return 0;
}
void linked::insert_end()
{
	node *t=new node;
	cout<<"Enter data "<<endl;
	cin>>t->data;
	if(head==NULL)
	{
		head=tail=t;
		tail->next=head;
	}
	else
	{
		tail->next=t;
		tail=t;
		tail->next=head;
	}
}
void linked::create(int n)
{
	int i=1;
	for(i=1;i<=n;i++)
	{
		insert_end();
	}
}
void linked::del_beg()
{
	if(head==NULL)
	{
		cout<<"The list is empty "<<endl;
	}
	else
	{
		node*t=head;
		if(head==tail)
		{
			head=tail=NULL;
			delete t;
		}
		else
		{
			head=head->next;
			tail->next=head;
			delete t;
		}
	}
}
void linked::deallocate()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}
	else
	{
		while(head!=NULL&&tail!=NULL)
		{
			del_beg();
		}		
	}
}
void linked::display()
{
	if(head==NULL)
	{
		cout<<"The list is empty : "<<endl;
	}
	else
	{
		cout<<"The linked list is : "<<endl;
		node *t=head,*p=NULL;
		while(t!=p)
		{
			cout<<t->data<<" ";
			t=t->next;
			p=head;
		}
		cout<<endl;
	}
}
