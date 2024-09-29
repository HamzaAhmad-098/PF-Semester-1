#include <iostream>
using namespace std; 
void pet(int holidays);
main()
{
        int holidays;
        cout <<"enter your holidays";
        cin>>holidays;
        pet(holidays);
}
void pet(int holidays)
{
        int workingDays;
        workingDays=365-holidays;
        int timeForGame;
        timeForGame=( workingDays*63 + holidays*127);
        int normDifference;
        normDifference=30000-timeForGame;
        int hour , minute;
        hour = normDifference/60;
        minute = normDifference%60;
        if(normDifference>0)
             {
                cout<<"tom sleeps well  "<<endl;
                cout<<"it has "<<hour<< " hrs and"<<minute <<" minutes to play";
             }
        if(normDifference<0)
             {
                cout<<"tom runs away"<<endl; 
                cout<<"it has "<<-hour<< " hrs and  "<< -minute <<" minutes to play";
             }

}