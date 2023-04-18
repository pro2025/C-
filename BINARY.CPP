#include<iostream.h>
#include<conio.h>
int recursivebinarysearch(int array[ ],int item,int lb,int ub)
{
int mid;
if(lb<=ub)
{
mid=(lb+ub)/2;
}
if(array[mid]==item)
{
return mid;
}
if(array[mid]>item)
{
return recursivebinarysearch(array,item,lb,mid-1);
}
if(array[mid]<item)
{
return recursivebinarysearch(array,item,mid+1,ub);
}
return -1;
}
void main()
{
int array[30],item,i,a;
int size,index;
clrscr();
cout<<"Enter the size of array: ";
cin>>size;
cout<<"Enter the elements in the array: ";
for(i=0;i<size;i++)
{
cout<<endl<<"Element at ["<<i<<"]:: ";
cin>>array[i];
}
cout<<"Array is";
for(a=0;a<size;a++)
{
cout<<"Element ["<<a<<"]:: ";
cout<<array[a]<<endl;
}
cout<<"Enter the element to search from above array :: ";
cin>>item;
index= recursivebinarysearch(array,item,0,size-1);
if(index==-1)
{
cout<< item <<"  Is not found in array ";
}
else
{
cout<< item <<"  Is found in array at index :: "<<index;
}
getch();
}