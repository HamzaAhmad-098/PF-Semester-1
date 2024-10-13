#include<iostream>
using namespace std ; 
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
	double quantity;
	string fruit , dayOfWeek;
	cout<<"Enter day of week : ";
	cin>>dayOfWeek;
	cout<<"Enter fruit : " ;
	cin>>fruit;
	cout<<"Enter quantity : ";
	cin>>quantity;
	cout<<calculateFruitPrice(fruit , dayOfWeek , quantity);
}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
	float price;
	if(dayOfWeek =="monday" || dayOfWeek =="tuesday" || dayOfWeek =="wednesday" || dayOfWeek =="thursday" || dayOfWeek =="friday")
	{
		if(fruit=="banana")
		{
			price = 2.5*quantity;
		   	
		}
		if(fruit=="orange")
		{
			price = 0.85*quantity;
		}
		if(fruit=="apple")
		{
			price = 1.20*quantity;
		}
		if(fruit=="grapefruit")
		{
			price = 1.45*quantity;
		}
		if(fruit=="kiwi")
		{
			price = 2.70*quantity;
		}
		if(fruit=="grapes")
		{
			price = 3.85*quantity;
		}
		if(fruit=="pineapple")
		{
			price = 5.50*quantity;
		}
	}
	if(dayOfWeek =="saturday" || dayOfWeek =="sunday")
	{
		if(fruit=="banana")
		{
			price = 2.70*quantity;
		}
		if(fruit=="orange")
		{
			price = 0.90*quantity;
		}
		if(fruit=="apple")
		{
			price = 1.25*quantity;
		}
		if(fruit=="grapefruit")
		{
			price = 1.60*quantity;
		}
		if(fruit=="kiwi")
		{
			price = 3.00*quantity;
		}
		if(fruit=="grapes")
		{
			price = 4.20*quantity;
		}
		if(fruit=="pineapple")
		{
			price = 5.60*quantity;
		}
	}
	return price;
}