#include<iostream>
#include<windows.h>
using namesapce std;
void gotoxy(int x, int y)
{
coord coordinates;
coordinates.x=x;
coordinates.y=y;
setconsolecursorposition(getstdhandle(std_output_handle),coordinates);
}
main()
{
cout<<"test";
gotoxy(15,15);
cout<<"my name is hamza";
}
