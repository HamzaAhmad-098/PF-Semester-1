#include<iostream>
using namespace std;
float discount(float purchaseAmouont,string month , string day);
main()
{
	float purchaseAmount ;
	string month, day;
	cout<<"enter your purchase amount ";
	cin>>purchaseAmount;
	cout <<"enter your month  ";
	cin>>month;
	cout<<"enter day  ";
	cin>>day;
	cout<<"payable amount after discount is  :"<<discount(purchaseAmount , month , day);
	
}
float discount(float purchaseAmount , string month , string day)
{
	float payableAmount = purchaseAmount;
	if(day =="sunday" && month =="october" )
	{
			payableAmount = purchaseAmount - (purchaseAmount*0.1);
	}
	if(day=="sunday"&& month !="october")
	{
	        payableAmount = purchaseAmount-(purchaseAmount*0.05);
	}
	return payableAmount;
}