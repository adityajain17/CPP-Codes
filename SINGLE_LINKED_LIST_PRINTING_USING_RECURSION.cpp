#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
void insert_end();
void display(node *);
void r_dis(node *);
int main()
{
	int n;
	cout<<"Enter the number of nodes you want to make "<<endl;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		insert_end();
		i=i+1;
	}
	display(head);
	cout<<endl;
	r_dis(head);
}
void insert_end()
{
	node *t=new node;
	cout<<"Enter data "<<endl;
	cin>>t->data;
	t->next=NULL;
	if(head==NULL)
	{
		head=tail=t;
	}
	else
	{
		tail->next=t;
		tail=t;
	}
}
void display(node *t)
{
	if(t!=NULL)
	{
		cout<<t->data<<endl;
		t=t->next;
		display(t);
	}
}
void r_dis(node *t)
{
	if(t!=NULL)
	{
		t=t->next;
		display(t);
		cout<<t->data<<endl;
	}
}
