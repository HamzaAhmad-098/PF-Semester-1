#include<iostream>
using namespace std;
bool isRepeatingCycle(int);
int array[100];
main()
{
	int length , cycle;
    cout<<"Enter the length of the array ";
	cin>>length;
	for(int i=0 ; i<length ; i++)
	{
		cout<<"=>";
		cin>>array[i];
	}
	cout<<"Enter the lenght of each cycle ";
	cin>>cycle;
	if(cycle>length)
	{
		cout<<"true";
	}
	else if(isRepeatingCycle(cycle)){
		cout<<"true";
	}
	else{
		cout<<"False";
	}
}
bool isRepeatingCycle(int cycle)
{
	int idx =0 ;
	while(array[idx]!=0)
	{
		idx++;
	}
	for (int i = 0; i < cycle; i++)
	{
		for (int j = i + cycle; j < idx; j += cycle)
			{
				if (array[i] != array[j])
					{
						return false; 
					} 
			} 
	}
	return true;
}
	
