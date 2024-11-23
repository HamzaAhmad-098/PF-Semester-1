#include<iostream>
using namespace std;
int calculateMoney(int age, int machinePrice, int toyPrice );
main()
{
	int age , machinePrice , toyPrice , remaining, insufficiency;
    
	if(result>machinePrice)
	{
	    remaining = result-machinePrice;
		cout<<"YES!";
		cout<<remaining;
	}
	else{
		cout<<"NO!";
		 insufficiency = machinePrice-result;
		 cout<<insufficiency;
	}
	
	
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