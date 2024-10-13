#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
	int holidays ,hometownWeekends;
	string yearType;
	cout<<"Enter your holidays : ";     
	cin>>holidays;
	cout<<"Enter your home town travelling weekends : ";
    cin>>hometownWeekends;
    cout<<"Enter your year type : ";
    cin>>yearType;
    cout<< calculateVolleyballGames(yearType , holidays , hometownWeekends);	
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
	int playPerYear , remainingWeek;
	remainingWeek = 48-hometownWeekends;
	playPerYear	=  (((0.75)*remainingWeek)+((0.6666)*holidays)+(hometownWeekends*1));
	if(yearType=="Normal")
	{
	    playPerYear = playPerYear;   
	}
	if(yearType=="leap")
	{
		playPerYear = playPerYear+(playPerYear*0.15);
	}
    return playPerYear; 
}