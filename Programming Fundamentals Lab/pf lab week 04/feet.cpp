#include<iostream>
using namespace std;
void multiply(int inches ,int feet);
main()
{
int inches , feet;
cout<<"enter your measurement in inches:";
cin>>inches;
multiply(inches, feet);
}
void multiply(int inches ,int feet)
{
feet = inches/12;
cout <<"measurement in foot is:"<<feet;
}
