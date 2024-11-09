#include<iostream>
using namespace std;
main()
{
	string fruit[4] = {"peach", "apple", "guava", "watermelon"};
	int price[4] = {60, 70, 40, 30};
	string fruitName;
	int  quantity , totalBill;
	cout<<"Enter the name fruit : ";
	cin>>fruitName;
	cout<<"Enter the quantity of fruit in kg : ";
	cin>>quantity;
	int x =0;
	bool isFound = false;
	while(x<4)
	{
		if(fruitName==fruit[x])
		{
			totalBill = price[x]*quantity;	
			isFound = true;
		}
		x++;
	}
	if(isFound)
	{
		cout<<"Total bill is : "<<totalBill;
	}
	else{
		cout<<"fruit not found";
	}
}