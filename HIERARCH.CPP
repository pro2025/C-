//more than one subclass is inherited from a single base class//
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
class car:public vehicle
{
};
class bus:public vehicle
{
};
void main()
{
clrscr();
car obj;
bus ob;
getch();
}
