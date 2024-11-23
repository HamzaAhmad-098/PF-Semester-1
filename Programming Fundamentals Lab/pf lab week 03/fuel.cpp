#include<iostream>
using namespace std;
void multiply( int distance);
main()
{
int  distance;
cout<<"enter your distance";
cin>>distance;
multiply(distance);
}
void multiply(int distance)
{
int fuel =10*distance;
cout<<"fuel needed is :"<<fuel;
}