#include<iostream>
using namespace std;
main()
{
	string str;
	cout<<"Enter any string : ";
	getline(cin,str);
	int count =0 , idx=0;
	while(str[idx]!='\0')
	{
		count++;
		idx++;
	}
	if(count%2==0)
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
}