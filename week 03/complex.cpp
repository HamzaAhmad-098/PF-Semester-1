#include<iostream>
using namespace std;
main()
{
int no_1,no_2,no_3,no_4,no_5,no_6,no_7,no_8,no_9,no_10,no_11,no_12,no_13,no_14,no_15;
int sum,sub,mul;
cout<<"enter no.1";
cin>>no_1;
cout<<"enter no.2";
cin>>no_2;
cout<<"enter no.3";
cin>>no_3;
cout<<"enter no.4";
cin>>no_4;
cout<<"enter no.5";
cin>>no_5;
cout<<"enter no.6";
cin>>no_6;
cout<<"enter no.7";
cin>>no_7;
cout<<"enter no.8";
cin>>no_8;
cout<<"enter no.9";
cin>>no_9;
cout<<"enter no.10";
cin>>no_10;
cout<<"enter no.11";
cin>>no_11;
cout<<"enter no.12";
cin>>no_12;
cout<<"enter no.13";
cin>>no_13;
cout<<"enter no.14";
cin>>no_14;
cout<<"enter no.15";
cin>>no_15;
sum=no_1+no_2+no_3+no_4+no_5;
mul=no_6*no_7*no_8*no_9*no_10;
sub=no_11-no_12-no_13-no_14-no_15;
sum=sum+mul;
sub=sum-sub;
cout<<"ultimate answer is :"<<sub;
}