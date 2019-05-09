//Evaluation of Postfix expression
/* Scan input from left to right
  if current symbol is operand then push on to stack
  if current symbol is operator then pop top most two elements from stack and perform operation on these two operators*/
  
//Assumption 1: Input postfix expression is always valid
//Assumption 2: Operands and operators are separated with spaces
//Note 1:Result will be on top of stack   
//Sample Input :12 14 15 * + 16 + 17 -
//Sample Output:221
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int stack[20];
int top=-1;
void push(int ch)
{
	top++;
	stack[top]=ch;
}
int pop()
{
	int t=stack[top];
	top--;
	return t;
}
int main()
{
	char post[20];
	cout<<"enter a postfix string : ";
	gets(post);
	int i=0;
	while(i<strlen(post))//scan input from left to right 
	{
		if(isdigit(post[i]))//if the current symbol is digit then conver it into equivalent integer
		{   int t=0;
			while(post[i]!=' ')
			{
				t=(t*10)+(post[i]-48);
				i++;
			}
			push(t);
		}
		else //operator
		{
			if(post[i]!=' ')//checking if it is a space or not, because if it is a space no use popping operands
			{
				int a=pop(),b=pop();
			switch(post[i])
			{
				case '+':push(b+a);break;
				case '-':push(b-a);break;
				case '*':push(b*a);break;
				case '/':push(b/a);break;
				case '%':push(b%a);break;
			}	
			}
		}
		i++;
	}//end of while
		
	cout<<"Result: "<<pop();	
}	
