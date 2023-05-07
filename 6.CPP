//c++ demostration
#include<iostream.h>
#include<conio.h>
class Base
{
public:
int a;
};
class child:public Base
{
public:
int b;
};
//main function
void main()
{
child c1;
c1.a=5;
c1.b=3;
cout<<"Child is:"<<c1.a<<endl;
cout<<"Parent is:"<<c1.b<<endl;
getch();
}