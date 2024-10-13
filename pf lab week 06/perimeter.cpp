#include<iostream>
using namespace std;
float perimeter(int ,char);
main()
{
	int num ;
	char type;
	cout<<"Enter s for square \n Enter c for circle \n Enter t for triangle \n Enter h for hexagon";
    cin>>type;
	if(type =='s'||type =='t'||type =='h')
	{
    cout <<"Enter no of sides";
    cin>>num;
	}
	if(type == 'c')
	{
		cout<<"enter the radius";
		cin>>num;
	}
    cout<<"perimeter is "<< perimeter(num , type) ; 
}
float perimeter(int num , char type)
{
	float perimeter;
	
	if(type =='s')		
	{
		perimeter = num*4;
	}
	if(type =='c')
	{
		perimeter = num*6.28;
	}
	if(type =='t')
	{
		perimeter = num*3;
	}
	if(type =='h')
	{
		perimeter = num*6;
	}
	return perimeter;
}