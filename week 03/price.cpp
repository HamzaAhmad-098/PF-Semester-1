#include<iostream>
using namespace std;
main()
{
float price1 , price2 ,total1 , total2,sum;
cout<<"enter vegetable price per kg";
cin>>price1;
cout<<"enter fruits price per kg";
cin>>price2;
cout<<"enter total vegetable:";
cin>>total1;
cout<<"enter total fruits:";
cin>>total2;
price1 =price1*1.94;
price2= price2*1.94;
total1= total1*price1;
total2=total2*price2;
sum=total1+total2;
cout<<"total earning in rupees is "<<sum;



}