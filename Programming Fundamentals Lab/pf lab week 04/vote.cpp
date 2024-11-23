#include<iostream>
using namespace std;
void eligible();
void ineligible();
main()
{
int age;
cout <<"enter your age";
cin>>age;
if(age>=18)
{
 eligible();
}
if(age<18)
{
  ineligible();
}
}
void eligible()
{
  cout <<"you are eligible";
}
void ineligible()
{
  cout<<"you are not eligible";
}