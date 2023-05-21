#include<iostream.h>
#include<conio.h>
class Rectangle
{
private:
double length_;
double width_;
public:
Rectangle(double length,double width):length_(length),width_(width)
{
}
double area()const
{
return length_*width_;
}
double perimeter() const
{
return 2*(length_+width_);
}
};
void main()
{
clrscr();
Rectangle r(5.0,10.0);
cout<<"The area of the rectangle is: "<<r.area()<<endl;
cout<<"The perimeter of the recatngle is:"<<r.perimeter()<<endl;
//r.length_=6.0//This line will cause a compile error;
//r.width_=11.0//This line will cause a compile error as data members are constant for class object;
getch();
}


