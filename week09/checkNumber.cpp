#include<iostream>
using namespace std;
main()
{
	bool isFound = false;
	int idx;
	cout<<"Enter the lenght of your string ";
	cin>>idx;
	int array[idx];
	cout<<"Enter "<<idx<<" numbers for array"<<endl;
	for(int x =0 ;x<idx;x++)
	{
		cout<<">= ";
		cin>>array[x];
	}
	int i =0;
	while(i<idx)
	{
		while(array[i]!=0)
		{
			int a =array[i];
		    a = array[i]%10;
			if(a==7)
	            {
		          isFound =true;
	            }
		    array[i] = array[i]/10;
		}
		i++;
	}
	if(isFound)
	{
		cout<<"\"Boom!\"";
	}
	else{
		cout<<"There is no 7 in the array";
	}
}
