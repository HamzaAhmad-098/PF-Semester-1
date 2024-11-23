#include<iostream>
using namespace std;
int digitSum(int number);
main()
{
	int number ;
	cout<<"Enter the number : ";
	cin>>number;
	cout<<"Sum is  "<<digitSum(number);
}
int digitSum(int number)
{
	int sum = 0;
	int mode;
	while(number!=0)
	{
	    mode  = number%10;    
		number = number/10;
		sum = sum + mode;
	}
	return sum;
}
