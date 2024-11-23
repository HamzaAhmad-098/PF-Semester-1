#include<iostream>
using namespace std;
main()
{
	string s1,s2;
	cout<<"Enter the first string : ";
	getline(cin,s1);
	cout<<"Enter the second string : ";
	getline(cin,s2);
	int count =0;
	int x=0;
	while(s1[x]!='\0')
	{
		int i=0;
		while(s2[i]!='\0')
		{
			if(s1[x]==s2[i])
			{
				s1[x]='&';
				s2[i]='!';
				count++;
			}
			i++;
		}
		x++;
	}
	cout<<count;
}