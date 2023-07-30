//combining more than one type of inheritance//
#include<iostream.h>
#include<conio.h>
class vehicle
{
public:
vehicle()
{
cout<<"This is vehicle"<<endl;
}
};
class fare
{
public:
fare()
{
cout<<"This is fare"<<endl;
}
};
class car:public vehicle
{
};
class bus:public vehicle,public fare
{
};
void main()
{
clrscr();
bus obj;
getch();
}
