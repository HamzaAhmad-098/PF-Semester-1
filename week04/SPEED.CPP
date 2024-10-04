
#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
{
          int speed;
          cout<<"enter your speed";
          cin>>speed;
          checkSpeed( speed);
}
void checkSpeed(int speed)
{
          if(speed> 100)
            {
               cout<<"HALT..YOUWILL BE CHALLENGED";
            }
          if(speed<=100)
            {
               cout<<"PERFECT! YOU'ER GOING GOOD";
            }
}