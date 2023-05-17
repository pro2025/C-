//initialize static data member of a class
#include<iostream.h>
#include<conio.h>
class myclass
{
private:
static count;
public:
myclass()
{
count++;
}
static int getcount()
{
return count;
}
};
int myclass :: count=0;
void main()
{
myclass obj1;
myclass obj2;
myclass obj3;
myclass obj4;
cout<<"\n Number of myclass objects:"<<myclass :: getcount()<<endl;
getch();
}