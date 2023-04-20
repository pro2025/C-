#include<iostream.h>
#include<conio.h>
class room
{
private:
int length;
int breadth;
int height;
public:
void room::set(int l,int b,int h)
{
length=l;
breadth=b;
height=h;
}
int area(int l,int b)
{
return (l*b);
}
int volume(int l,int b,int h)
{
return (l*b*h);
}
};
void main()
{
room a;
clrscr();
int l,b,h;
cout<<"Enter the length of room: ";
cin>>l;
cout<<"Enter the breadth of room: ";
cin>>b;
cout<<"Enter the height of room: ";
cin>>h;
a.set(l,b,h);
cout<<"Area of room: "<<a.area(l,b)<<endl;
cout<<"Volume of room: "<<a.volume(l,b,h)<<endl;
getch();
}