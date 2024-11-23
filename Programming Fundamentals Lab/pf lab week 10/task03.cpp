#include<iostream>
using namespace std;
main()
{
	int x ,newArray[100];
	cout<<"How many numbers you want to enter ";
	cin>>x;
	int numbers[x];
	for(int i=0; i<x ;i++ )
	{
		cout<<"=> ";
		cin>>numbers[i];
	}
	int idx =0;
	for(int i =1; i<x; i++)
	{
		if(numbers[i]>numbers[i-1] && numbers[i]>numbers[i+1])
		{
			newArray[idx]=numbers[i];
			idx++;
		}
	}
	
	if(idx==0)
		{
			cout<<"No peak found ";
		}
	else if(idx!=0){
		cout<<"[";
		for(int i=0; i<idx;i++)
			{
				cout<<newArray[i]<<",";
			}
		cout<<"]";
	}
}