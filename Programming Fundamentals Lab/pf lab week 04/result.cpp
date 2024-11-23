#include <iostream>
using namespace std;
void result (int number);
main()
{
int number;
cout<<"enter yours marks";
cin >>number;
result ( number);
}
void result(int number)
{
if(number>50)
{
cout<<"pass";
}
if(number<=50)
{
cout<<"fail";
}
}