<<<<<<< HEAD
#include<iostream>
using namespace std;
void rollsLeft(int people,int tp_rolls);
main()
{
        int people ,tp_rolls;
        cout<<"enter number of people";
        cin>>people;
        cout<<"enter number of rolls";
        cin>>tp_rolls;
         rollsLeft(people ,tp_rolls);
}
void rollsLeft(int people , int tp_rolls)
{
        int sheetsPerDay;
        sheetsPerDay=people*57;
        int rolls;
        rolls=tp_rolls*500;
        int leftDays =rolls/sheetsPerDay;
        if(leftDays>=14)
           ss{
              cout<<"tissue paper will last "<<leftDays<<"  days ,no need to panic";
           }
        if(leftDays<14)
           {
              cout<<"tissue are not enough only  "<<leftDays<<" days left ,buy more";
           }

=======
#include<iostream>
using namespace std;
void rollsLeft(int people,int tp_rolls);
main()
{
        int people ,tp_rolls;
        cout<<"enter number of people";
        cin>>people;
        cout<<"enter number of rolls";
        cin>>tp_rolls;
         rollsLeft(people ,tp_rolls);
}
void rollsLeft(int people , int tp_rolls)
{
        int sheetsPerDay;
        sheetsPerDay=people*57;
        int rolls;
        rolls=tp_rolls*500;
        int leftDays =rolls/sheetsPerDay;
        if(leftDays>=14)
           ss{
              cout<<"tissue paper will last "<<leftDays<<"  days ,no need to panic";
           }
        if(leftDays<14)
           {
              cout<<"tissue are not enough only  "<<leftDays<<" days left ,buy more";
           }

>>>>>>> f9d394236bfefad5829356f538180bcf609c24ea
}