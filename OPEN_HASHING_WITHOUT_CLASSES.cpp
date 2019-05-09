//This program is to implement open hashing without uisng classes
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};

void insert(int,int,node *[]);
void display(int,node *[]);
void del(int,int,node *[]);
int search(int,int,node *[]);

int main()
{
	int size,i=0,ch=1,x,h,k;
	cout<<"Enter size of the hash table : "<<endl;
	cin>>size;
	node *hash[size];
	for(i=0;i<size;i++)
	{
		hash[i]=NULL;
	}
	cout<<"1.To insert data : "<<endl;
	cout<<"2.To search data : "<<endl;
	cout<<"3.To delete the data : "<<endl;
	cout<<"4.To display : "<<endl;
	while(ch)
	{
		
		cout<<"Enter choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter data : "<<endl;
				cin>>x;
				h=x%size;
				insert(h,x,hash);
				break;
			case 2:
				cout<<"Enter the key to be searched : "<<endl;
				cin>>x;
				h=x%size;
				cout<<"Element is being searched at index : "<<h<<" of the hash table "<<endl;
				k=search(h,x,hash);
				if(k==0)
				{
					cout<<"Element not found : "<<endl;
				}
				else
				{
					cout<<"Element found at : "<<k<<endl;
				}
				break;
			case 3:
				cout<<"Enter the key to be deleted  : "<<endl;
				cin>>x;
				h=x%size;
				del(h,x,hash);
				break;
			case 4:
				display(size,hash);
				break;
		}
		cout<<"Do you want to continue : (1 for y and 0 for no ) "<<endl;
		cin>>ch;
	}	
}

void insert(int h,int x,node *hash[])
{
	if(hash[h]==NULL)
	{
		node *t=new node;
		t->data=x;
		t->next=NULL;
		hash[h]=t;
	}
	else
	{
		node *t=new node;
		t->data=x;
		t->next=NULL;
		node *t1=hash[h];
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=t;
	}
}

int search(int h,int x,node *hash[])
{
	if(hash[h]==NULL)
	{
		cout<<"Element not found : "<<endl;
	}	
	else
	{
		node *t=hash[h];
		int i=1;
		while(t!=NULL)
		{
			if(t->data==x)
			{
				return i;
			}
			i=i+1;
			t=t->next;
		}
		return 0;
	}
}

void del(int h,int x,node *hash[])
{
	int pos=search(h,x,hash);
	if(pos==0)
	{
		cout<<"Element not found : "<<endl;
	}
	else
	{
		if(pos==1)
		{
			node *t=hash[h];
			hash[h]=t->next;
			delete t;
		}
		else
		{
			int i=1;
			node *t=hash[h];
			while(i<pos-1)
			{
				t=t->next;
				i=i+1;
			}
			node *t1=t;
			t=t->next;
			t1->next=t->next;
			delete t;
		}
	}
}
void display(int size,node *hash[])
{
	int i=0;
	for(i=0;i<size;i++)
	{
		if(hash[i]!=NULL)
		{
			cout<<"Current i value is : "<<i<<endl;
			node *t=hash[i];
			while(t!=NULL)
			{
				cout<<t->data<<" ";
				t=t->next;
			}
			cout<<endl;
		}
	}
}
