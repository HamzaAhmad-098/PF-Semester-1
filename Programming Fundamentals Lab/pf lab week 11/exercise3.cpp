#include<iostream>
using namespace std;
main()
{
	int a = 200;
	int &ref = a;
	cout<<a<<endl;
	ref = 10000;
	cout<<a;
}