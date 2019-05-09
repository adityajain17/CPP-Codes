/*3.	Question: Use pointer
Task statement: This is a simple exercise on using pointers. Write a program to read in a positive integer a 
and a positive real number b. As long as a < b2 , you repeatedly multiply a by b and assign the product back to a. 
For example, if a = 3 and b = 9.5, then a < b2 is true and hence a is updated to 28 (3 × 9.5, and truncated to integer). 
Next, a < b2 is still true so a is updated to 266 (28 × 9.5). 
Since a < b2 is now false, the loop terminates with the value of 266 in a. Use pointer to a and b a_ptr and b_ptr. */
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Enter the values of a and b "<<endl;
	cin>>a>>b;
	float *a_ptr=&a;float *b_ptr=&b;
	while(*a_ptr<(*b_ptr)*(*b_ptr))
	{
		*a_ptr=(int)(*b_ptr)*(*b_ptr);
	}
	cout<<*a_ptr<<endl;
}
