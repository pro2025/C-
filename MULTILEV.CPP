//a derived class is created from another derived class//
#include<iostream.h>
#include<conio.h>
class vehicle
{
public:
vehicle()
{
cout<<"This is Vehicle"<<endl;
}
};
class fourwheeler:public vehicle
{
public:
fourwheeler()
{
cout<<"This is 4 wheeler"<<endl;
}
};
class car:public fourwheeler
{
public:
car()
{
cout<<"Car has 4 wheels"<<endl;
}
};
void main()
{
clrscr();
car obj;
getch();
}

