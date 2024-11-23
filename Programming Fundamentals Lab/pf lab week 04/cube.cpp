
#include<iostream>
using namespace std;
void cube(int side ,int sticker);
main()
{
int side , sticker;
cout<<"enter number of sides :";
cin>> side;
cube(side,sticker);
}
void cube(int side, int sticker)
{
sticker= side*side*6;
cout<<"number of stickers :"<<sticker;
}