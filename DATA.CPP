#include<iostream.h>
#include<conio.h>
class array
{
int x;
public:
void getdata()
{
cin>>x;
}
void putdata()
{
cout<<x+20<<endl;
}
};
void main()
{
int i,n;
clrscr();
array a[20];
cout<<"\nEnter the size of array:";
cin>>n;
cout<<"\nEnter elements of array one by one\n";
for(i=0;i<n;i++)
{
a[i].getdata();
}
cout<<"\nThe input elements incremented by 20 are:\n";
for(i=0;i<n;i++)
{
a[i].putdata();
}
getch();
}
