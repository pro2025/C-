//class can inherit from more than one class//
#include<iostream.h>
#include<conio.h>
class vehicle
{
public:
vehicle()
{
cout<<"This is Vehicle"<<endl;
}};
class fourwheeler
{
public:
fourwheeler()
{
cout<<"This is a 4 Wheeler vehicle\n";
}
};
//sub class of two base classes//
class car:public vehicle,public fourwheeler{
};
void main()
{
clrscr();
car obj;
getch();
}

