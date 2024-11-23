#include<iostream>
using namespace std;
void shiftedString(string);
main()
{
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);
	shiftedString(str);
}
void shiftedString(string str)
{
	int x =0,count=0;
	while(str[x]!='\0')
	{
		count++;
		x++;
	}
	char character[count];
	for(int i = 0;i<count;i++)
	{
		character[i]=str[i];
	}
	int y=0;
	cout<<"Shifted string : ";
	while(y<count)
	{
		int next = character[y];
		character[y] = next+1;
		if(character[y]=='z')
		{
			character[y]='a';
		}
		if(character[y]=='Z')
		{
			character[y]='A';
		}
		if(character[y]==' ')
		{
			character[y]=' ';
		}
		cout<<character[y];
		y++;
	}
	
}