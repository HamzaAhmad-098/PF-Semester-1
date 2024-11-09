#include<iostream>
using namespace std;
main()
{
	string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
	string movieName;
	float price;
	cout<<"Enter the name of the movie : ";
	cin>>movieName;
	bool isFound = false;
	int idx = 0;
	while(idx <5)
	{
		if(movieName==movies[idx])
		{
			isFound=true;
			if(idx%2==1)
			{
				price =500-( 500*0.05);
			}
			else{
				price =500-(500*0.1);
			}
		}
		idx++;
	}
	if(isFound)
	{
		cout<<"Total price is  "<<price;
	}
	else{
		cout<<"movie not found";
	}
}