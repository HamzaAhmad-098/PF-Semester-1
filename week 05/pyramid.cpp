#include<iostream>
#include<cmath>
using namespace std;
int pyramid();
string unit;
double length ,  width ,  height;
main()
  {
   
    
    cout<<"enter the length :";
    cin>> length;
    cout<<"enter the width :";
    cin>>width;
    cout<<"enter the height :";
    cin>>height;
    cout<<"enter your desired unit (centimeter , millimeter ,kilometers) : ";
    cin>> unit;
    pyramid ();
  }
 int pyramid()
  {
    double volumne ;
    volumne = 0.3333*length*height*width;
    if(unit=="centimeter")
        {
           volumne = volumne*(pow(10,6));
           cout<<"volume is  "<<volumne<<" cubic "<<unit;
        } 
    if(unit=="millimeter")
        {
          volumne = volumne*(pow(10 , 9));
          cout<<"volumne is   "<<volumne<<" cubic  "<<unit;
        }
    if(unit=="kilometers")
        {
          volumne = volumne/(pow(10 , 9));
          cout<<"volumne is  "<<volumne<<" cubic "<<unit;
        }
    return volumne;
  }