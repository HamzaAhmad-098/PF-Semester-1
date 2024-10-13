#include<iostream>
using namespace std;
bool parityCheck(int);
main()
{
	int num ;
	cout<< "Enter a three digit number:";
	cin>>num;
	cout << parityCheck(num);
}
bool parityCheck(int num)
{
	bool result;
	int a , b , c, sum;
		a = num%10;
		b = (num/10)%10;
		c = (num/100)%10;
		sum = a+b+c;
	if(num % 2==0 && sum % 2==0 || num %2==1 && sum %2==1)
	{
			result = true;
	}
	
	else{
		result = false;
	}
	return result;
}