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
		int count();
		void add(linked,linked);
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
	ex3.add(ex1,ex2);
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
void linked::add(linked ex1,linked ex2)
{
	if(ex1.head==NULL||ex2.head==NULL)
	{
		cout<<"Addition cannot be performed with only one expression "<<endl;
	}
	else
	{
		node *t1=ex1.head;
		node *t2=ex2.head;
		while(t1!=NULL||t2!=NULL)
		{
			node *t3=new node;
			t3->next=NULL;
			if(t1==NULL)
			{
				t3->ex=t2->ex;
				t3->co=t2->co;
				t2=t2->next;
				if(head==NULL)
				{
					head=tail=t3;
				}
				else
				{
					tail->next=t3;
					tail=t3;
				}
			}
			else if(t2==NULL)
			{
				t3->ex=t1->ex;
				t3->co=t1->co;
				if(head==NULL)
				{
					head=tail=t3;
				}
				else
				{
					tail->next=t3;
					tail=t3;
				}
				t1=t1->next;
			}
			else if(t1->ex==t2->ex)
			{
				t3->ex=t1->ex;
				t3->co=t1->co+t2->co;
				t1=t1->next;
				t2=t2->next;
				if(head==NULL)
				{
					head=tail=t3;
				}
				else
				{
					tail->next=t3;
					tail=t3;
				}
			}
			else if(t1->ex>t2->ex)
			{
				t3->ex=t1->ex;
				t3->co=t1->co;
				if(head==NULL)
				{
					head=tail=t3;
				}
				else
				{
					tail->next=t3;
					tail=t3;
				}
				t1=t1->next;
			}
			else
			{
				t3->ex=t2->ex;
				t3->co=t2->co;
				if(head==NULL)
				{
					head=tail=t3;
				}
				else
				{
					tail->next=t3;
					tail=t3;
				}
				t2=t2->next;
			}
		}
	}
}  
