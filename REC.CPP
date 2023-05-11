#include<iostream.h>
#include<conio.h>
class shape
{
public:
int length;
int breadth;
int height;
int side;
shape()
{
cout<<"Here! Calculating Area of rectangle and square , Volume of cuboid"<<endl;
}
 int area()
 {
 int l,b;
  cout<<"Length and breadth of rectangle:";
cin>>l>>b;
 length=l;
 breadth=b;
return (length*breadth);
}
int areas()
{
int s;
cout<<"Side of square:";
cin>>s;
side=s;
return (side*side);
}
int cub()
{
int l,b,h;
cout<<"length and breadth of cuboid:";
cin>>l>>b;
cout<<"Height of cuboid:";
cin>>h;
length=l;
breadth=b;
height=h;
return (length*breadth*height);
}
};
void main()
{
clrscr();
shape o;
cout<<"Area of Rectangle:"<<o.area()<<endl;
cout<<"Area of square:"<<o.areas()<<endl;
cout<<"Volume of cuboid:"<<o.cub()<<endl;
getch();
}


