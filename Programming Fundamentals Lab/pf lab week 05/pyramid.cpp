#include<iostream>
using namespace std;
int pyramid(int , int ,int );
string unit;
int length ,  width ,  height;
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
    float volumne ;
    volumne = (1/3)*length*height*width;
    if(unit=="centimeter")
        {
           volumne = volumne/(10*10);
           cout<<"volume is  "<<volumne<<" cubic "<<unit;
        } 
    if(unit=="millimeter")
        {
          volumne = volumne/(10*10*10);
          cout<<"volumne is   "<<volumne<<" cubic"<<unit;
        }
    if(unit=="kilometers")
        {
          volumne = volumne*10*10*10;
          cout<<"volumne is  "<<volumne<<" cubic "<<unit;
        }
    return volumne;
  }