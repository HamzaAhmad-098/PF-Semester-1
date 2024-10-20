#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void H();
void A();
void M();
void Z();
main()
{
H();
A();
M();
Z();
A();
}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void H()
{
cout<<"@@@          @@@"<<endl;
cout<<"@@@          @@@"<<endl;
cout<<"@@@          @@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@          @@@"<<endl;
cout<<"@@@          @@@"<<endl<<endl<<endl;
}
void A()
{
cout<<"    @@@@@@@   "<<endl;
cout<<"@@@        @@@"<<endl;
cout<<"@@@        @@@"<<endl;
cout<<"@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@"<<endl;
cout<<"@@@        @@@"<<endl;
cout<<"@@@        @@@"<<endl<<endl<<endl;
}
void M()
{ 
cout<<"@@@@        @@@@"<<endl;
cout<<"@@@@@      @@@@@"<<endl;
cout<<"@@@@@@    @@@@@@"<<endl;
cout<<"@@    @@@@@   @@"<<endl;
cout<<"@@     @@@    @@"<<endl;
cout<<"@@            @@"<<endl;
cout<<"@@            @@"<<endl<<endl<<endl;
}
void Z()
{
cout<<"@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@"<<endl;
cout<<"           @@@@@"<<endl;
cout<<"         @@@@@@ "<<endl;
cout<<"       @@@@@    "<<endl;
cout<<"   @@@@@@@      "<<endl;
cout<<"@@@@@@@@@@@@@@@@"<<endl;
cout<<"@@@@@@@@@@@@@@@@"<<endl<<endl<<endl;
}
