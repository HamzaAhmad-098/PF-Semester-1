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
	if(dayOfWeek =="Monday" || dayOfWeek =="Tuesday" || dayOfWeek =="Wednesday" || dayOfWeek =="Thursday" || dayOfWeek =="Friday")
	{
		if(fruit=="Banana")
		{
			price = 2.5*quantity;
		   	
		}
		if(fruit=="Orange")
		{
			price = 0.85*quantity;
		}
		if(fruit=="Apple")
		{
			price = 1.20*quantity;
		}
		if(fruit=="Grapefruit")
		{
			price = 1.45*quantity;
		}
		if(fruit=="Kiwi")
		{
			price = 2.70*quantity;
		}
		if(fruit=="Grapes")
		{
			price = 3.85*quantity;
		}
		if(fruit=="Pineapple")
		{
			price = 5.50*quantity;
		}
	}
	if(dayOfWeek =="Saturday" || dayOfWeek =="Sunday")
	{
		if(fruit=="Banana")
		{
			price = 2.70*quantity;
		}
		if(fruit=="Orange")
		{
			price = 0.90*quantity;
		}
		if(fruit=="Apple")
		{
			price = 1.25*quantity;
		}
		if(fruit=="Grapefruit")
		{
			price = 1.60*quantity;
		}
		if(fruit=="Kiwi")
		{
			price = 3.00*quantity;
		}
		if(fruit=="Grapes")
		{
			price = 4.20*quantity;
		}
		if(fruit=="Pineapple")
		{
			price = 5.60*quantity;
		}
	}
	return price;
}