#include<iostream.h>
#include<conio.h>
class Myclass
{
private:
int *p;
public:
Myclass()
{
p = new int;
cout<<"Dynamic constructor called!"<<endl;
}
~Myclass()
{
delete p;
cout<<"Destructor called!"<<endl;
}
void SetData(int value)
{
*p=value;
}
void displayData()
{
cout<<"Dynamic data: "<<*p<<endl;
}
};
void main()
{
clrscr();
Myclass*obj = new Myclass();
obj->SetData(5);
obj->displayData();
delete obj;
getch();
}
