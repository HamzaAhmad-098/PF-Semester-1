#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void printEnemy();
void eraseEnemy();
void printPlayer();
void movePlayerLeft();
void movePlayerRight();
void erasePlayer();
void moveEnemy();
void gotoxy(int , int);
int eX=2 , eY=2;
int pX=15 , pY=13;
main()
{ 
   system("cls");
   printMaze();
   printPlayer();
   printEnemy();    
      while(true)
        {
           if (GetAsyncKeyState(VK_LEFT))
                {
                   movePlayerLeft();
                }
           if (GetAsyncKeyState(VK_RIGHT))
                {
                  movePlayerRight();
                }
           moveEnemy();
           Sleep(300);
        }
   gotoxy(40 , 40); 
}
void printMaze()
  {
         cout<<"###############################################################################"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl; 
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"#                                                                             #"<<endl;
         cout<<"###############################################################################"<<endl;
  }
void printPlayer()
 {
  gotoxy(pX,pY);
  cout<<"  ||||  |||| ";gotoxy(pX,pY+1);
  cout<<"|||||    ||||";gotoxy(pX,pY+2);
  cout<<"|||||    ||||";gotoxy(pX,pY+3);
  cout<<" ||||||||||||";gotoxy(pX,pY+4);
  cout<<"   ||||||||  ";gotoxy(pX,pY+5);
  cout<<"    ~~~~~~   ";gotoxy(pX,pY+6);
  cout<<"     !!!!    "; 
}

void printEnemy()
{
  gotoxy(eX,eY);
  cout<<"     ~~~~~~     ";gotoxy(eX,eY+1);
  cout<<"    ||||||||    ";gotoxy(eX,eY+2);
  cout<<"  ||||||||||||  ";  gotoxy(eX,eY+3);
  cout<<"||||||      ||||";gotoxy(eX,eY+4);
  cout<<"  |||||   ||||| "; gotoxy(eX,eY+5);
  cout<<"     ||  ||     ";gotoxy(eX,eY+6);
  cout<<"    |||  |||    ";
}
void eraseEnemy()
{
  gotoxy(eX,eY);
  cout<<"                           ";gotoxy(eX,eY+1);
  cout<<"                           ";gotoxy(eX,eY+2);
  cout<<"                           ";  gotoxy(eX,eY+3);
  cout<<"                           ";gotoxy(eX,eY+4);
  cout<<"                           "; gotoxy(eX,eY+5);
  cout<<"                           ";gotoxy(eX,eY+6);
  cout<<"                           ";
}
void erasePlayer()
{
    gotoxy(pX,pY);
    cout << "               ";
    gotoxy(pX, pY+1);
    cout << "               ";
    gotoxy(pX, pY+2);
    cout << "               ";
    gotoxy(pX, pY+3);
    cout << "               ";
    gotoxy(pX, pY+4);
    cout << "               ";
    gotoxy(pX,pY+5);
    cout << "               ";
    gotoxy(pX,pY+6);
    cout << "               ";
}
void movePlayerLeft()
 {
   erasePlayer();
   pX = pX - 1;
   printPlayer();
 }
void movePlayerRight()
 {
   erasePlayer();
   pX = pX + 1;
   printPlayer();
 }
void moveEnemy()
 {
   eraseEnemy();
   eX = eX + 1;
   if(eX == 25)
      {
        eX = 2;
      }
   printEnemy();
 }
void gotoxy(int x , int y)
{
      COORD coordinates;
      coordinates.X=x;
      coordinates.Y=y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}