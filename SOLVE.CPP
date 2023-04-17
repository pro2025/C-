#include<iostream.h>
#include<conio.h>
int areas(int a)
{
return a*a;
}
int arearec(int b,int c)
{
return b*c;
}
int perimeters(int a)
{
return 4*a;
}
int perimeterrec(int b,int c)
{
return 2*(b+c);
}
void main()
{
int a,b,c;
clrscr();
cout<<"Enter the side of square: ";
cin>>a;
cout<<"Enter the length and breadth of rectangle: ";
cin>>b>>c;
cout<<"Area of Square: "<<areas(a)<<endl;
cout<<"Area of rectangle: "<<arearec(b,c)<<endl;
cout<<"Perimeter of Square: "<<perimeters(a)<<endl;
cout<<"Perimeter of Rectangle: "<<perimeterrec(b,c)<<endl;
getch();
}