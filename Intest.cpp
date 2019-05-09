#include<iostream>
using namespace std;
class base
{
	private:
		int a=2;
	public:
	void display1()
	{
		cout<<"One : "<<endl;
		cout<<a<<endl;
	}
	protected:
	int b=3;
};
class super:public base 
{
	public:
	void display()
	{
		cout<<"Two : "<<endl;
		base::display1();
		
	}
};
int main()
{
	super obj;
	obj.display();
}
