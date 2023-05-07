#include<iostream.h>
#include<conio.h>
class Test
{
public:
Test()
{
cout<<"\nConstructor executed";
}
~Test()
{
cout<<"\nDestructor executed";
}
};
void main()
{
Test a,b,c,d;
getch();
}