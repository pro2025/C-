// pure virtual function is used..//
#include<iostream.h>
#include<conio.h>
class base
{
private:
int x;
public:
virtual void fun()=0;
int getx()
{
return x;
}
};
class derived:public base
{
private:
int y;
public:
void fun()
{
cout<<"fun is called";
}
};
void main()
{
clrscr();
derived d;
d.fun();
getch();
}