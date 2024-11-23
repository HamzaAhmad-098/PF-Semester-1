#include<iostream>
using namespace std;
int calculateGCD(int , int);
int calculateLCM(int , int );
main()
{
	int num1 , num2;
    cout<<"enter num1 : ";
    cin>>num1;
    cout<<"enter num2 : ";
    cin>>num2;
	cout<<"GCD : "<<calculateGCD(num1 , num2)<<endl;
	cout<<"LCM : "<<calculateLCM(num1 , num2);
}
int calculateGCD(int num1 , int num2)
{
    while(num2!=0)
	{
		int x = num2;
		num2=num1%num2;
		num1=x;
	}		
	return num1;
}
int calculateLCM(int num1 , int num2)
{
	int LCM;
	LCM = (num1*num2)/calculateGCD(num1 , num2);
	return LCM;
}