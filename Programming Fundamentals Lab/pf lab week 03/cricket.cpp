#include<iostream>
using namespace std;
main()
{
int wins ,draws,losses,points;
cout <<"enter no. of wins";
cin>>wins;
cout<<"enter no. of losses";
cin >>losses;
cout<<"enter no. of draws";
cin>>draws;
points =(3*wins)+(1*draws)+(0*losses);
cout <<"your total points is "<<points;


}