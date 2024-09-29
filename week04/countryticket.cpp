#include<iostream>
using namespace std;
main()
{
           string countryName;
           int price;
           int finalPrice;
           cout<<"enter your country name";
           cin>>countryName;
           cout<<"enter price in dollars";
           cin>>price;
           if(countryName== "pakistan")
              {
                finalPrice = price-(5*price)/100;
                cout<<"final price after 5% discount is :"<<finalPrice;  
              }              
           if(countryName== "ireland")
              {
                finalPrice = price-(10*price)/100;
                cout<<"final price after 10% discount is :"<<finalPrice;
              }
           if(countryName== "india")
              {
                finalPrice = price-(20*price)/100;
                cout<<"final price after 20% discount is :"<<finalPrice;
              }
           if(countryName== "england")
              {
                finalPrice = price-(30*price)/100;
                cout<<"final price after 30% discount is :"<<finalPrice;
              }
           if(countryName== "canada")
              {
                finalPrice = price-(45*price)/100;
                cout<<"final price after 45% discount is :"<<finalPrice;
              }
}