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
class Fourwheeler
{
public:
Fourwheeler()
{
cout<<"This is a 4 wheeler Vehicle"<<endl;
}
};
class Car:public vehicle,public Fourwheeler
{
};
void main()
{
Car j;
getch();
}