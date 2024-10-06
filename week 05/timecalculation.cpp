#include<iostream>
using namespace std;
void projectTimeCalculation(int , int , int);
main()
  {
    int hoursNeeded , days , workers;
    cout<<"enter the hours needed";
    cin>>hoursNeeded;
    cout<<"enter the days left";
    cin>>days;
    cout<<"enter the number of all workers:";
    cin>>workers;
    projectTimeCalculation(hoursNeeded , days , workers);
  }
void projectTimeCalculation(int hoursNeeded , int days , int workers)
  {
    int workHours ,hoursLeft; 
    workHours = (days-(days*0.1))*10*workers;
    hoursLeft = workHours-hoursNeeded;
    if(workHours>=hoursNeeded)
        {
           cout<<"yes! "<<hoursLeft<<"  hours left ";
        }
    if(workHours<= hoursNeeded)
        {
          cout<<"Not enough time !"<<hoursLeft<<"  hours needed";
        }
  }