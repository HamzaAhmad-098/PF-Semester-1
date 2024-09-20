#include<iostream>
using namespace std;
main()
{
string movie_name;
float  ticket_price1 , ticket_price2 , ticket_sold1 , ticket_sold2 , charity , total , remaining , donating;
cout<<"enter movie name:";
cin>>movie_name;
cout<<"enter adult ticket price:";
cin>>ticket_price1;
cout<<"enter child ticket price:";
cin>>ticket_price2;
cout<<"enter no. of adult ticket sold:";
cin>>ticket_sold1;
cout<<"enter child ticket sold:";
cin>>ticket_sold2;
cout<<"enter percentage you want to give in charity:%";
cin>>charity;
total=(ticket_sold1*ticket_price1)+(ticket_sold2*ticket_price2);
charity=(charity/100)*total;
remaining=total-charity;
cout<<"total amount is"<<total<<endl;
cout<<"charity amount is:"<<charity<<endl;
cout<<"remaining amount after charity is:"<<remaining<<endl;

}