#include<iostream>
using namespace std;
main()
{
	int packages[10];
	cout<<"Enter the weight of 10 packages "<<endl;
	for(int i=0 ; i<10 ; i++)
	{
		cout<<"=>";
		cin>>packages[i];
	}
	int swap;
	for(int i=0 ; i<10 ; i++)
	{
		for(int j=0 ; j<9 ; j++)
		{
			if(packages[j]>packages[j+1])
			{
				swap = packages[j];
				packages[j]=packages[j+1];
				packages[j+1]=swap;
			}
		}
	}
	cout<<"[";
	for(int i=0 ; i<10 ; i++)
	{
		cout<<packages[i]<<",";
	}
	cout<<"]";
}