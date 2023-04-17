#include<iostream.h>
#include<conio.h>
class rectangle
{
private:
int l;
int b;
public:
void set(int len,int bre)
{
l=len;
b=bre;
}
int area( )
{
return l*b;
}
};
void main()
{
rectangle r1,r2;
r1.set(5,8);
r2.set(2,5);
cout<<"Area of r1: "<< r1.area( )<<endl;
cout<<"Area of r2: "<< r2.area( )<<endl;
getch();
}



