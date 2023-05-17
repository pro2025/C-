#include<iostream.h>
#include<conio.h>
#define pi 3.14
class area
{
int area1,area2;
public:
void circle(int r);
void rectangle(int l,int b);
};
void area :: circle(int r)
{
area1 = pi*r*r;
cout<<"\n Area of circle:"<<area1;
}
void area :: rectangle(int l,int b)
{
area2 =l*b;
cout<<"\n Area of Rectangle :"<<area2;
}
void main()
{
int r,l,b;
clrscr();
area bb;
cout<<"\n Enter the radius of circle.";
cin>>r;
bb.circle(r);
cout<<"\n Enter the length and breadth of rectangle.";
cin>>l>>b;
bb.rectangle(l,b);
getch();
}
