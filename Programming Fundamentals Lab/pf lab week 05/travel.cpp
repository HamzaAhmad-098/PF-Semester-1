#include <iostream>
#include<sstream>
using namespace std;
string timeTravel(int , int);

    int hours , minutes , futureTime;
main()
  {

    cout<<" enter no of hours (0 to 24)";
    cin>>hours;
    cout<<"enter minutes (0 to 59)";
    cin>>minutes;
    string futureTime = timeTravel( hours , minutes);
    cout<<futureTime;
  }
 string timeTravel(int hours , int minutes)
  {
     ostringstream oss;
     int time , futureTime;
     time = (hours*60)+minutes;
     futureTime = (hours*60)+minutes+15;
     hours = futureTime/60;
     minutes = futureTime%60;
     oss <<hours <<":"<<minutes; 
     return oss.str();
  } 