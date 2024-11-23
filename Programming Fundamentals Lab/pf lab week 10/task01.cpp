#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"Enter the number of saturday miles you entered :";
	cin>>x;
	int milesSaturday[x];
	cout<<"Enter  "<<x <<" saturday miles you walked "<<endl;
	for(int i =0; i<x ;i++){
		cout<<"=>";
		cin>>milesSaturday[i];
	}
	int idx=0, count = 0;
	while(idx < x-1)
	{
		if(milesSaturday[idx]<milesSaturday[idx+1])
		{
			count++;
		}
		idx++;
	}
	cout<<"Progress days : "<<count;
}