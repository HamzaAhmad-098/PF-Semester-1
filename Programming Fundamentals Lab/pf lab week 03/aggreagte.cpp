#include<iostream>
using namespace std;
main()
{
string name;
int matric ,inter ,ecat;
float aggregate;
cout<<"enter your name";
cin>>name;
cout <<"enter your marks in matric(out of 1100)";
cin>>matric;
cout<<"enter your marks in inter(out of 560)";
cin>>inter;
cout <<"enter your ecat marks(out of400)";
cin >>ecat;
aggregate =(((0.5*ecat)+(0.4*inter)+(0.1*matric))/534)*100;
cout<<"your aggregate is "<<aggregate;
}
