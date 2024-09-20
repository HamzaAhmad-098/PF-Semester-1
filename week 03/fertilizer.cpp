#include<iostream>
using namespace std;
main()
{
float size,cost,area,cost_per_pound,cost_per_area;
cout <<"enter size of fertilizer bag in pounds :";
cin>>size;
cout<<"enter cost of the bag:$";
cin>>cost;
cout<<"enter area in square feet that coverd by bag";
cin>>area;
cost_per_pound=cost/size;
cost_per_area=cost/area;
cout<<"cost of fertiizer per pound is :"<<cost_per_pound<<endl;
cout<<"cost of fertilizer per area is :"<<cost_per_area;
}