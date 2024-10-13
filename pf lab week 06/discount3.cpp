#include<iostream>
using namespace std ;
float discount(float , string , string );
main()
{
	float purchaseAmount;
	string day , month;
	cout<<"Enter your purchaseAmount : ";
	cin>>purchaseAmount;
	cout<<"entern your day  : ";
	cin>>day;
	cout<<"enter the month : ";
	cin>>month;
	cout<<"Payable Amount is  "<<discount(purchaseAmount , day , month);
}
float discount(float purchaseAmount , string day , string month )
{
	float payableAmount = purchaseAmount;
	if(day == "sunday" || month == "october")
    {
			payableAmount = purchaseAmount-((purchaseAmount*10)/100);
		
	}
	return payableAmount;
}