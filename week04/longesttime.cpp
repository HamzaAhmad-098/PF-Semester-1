#include<iostream>
using namespace std;
void longestTime(float , float);
main()
{
          system("cls");
          float hours , minute;
          cout<<"enter hours";
          cin>>hours;
          cout<<"enter minutes";
          cin>>minute;
          minute = minute/60;
          longestTime(hours,minute);
}
void longestTime(float hours, float minute)
{
          if(hours>minute)
             { 
                cout<<"longest is :"<<hours;
             }
          if(minute>hours)
             {
                minute=minute*60;
                cout<<"longest is :"<<minute;
             }
          if(hours==minute)
             {
                cout<<"both are equal";
             }
}