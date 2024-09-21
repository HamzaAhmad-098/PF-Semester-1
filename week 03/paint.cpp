#include<iostream>
using namespace std;
main()
{

int n, w , h ,area;
float painted_walls;
cout <<"enter no. of square meter you can paint:";
cin>>n;
cout <<"enter width of a wall:";
cin>>w;
cout <<"enter hight of a wall:";
cin >>h;
area =w*h;
painted_walls=n/area;
cout<<"no of walls you can paint is  :"<<painted_walls;


}