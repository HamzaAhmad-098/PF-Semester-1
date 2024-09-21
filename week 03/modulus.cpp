#include<iostream>
using namespace std;
main()
{
int no,digit1, digit2 , digit3 , digit4,sum;
cout <<"enter a four digit number :";
cin >>no;
digit1=no%10;
digit2=(no/10)%10;
digit3=(no/100)%10;
digit4=(no/1000)%10;
sum=digit1+digit2+digit3+digit4;
cout<<"sum is :"<<sum;



}
