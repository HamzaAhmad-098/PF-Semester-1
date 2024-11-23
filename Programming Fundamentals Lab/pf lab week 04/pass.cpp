#include <iostream>
using namespace std;
void even();
void odd();
main()
{ 
int num;
cout<<"enter your number";
cin >>num;
if(num%2==0)
{
even();
}
if(num%2 !=0)
{
odd();
}
}
void even()
{
cout<<"number is even";
}
void odd()
{
cout<<"number is odd";
}