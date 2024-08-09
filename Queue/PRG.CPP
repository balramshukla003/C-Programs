#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void in_q(int [],int*,int*);
void del_q(int [],int*,int*);
void sh_q(int [],int,int);

void main()
{
clrscr();
int q[10],r=-1,f=-1;
char choice,buff;

while(choice!='e'&&choice!='E')
{
cout<<"\n\n--Queue--"<<endl;
cout<<"I-Insert Value"<<endl;
cout<<"D-Delete Value"<<endl;
cout<<"S-Show Queue"<<endl;
cout<<"E-Exit"<<endl;
cout<<"Press Your Choice:"<<ends;
choice=getche();

switch (choice)
{
case 'i':
case 'I':
in_q(q,&r,&f);
break;

case 'd':
case 'D':
del_q(q,&r,&f);
break;

case 's':
case 'S':
sh_q(q,r,f);
break;

case 'e':
case 'E':
cout<<"\nExited";
break;

default:
cout<<"\nWrong Input";
return;
}
cout<<"\n\n--Thank You-- ";
}
}

//Function Show

void sh_q(int q[],int r,int f)
{
if  (r==-1&&f==-1)
{
cout<<"\nThe Queue is Empty "<<endl;
return;
}
cout<<"Queue Element Is"<<endl;
while(f<=r)
{
cout<<q[f]<<ends;
f++;
}
}

//Function Insert

void in_q(int q[],int *r,int *f)
{
if(*r==9)
{
cout<<"\nThe Queue Is Full"<<endl;
return;
}
cout<<"\nEnter The Elelment In Queue:"<<ends;
*r++;
cin>>q[*r];
cout<<"Element Added to Queue:"<<q[*r];
}

// Function Delete

void del_q(int q[],int*r,int*f)
{
if(*r==-1)
{
cout<<"\nThe Queue is Empty"<<endl;
return;
}
cout<<"\nDeleted Iteam:"<<ends<<q[*f]<<endl;
*f++;
if(*r==*f)
{
*f=-1;
*r=-1;
}
}
