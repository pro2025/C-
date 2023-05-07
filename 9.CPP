//hierarchical inheritance
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
//1st sub class
class Car:public vehicle
{
};
//2nd sub class
class Bus:public vehicle
{
};
void main()
{
clrscr();
Car a;
Bus b;
getch();
}