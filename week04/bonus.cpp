#include <iostream>
using namespace std;
void position(int , int);
main()
 {
        int yourPosition , friendPosition;
        cout<<"enter your position";
        cin>>yourPosition;
        cout<<"enter your friend's position";
        cin>>friendPosition;
        position(yourPosition , friendPosition);
 }

void position(int yourPosition , int friendPosition)
 {
        int distance = friendPosition - yourPosition ;
        if(distance<=6)
              {
                   cout<<"true";
              }
        if(distance>6)
              {
                   cout<<"false";
              }
 }