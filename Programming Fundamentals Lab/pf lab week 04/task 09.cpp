#include<iostream>
using namespace std;
void multiply(int fuel, int distance);
main()
{
int fuel , distance;
cout<<"enter your distance";
cin>>distance;
multiply(fuel,distance);
}
void multiply(int fuel,int distance)
{
fuel = (10*distance)/distance ;
cout<<"fuel needed is :"<<fuel;
}