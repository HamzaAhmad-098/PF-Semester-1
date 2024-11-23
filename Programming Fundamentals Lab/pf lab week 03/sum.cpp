#include<iostream>
using namespace std;
int add(int,int);
main()
{
int n1, n2;
cout<<"enter first number";
cin>>n1;
cout<<"enter 2ns number:";
cin>>n2;
add (n1,n2);
cout<<"sum is :"<<add;
}
int add(int n1, int n2)
{
int add = n1 + n2;
return add;
}