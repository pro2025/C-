#include<iostream.h>
#include<conio.h>
int recursivelinearsearch(int array[ ],int item,int size)
{
size=size-1;
if(size<0)
{
return -1;
}
else if(array[size]==item)
{
return 1;
}
else
{
return recursivelinearsearch(array,item,size);
}
}
void main()
{
int size;
int result;
int array[30],item,i;
clrscr();
cout<<"\nEnter size of array::";
cin>>size;
for(i=0;i<size;i++)
{
cout<<"\nEnter ["<<i<<"]Element::";
cin>>array[i];
}
cout<<"\n The array entered is::\n\n";
for(int a=0;a<size;a++)
{
cout<<"Arr["<<a<<"]= ";
cout<<array[a]<<endl;
}
cout<<"\nEnter item to be searched in list::";
cin>>item;
result=recursivelinearsearch(array[],item,size--);
if(result==1)
{
cout<<"Item is found.";
}
else
{
cout<<"Item is not found";
}
getch();
}


