#include<iostream>
using namespace std;
int frequencyChecker(int number , int digit  );
main()
{
	int number , digit;
	cout<<"Enter the number ";
	cin>>number;
	cout<<"Enter the digit  ";
	cin>>digit;
	cout<<"the frquency of  "<< digit << " in "<<number <<" is s"<< frequencyChecker(number , digit);
}
int frequencyChecker(int number , int digit)
{
	int x=0;
	while(number!=0)
	{
		if(number%10 == digit)
		{
			x++;
		}
		number = number/10;
	}
	return x;
}
