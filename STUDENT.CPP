#include<iostream.h>
#include<conio.h>
class Student
{
char Name[40];
int Roll;
public:
void getvalue( )
{
cout<<"Name of student: ";
cin>>Name;
cout<<"Roll No of student: ";
cin>>Roll;
}
void display( )
{
cout<<"Name of student: "<<Name<<endl;
cout<<"Roll no of Student: "<<Roll<<endl;
}
};
void main()
{
int i;
Student a[4];
clrscr();
for(i=1;i<4;i++)
{
a[i].getvalue();
}
cout<<"The list of students:"<<endl;
for(i=1;i<4;i++)
{
a[i].display();
}
getch();
}


