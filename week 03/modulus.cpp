#include<iostream>
using namespace std;
main()
{
int number,digit1,digit2,digit3,digit4,sum;
cout<<"enter four digit no.";
cin>>number;
digit1=number%10;
digit2=(number/10)%10;
digit3=(number/100)%10;
digit4=(number/1000)%10;
sum=digit1+digit2+digit3+digit4;
cout<<"sum of digits is:"<<sum;

}
