#include<iostream>
using namespace std;
main()
{
	int idx;
	cout<<"Enter the number of integers in the array : ";
	cin>>idx;
    int array[idx];
    cout<<"Enter the "<<idx<<" integers for array "<<endl;
    for(int x = 0;x<idx;x++)
	{
		cout<<">= ";
		cin>>array[x];
	}	
    int number;	
	cout<<"Enter number of times even-odd transformation need to be done : ";
	cin>>number;
	for(int i = 1;i<=number;i++)
	{
		int triverse = 0;
		while(triverse < idx)
		{
			if(triverse%2==0)
			{
			    array[triverse] = array[triverse]+2;
			}
			else{
				array[triverse] = array[triverse]-2;
			}
			triverse++;
		}
	}
	int result=0;
	cout<<"[";
	while(result<idx)
	{

		cout<<array[result]<<",";
		result++;
	}
	cout<<"]";
}