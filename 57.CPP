#include<iostream.h>
#include<conio.h>
class Class
{
public:
Class()
{
m_instanceCount++;
}
static int getinstanceCount()
{
return m_instanceCount;
}
private:
static int m_instanceCount;
};
int Class::m_instanceCount=0;
void main()
{
clrscr();
Class obj1;
Class obj2;
Class obj3;
cout<<"Number of Class objects:"<<Class::getinstanceCount()<<endl;
getch();
}