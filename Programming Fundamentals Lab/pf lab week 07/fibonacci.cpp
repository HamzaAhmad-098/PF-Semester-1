#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
{
	int length;
	cout<<"Enter the length : ";
	cin>>length;
	generateFibonacci(length);
}
void generateFibonacci(int length)
{
	int n1=0 , n2=1 ,next;
	cout<<n1<<" , "<<n2<<" , ";
	for(int i=1;i<=length-2;i++)
	{
		next = n1+n2;
		cout<<next<< " , ";
		n1=n2;
        n2=next;
		
		
		
	}
}