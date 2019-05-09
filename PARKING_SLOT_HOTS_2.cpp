#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void input(char[],int *,int *,int *,int *,char *,char *);
void fare(char[],int *,int *,int *,int *,char *,char *);
int main()
{
	char x[20];int ih,im,oh,om;char d1,d2;
	input(x,&ih,&im,&oh,&om,&d1,&d2);
	fare(x,&ih,&im,&oh,&om,&d1,&d2);
}
void input(char da[],int *ih,int *im,int *oh,int *om,char *d1,char *d2)
{
	cout<<"Enter the day "<<endl;
	gets(da);
	cout<<"Enter the time when you entered parking spot "<<endl;
	cin>>*ih>>*im;
	cout<<"Enter a for AM and p for  PM "<<endl;
	cin>>*d1;
	cout<<"Enter the time when you left parking spot "<<endl;
	cin>>*oh>>*om;
	cout<<"Enter a for AM and p for  PM "<<endl;
	cin>>*d2;
}
void fare(char da[],int *ih,int *im,int *oh,int *om,char *d1,char *d2)
{
	if(*ih<4&&*d1=='a')
	{
		cout<<"The Parking opens at 4 am , sorry come back later "<<endl;
		exit(0);
	}
	else
	{
		double fare=0;int x;
		if(strcmp(da,"Weekday")==0)
		{
			if(*ih>=4&&*d1=='a'&&*oh<=7&&*d2=='a'&&*om<=10)
			{
				fare=(*oh-*ih)*10;
			}
			else if(*ih>=4&&*d1=='a'&&(*oh>=7&&*d2=='a'||*oh<=6&&*d2=='p')&&*om<=10)
			{
				if(*d2=='a')
				{
				x=(7-*ih)+(*oh-7);
				if(x>10)
				{
				fare=(7-*ih)*10+(*oh-7)*10.5;
				fare=fare+0.1*fare;
				}
				else
				{
				fare=(7-*ih)*10+(*oh-7)*10.5;	
				}
				}
			else
			{
				x=(7-*ih)+(12-7)+*oh;
				if(x>10)
				{
					fare=(7-*ih)*10+(12-7)*10.5+*oh*10.5;
					fare=fare+0.1*fare;
				}
			}	
			}
			else if(*ih>=4&&*d1=='a'&&(*oh>=6&&*d2=='p'||*oh<=12&&*d2=='a')&&*om<=10)
			{
				fare=(7-*ih)*10+11*10.5+50;
				fare=fare+0.1*fare;
				if(*oh>10)
				fare=fare+5;
			}
			else if(*ih>=7&&*d1=='a'&&(*oh<=12&&*d2=='a'||*oh<=6&&*d2=='p'))
			{
				if(*d2=='a')
				{
					fare=(12-*ih)*10.5;
				}
				else
				{
					x=12-*ih+*oh;
					if(x>10)
					{
						fare=(12-*ih)*10.5+*oh*10.5;
						fare=fare+0.1*fare;
					}
					else
					{
						fare=(12-*ih)*10.5+*oh*10.5;
					}
				}
			}
			else if(*ih>=7&&*d1=='a'&&(*oh>=6&&*d2=='p'||*oh<=12&&*d2=='a'))
			{
				fare=11*10.5+50;
				fare=fare+0.1*fare;
				if(*oh>10)
				fare=fare+5;
			}
			else
			{
				fare=50;
			}
		}
	if(strcmp(da,"Saturday")==0)
		{
			if(*ih>=4&&*d1=='a'&&*oh<=7&&*d2=='a'&&*om<=10)
			{
				fare=(*oh-*ih)*20.5;
			}
			else if(*ih>=4&&*d1=='a'&&(*oh>=7&&*d2=='a'||*oh<=6&&*d2=='p')&&*om<=10)
			{
				if(*d2=='a')
				{
				x=(7-*ih)+(*oh-7);
				if(x>10)
				{
				fare=(7-*ih)*20.5+(*oh-7)*25.7;
				fare=fare+0.2*fare;
				}
				else
				{
				fare=(7-*ih)*20.5+(12-7)*25.7;	
				}
				}
			else
			{
				x=(7-*ih)+(12-7)+*oh;
				if(x>10)
				{
					fare=(7-*ih)*20.5+(12-7)*25.7+*oh*25.7;
					fare=fare+0.2*fare;
				}
			}	
			}
			else if(*ih>=4&&*d1=='a'&&(*oh>=6&&*d2=='p'||*oh<=12&&*d2=='a')&&*om<=10)
			{
				fare=(7-*ih)*20.5+11*25.7+100;
				fare=fare+0.2*fare;
				if(*oh>10)
				fare=fare+5;
			}
			else if(*ih>=7&&*d1=='a'&&(*oh<=12&&*d2=='a'||*oh<=6&&*d2=='p')&&*om<=10)
			{
				if(*d2=='a')
				{
					fare=(12-*ih)*25.7;
				}
				else
				{
					x=12-*ih+*oh;
					if(x>10)
					{
						fare=(12-*ih)*25.7+*oh*25.7;
						fare=fare+0.2*fare;
					}
					else
					{
						fare=(12-*ih)*25.7+*oh*25.7;
					}
				}
			}
			else if(*ih>=7&&*d1=='a'&&(*oh>=6&&*d2=='p'||*oh<=12&&*d2=='a')&&*om<=10)
			{
				fare=11*25.7+100;
				fare=fare+0.2*fare;
				if(*oh>10)
				fare=fare+5;
			}
			else
			{
				fare=100;
			}
		}	
	if(strcmp(da,"Sunday")==0)
		{
			if(*ih>=4&&*d1=='a'&&*oh<=7&&*d2=='a'&&*om<=10)
			{
				fare=150;
			}
			else if(*ih>=4&&*d1=='a'&&(*oh>=7&&*d2=='a'||*oh<=6&&*d2=='p')&&*om<=10)
			{
				fare=300;
			}
			else if(*ih>=4&&*d1=='a'&&(*oh>=6&&*d2=='p'||*oh<=12&&*d2=='a')&&*om<=10)
			{
				fare=450;
				if(*oh>10)
				fare=fare+5;
			}
			else if(*ih>=7&&*d1=='a'&&(*oh<=12&&*d2=='a'||*oh<=6&&*d2=='p')&&*om<=10)
			{
				fare=150;
			}
			else if(*ih>=7&&*d1=='a'&&(*oh>=6&&*d2=='p'||*oh<=12&&*d2=='a')&&*om<=10)
			{
				fare=300;
				if(*oh>10)
				fare=fare+5;
			}
			else
			{
				fare=150;
			}
		}
		cout<<"THE AMOUNT TO BE PAID = "<<fare<<endl;
	}
}
