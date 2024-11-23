.ex#include<iostream>
using namespace std;
bool parityCheck(int)
main()
{
	int num ;
	cout<< Enter a three digit number:";
	cin>>num;
	cout <<parityCheck;
}
bool parityCheck(int num)
{
	bool result;
	int a , b , c , sum;
	if(num%2==0)
	{
		a = num%10;
		b = (num/10)%10;
		c = (num/100)%10;
		sum = a+b+c;
		if(sum%2==0)
		{
			result = true;
		}
	}
	elseif(num%2==1)
	{
		a = num%10;
		b = (num/10)%10;
		c = (num/100)%10;
		sum = a+b+c;
		if(sum%2==1)
		{
			result = true;
		}
	}
	else{
		result = false;
	}
	return result;
}