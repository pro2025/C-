//derived class with two base classes and these two base classes have //
//one common base class//

#include<iostream.h>
#include<conio.h>
class a
{
public:
int a;
};
class b:public a{
public:
int b;
};
class c:public a{
public:
int c;
};
class d:public b,public c{
public:
int d;
};
void main()
{
clrscr();
d obj;
obj.b::a=10;
obj.c::a=100;
obj.b=20;
obj.c=30;
obj.d=40;
cout<<"a from b"<<obj.b::a<<endl;
cout<<"a from c:"<<obj.c::a;
cout<<"\n b:"<<obj.b;
cout<<"\n c:"<<obj.c;
cout<<"\n d:"<<obj.d<<"\n";
getch();
}

