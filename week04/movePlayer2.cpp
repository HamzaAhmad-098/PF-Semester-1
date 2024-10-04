<<<<<<< HEAD
#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int,int);
void movePlayer(int ,int);
main()
{
int x=5;
int y=2;

system("cls");
maze();
while(y<=10)
{

movePlayer(x,y);
y=y+1;
}

gotoxy(4,9);
while(y<=1)
{
movePlayer(x , y);
y=y-1;

}
}
void maze()
{
cout<<"##############################"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"##############################"<<endl;

}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void movePlayer(int x , int y)
{
gotoxy(x,y);
cout<<"p";
Sleep(400);
gotoxy(x,y);
cout<<" ";
=======
#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int,int);
void movePlayer(int ,int);
main()
{
int x=5;
int y=2;

system("cls");
maze();
while(y<=10)
{

movePlayer(x,y);
y=y+1;
}

gotoxy(4,9);
while(y<=1)
{
movePlayer(x , y);
y=y-1;

}
}
void maze()
{
cout<<"##############################"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"#                            #"<<endl;
cout<<"##############################"<<endl;

}
void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void movePlayer(int x , int y)
{
gotoxy(x,y);
cout<<"p";
Sleep(400);
gotoxy(x,y);
cout<<" ";
>>>>>>> f9d394236bfefad5829356f538180bcf609c24ea
}