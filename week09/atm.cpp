#include<iostream>
using namespace std;
main()
{
	string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
	//store the pin integers as character
	string pin; 
	string dancePin[4];
	cout<<"Enter the pin of four digits";
	cin>>pin;
	int x=0, count=0;
	while(pin[x]!='\0')
	{
		//check the pin only for integers
		if(pin[x]=='0'||pin[x]=='1'||pin[x]=='2'||pin[x]=='3'||pin[x]=='4'||pin[x]=='5'||pin[x]=='6'||pin[x]=='7'||pin[x]=='8'||pin[x]=='9')
	    {
			count++;
		}	
		x++;
	}
	if(count==4)
	{
		for(int i=0; i<4;i++)
		{
			//store the pin character as integer 
			//by its ASCII code
			int a = pin[i]; 
			int idx= (a-48)+i;//covert ACSII code to integer value
			if(idx>=10)
			{
				//start index from 0 if greater then 9
				idx=idx-10;
			}
			dancePin[i] = MOVES[idx];
			cout<<"\""<<dancePin[i]<<"\",";
		}
	}
	else{
		cout<<"invalid input";
	}	
}