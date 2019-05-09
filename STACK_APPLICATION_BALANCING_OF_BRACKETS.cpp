//Program to check balancing of symbols
/*Scan the expression string input.
    a) If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
    b) If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.
3) After complete traversal, if there is some starting bracket left in stack then “not balanced”*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char stack[20],top=-1;
void push(char);
void pop();
void display();
int main()
{
	char input[20];int i=0,flag=1;
	cout<<"Enter the string : "<<endl;
	gets(input);
	cout<<"The string entered by you is : ";
	puts(input);
	while(i<strlen(input))
	{
		if(input[i]=='{'||input[i]=='('||input[i]=='[')
		{
			push(input[i]);
		}
		else if(((input[i]=='}'&&stack[top]=='{')||(input[i]==']'&&stack[top]=='[')||(input[i]==')'&&stack[top]=='('))&&top!=-1)
		{
			pop();
		}
		else if(input[i]!=' ')
		{
			flag=0;
			break;
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}
	if(flag==1&&top==-1)
	{
		cout<<"Valid"<<endl;
	}
	else
	{
		cout<<"Invalid"<<endl;
	}
}
void push(char t)
{
	top++;
	stack[top]=t;
}
void pop()
{
	top--;
}
void display()
{
	cout<<"The current stack is : "<<endl;
	int i=top;
	while(i>=0)
	{
		cout<<stack[i]<<endl;
		i=i-1;
	}
}

