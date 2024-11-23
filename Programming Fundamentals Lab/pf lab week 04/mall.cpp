#include <iostream>
using namespace std;
void sunday(int amount);
void other(int amount );
main ()
{
int amount ;
string day;
cout<<"enter the day";

cin >>day;
cout<<"enter the parchase amount";
cin>>amount;
if(day == "sunday")
{
  sunday(amount);
}
if(day!="sunday")
{
  other( amount);
}
}

void other(int amount)
{
int pay_amount;
pay_amount=amount;
cout<<"pay amount :"<<pay_amount;
}
void sunday(int amount)
{
int pay_amount;
pay_amount= amount-((amount *10)/100);
cout<<"pay amount is:"<<pay_amount;
}