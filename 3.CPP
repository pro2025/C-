
#include<iostream.h>
#include<conio.h>
class rectangle
{
private:
int l;
int w;
public:
rectangle()
{
cout<<"Enter the length and breadth of recatngle:";
cin>>l>>w;
}
rectangle(int a,int b)
{
cout<<"\n Here is constructor!"<<endl;
cout<<"\nArea of rectangle:";
l=a;
w=b;
}
~rectangle()
{
cout<<"Destructor\n";
}
int area()
{
return (l*w);
}
};
void main()
{
rectangle t;
rectangle i(5,4);
cout<<t.area()<<endl;
cout<<"Area= "<<i.area()<<endl;
getch();
}

