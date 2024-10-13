#include<iostream>
using namespace std;
string title(int , char);
main()
{
	int age;
	char gender;
	cout<<"enter your age : ";
	cin>>age;
	cout<<"enter your gender (f / m) :";
	cin>>gender;
	cout<<"your personal title is : "<<title(age , gender);
}
string title(int age , char gender )
{
	string title;
	if(age>=16 && gender =='m')
	{
		title = "Mr.";
	}
	if(age<16 && gender =='m');
	{
		title = "master";
	}
	if(age>=16 && gender =='f')
	{
		title = "Ms.";
	}
	if(age<16 && gender =='f')
	{
		title = "Miss";
	}	
	return title;
}