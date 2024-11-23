#include<iostream>
using namespace std;
void position( string word);
main()
{
	string word;
	cout<<"enter any word";
	cin>>word;
	position(word);
}
void position(string word)
{
	int x=0;
	while(word[x]!='\0')
	{
	word[x];
	cout<<word[x]<<"found at position "<<x<<endl;
	x++;
	}
}