#include<iostream.h>
#include<conio.h>

int binary_search(int list[],int key,int low,int high);

int main()
{
clrscr();

int n,i,key,list[25],pos;

cout<<"Enter no of elements :" ;
cin>>n;
cout<<"\nNote:-Element Should In Ascending Order"<<endl;

for(i=0;i<n;i++)  {
cout<<"Enter Elelment At:"<<i<<":"<<ends;
cin>>list[i];      }
cout<<"Enter key to search : " ;
cin>>key;
pos=binary_search(list,key,0,n-1);
if(pos==-1)
cout<<"Element not found" ;
else
cout<<"Element found at index "<<pos;
return 0;
getch();
}

/* function for binary search*/
int binary_search(int list[],int key,int low,int high)
{
int mid,pos=-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==list[mid])
{
pos=mid;
break;
}
else if(key<list[mid])
high=mid-1;
else
low=mid+1;
}
return pos;
getch();
}
