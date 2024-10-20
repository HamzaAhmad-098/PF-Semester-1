#include<iostream>
using namespace std;
int calculateMoney(int age, int machinePrice, int toyPrice);
main()
{
int age , machinePrice , toyPrice;	
cout<<"Enter your age";
	cin>>age;
	cout<<"Enter the price of washing machine : ";
	cin>>machinePrice;
	cout<<"Enter the price of each toy : ";
	cin>>toyPrice;
	int result  = calculateMoney(age , machinePrice , toyPrice);
	cout<<result;
}
int calculateMoney(int age, int machinePrice, int toyPrice)
{
	int even = age/2;
	int odd = age-even;
	int money=9;
	int x=1;
	while(x!=even)
	{
		money = money + (money+9);
		x+=1;
	}
	int toys =  odd;
	int toyMoney = toys*toyPrice;
	int total = money + toyMoney;
	
	
	return total;
}

