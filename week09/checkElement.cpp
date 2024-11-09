#include<iostream>
using namespace std;
main()
{
	//if user have to input the string elements 
	string str[4];//for only 4 elemnts 
	cout<<"Enter four elements : "<<endl;
    for(int i =0 ;i<4;i++)
	{
		cout<<">= ";
		getline(cin,str[i]);
	}		 
	string reference = str[0];
	int count=0;
	for(int x=1;x<4;x++)
	{
		if(reference ==str[x])
		{
			count++;
		}
	}
	if(count == 3)//if string have only four elements
	{
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}