//Linked list in polynomials assuming that the exponent of each successive term is less than that of the previous term
#include<iostream>
using namespace std;
class linked
{
	private:
		struct node
		{
			float co;
			int ex;
			node *next;
		}*head=NULL,*tail=NULL;
	public:
		void insert_end();
		void display();
		void sort();
		int count();
		void multiply(linked,linked);
};
int main()
{
	linked ex1,ex2,ex3;int ch=0,i=1,ch1;
	cout<<"Enter the number of terms in expression 1 : ";
	cin>>ch;
	cout<<endl;
	cout<<"Enter the number of terms in expression 2 : ";
	cin>>ch1;
	cout<<endl;
	cout<<"Enter the first expression but in decreasing exponential value # : "<<endl;
	for(i=1;i<=ch;i++)
	{
		ex1.insert_end();
	}
	i=1;
	cout<<"Enter the second expression but in decreasing exponential value # : "<<endl;
	for(i=1;i<=ch1;i++)
	{
		ex2.insert_end();
	}
	ex1.display();
	ex2.display();
	ex3.multiply(ex1,ex2);
	ex3.sort();
	ex3.display();
}
void linked::insert_end()
{
	node *t=new node;
	cout<<"Enter coefficient and the exponent  : ";
	cin>>t->co>>t->ex;
	cout<<endl;
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
void linked::display()
{
	if(head==NULL)
	{
		cout<<"No expression entered "<<endl;
	}
	else
	{
		node *t=head;int f=0;
		cout<<endl;
		while(t!=NULL)
		{
			if(f!=0)
			{
				if(t->co>0)
				cout<<" + ";
				else
				cout<<" ";
			}
			if(t->ex!=0)
			cout<<t->co<<" x^"<<t->ex;
			else
			cout<<t->co;
			t=t->next;
			f=1;
		}
	}
}
int linked::count()
{
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		int c=0;
		node *t=head;
		while(t!=NULL)
		{
			c=c+1;
			t=t->next;
		}
		return c;
	}
}
void linked::multiply(linked ex1,linked ex2)
{
	if(ex1.head==NULL||ex2.head==NULL)
	{
		cout<<"Multiplication cannot be performed with only one expression "<<endl;
	}
	else
	{
		node *t1=ex1.head;
		node *t2=ex2.head;
		int x=ex1.count();
		int y=ex2.count();
		int t,expo,flag=0;
		if(x>=y)
		{
			while(t1!=NULL)
			{
				t2=ex2.head;
				while(t2!=NULL)
				{
					t=t1->co*t2->co;
					expo=t1->ex+t2->ex;
					node *p=head;
	if(head==NULL)
	{
		flag=0;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->ex=expo)
			{
				p->co=p->co+t;
				flag=1;
				break;
			}
			p=p->next;
		}
		flag=0;
	}
					if(flag==0)
					{
						node *p=new node;
						p->co=t;
						p->ex=expo;
						if(head==NULL)
						{
							head=tail=p;
						}
						else
						{
							tail->next=p;
							tail=p;
						}
						flag=1;
					}
					t2=t2->next;
				}
				t1=t1->next;
			}
		}
		else
		{
			while(t2!=NULL)
			{
				t1=ex1.head;
				while(t1!=NULL)
				{
					t=t1->co*t2->co;
					expo=t1->ex+t2->ex;
				node *p=head;
	if(head==NULL)
	{
		flag=0;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->ex=expo)
			{
				p->co=p->co+t;
				flag=1;
				break;
			}
			p=p->next;
		}
		flag=0;
	}
					if(flag==0)
					{
						node *p=new node;
						p->co=t;
						p->ex=expo;
						if(head==NULL)
						{
							head=tail=p;
						}
						else
						{
							tail->next=p;
							tail=p;
						}
						flag=1;
					}
					t1=t1->next;
				}
				t2=t2->next;
			}
		}
	}
}
void linked::sort()
{
	if(head==NULL)
	{
		cout<<"The linked list is empty : "<<endl;
	}
	else
	{
		node *t=head,*t1=head;int x,y,a,b;node *s;
		while(t!=NULL)
		{
			x=t->ex;
			s=t;
			while(t1!=NULL)
			{
				y=t1->ex;
				b=t1->co;
				if(x>y)
				{
					x=y;
					a=b;
					s=t1;
				}
				t1=t1->next;
			}
			s->ex=t->ex;
			s->co=t->co;
			t->ex=x;
			t->co=a;
			t=t->next;
			t1=t;
		}
	}
}
