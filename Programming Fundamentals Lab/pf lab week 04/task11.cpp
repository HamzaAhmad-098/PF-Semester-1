#include<iostream>
using namespace std;
void name(string nam);
main()
{
string nam;
cout<<"enter your name";
cin>>nam;
while(true)
{
name(nam);
}
}
void name(string nam)
{
cout<<nam;
}