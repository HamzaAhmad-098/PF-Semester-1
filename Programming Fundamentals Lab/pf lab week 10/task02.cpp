#include<iostream>
using namespace std ;
main()
{
	int x;
	cout<<"Enter the number of words you wants to enter : ";
	cin>>x;
	string search[x];
	int y=1;
	for(int i=0; i<x ; i++)
	{
		cout<<"Enter word "<<y <<" : ";
		cin>>search[i];
		y++;
	}
	char letter ;
	cout<<"Enter the letter you want to count ";
	cin>>letter;
	int count =0;
	for(int i=0; i<x ;i++)
	{
		string word = search[i];
		int idx = 0 ;
		while(word[idx]!='\0')
		{
			if(word[idx]==letter)
			{
				count++;
			}
			idx++;
		}
	}
	cout<<count;
}