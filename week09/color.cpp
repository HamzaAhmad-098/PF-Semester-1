#include<iostream>
using namespace std;
main()
{
	int idx;
	cout<<"Enter the number of colors";
	cin>>idx;
	//if the string already defined
	//string str[idx] = {"blue","red ","green" ,"blue"};
	string str[idx];
	cout<<"Enter the "<<idx<<" colors "<<endl;
	for(int y=0;y<idx;y++)
	{
		cout<<">= ";
		cin>>str[y];
	}
    int total = idx*2;
	int z=1;
	for(int x =0;x<idx-1;x++)
	{
		if(str[x]!=str[z])
		{
			total = total+1;
		}
	    z++;
	}
	cout<<total;
}