#include<iostream>
#include<cmath>
using namespace std;
main()
    {
      int horizontalDistance;
      float angle;
      float height;
      cout<<"enter horizontal distance";
      cin>>horizontalDistance;
      cout<<"enter angle of elevation (in degrees)";
      cin>>angle;
      angle = angle*0.01744;
      height = horizontalDistance* tan(angle);
      cout<<"height of tree is  "<<height;
      
      
    }