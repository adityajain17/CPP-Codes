#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Enter the slab "<<endl;
	cout<<"1. marks<25 "<<endl;
	cout<<"2. marks>=25 and marks <45 "<<endl;
	cout<<"3. marks>=45 and marks <50 "<<endl;
	cout<<"4. marks>=50 and marks <60 "<<endl;
	cout<<"5. marks>=60 and marks <80 "<<endl;
	cout<<"6. marks>=80 "<<endl;
	cin>>m;
	switch(m)
	{
		case 1:
			cout<<"Grade is = F"<<endl;
			break;
		case 2:
			cout<<"Grade is = E"<<endl;
			break;
		case 3:
			cout<<"Grade is = D"<<endl;
			break;
		case 4:
			cout<<"Grade is = C "<<endl;
			break;
		case 5:
			cout<<"Grade is = B "<<endl;
			break;
		case 6:
			cout<<"Grade is = A"<<endl;
			break;
		default:
			cout<<"Wrong choice";
	}
}
