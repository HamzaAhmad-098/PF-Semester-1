#include<iostream>
using namespace std;
main()
{
	int idx;
	cout<<"Enter the number of elemnts in array ";
	cin>>idx;
	string str[idx];
	cout<<"Enter the "<<idx<<" elements for array "<<endl;
	for(int i =0; i<idx;i++)
	{
		cout<<">= ";
		cin>>str[i];
	}
	string reference = str[0];
	int count =0;
	for(int x=1;x<idx;x++)
	{
		if(reference ==str[x])
		{
			count++;
		}
	}
	if(count == idx-1)//if string have only four elements
	{
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}