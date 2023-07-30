//class is allowed to inherit only from one class..//

#include<iostream.h>
#include<conio.h>
//base class
class Vehicle{
public:
Vehicle()
{
cout<<"This is a vehicle\n";
}
};
//sub class derived from single base class
class car:public Vehicle{
};
//main function
void main()
{
clrscr();
car obj;
getch();
}
