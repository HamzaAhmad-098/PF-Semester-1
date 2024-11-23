#include<iostream>
using namespace std;
main()
{
	int x;
	cout<<"How Many numbers you want to enter ";
	cin>>x;
	int values[x];
	cout<<"ENter the "<<x <<" values"<<endl;
	for(int i=0 ; i<x; i++)
	{
		cout<<"=>";
		cin>>values[i];
	}
	int multiply =1;
	int volume[x/3];
	int y = 3, idx=0;
	for(int i=0;i<x/3;i++)
	{
		multiply =1;
		while(idx<y)
		{
			multiply*=values[idx];
			idx++;
		}
		y+=3;
		volume[i]=multiply;
	}
	int sum = 0  ;
	for(int z =0 ; z<x/3 ; z++)
	{
		sum+=volume[z];
	}
	cout<<sum;
}