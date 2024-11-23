#include<iostream>
using namespace std;
void reverseString(string);
main()
{
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);
	reverseString(str);
}
void reverseString(string reverse)
{
	int count=0;
	int x=0;
	while(reverse[x]!='\0')
	{	
		x++;
		count++;
	}
	cout<<"reverse string : ";
    for(int i = count;i>=0;i--)
	{
        cout<<reverse[i];
	}
}
