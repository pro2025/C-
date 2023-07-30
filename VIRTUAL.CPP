//ambiguity arised in multipath inheritance virtual base//
#include<iostream.h>
#include<conio.h>
class a
{
public:
int a;
};
class b:virtual public a
{
public:
int b;
};
class c:virtual public a
{
public:
int c;
};
class d:public b,public c
{
public:
int d;
};
void main()
{
clrscr();
d obj;
obj.a=10;
obj.a=100;
obj.b=20;
obj.c=30;
obj.d=40;
cout<<"\n a:"<<obj.a;
cout<<"\n b:"<<obj.b;
cout<<"\n c:"<<obj.c;
cout<<"\n d:"<<obj.d<<endl;
getch();
}