#include<iostream.h>
#include<conio.h>
//first base class
class vehicle
{
public:
vehicle()
{
cout<<"This is Vehicle."<<endl;
}
};
//second base class
class Fourwheeler:public vehicle
{
public:
Fourwheeler()
{
cout<<"This is a 4 wheeler Vehicle"<<endl;
}
};
class Car:public Fourwheeler
{
public:
Car()
{
cout<<"Car has 4 Wheels"<<endl;
}
};
void main()
{
clrscr();
Car a;
getch();
}