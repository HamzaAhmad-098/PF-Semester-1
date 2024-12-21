#include<iostream>
using namespace std;
int a = 200;
	void modifyPointer(int *p){
		*p = 20;
		cout<<a<<endl;
	}
	void modifyReference(int &a){
		a=100;
		cout<<a<<endl;
	}
main()
{
	cout<<a<<endl;
	modifyPointer(&a);
	modifyReference(a);
}