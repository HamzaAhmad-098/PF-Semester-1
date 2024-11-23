#include<iostream>
using namespace std;
void digitChecker(int);
main()
{
	int number  ;
	cout<<"Enter  th number : ";
	cin>>number;
	digitChecker(number);
}
void digitChecker(int number)
{
	int x =0;
	if(number == 0)
	{
		x=1;
	}
	else{
      	while(number!=0)
	    {
		   number = number /10;
		   x++;
	    }
	}
	cout<<x;
}