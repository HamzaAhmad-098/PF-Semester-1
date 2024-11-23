#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void moveEnemy1(int , int);
void moveEnemy2(int , int);
void moveEnemy3(int , int);
void moveEnemy4(int , int);
void moveEnemy5(int , int);
void moveEnemy6(int , int);
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
void gotoxy(int , int);
char getCharAtxy(short int x, short int y)

{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
  : ' ';
}
  int x1 = 1 ;
  int y1 = 4 ;
  int x2 = 5;
  int y2 = 6 ;
  int x3 = 4;
  int y3 = 8;
  int x4 = 3;
  int y4 = 11;
  int x5 = 7;
  int y5 = 13;
  int x6 = 15;
  int y6 = 12;
  int pX = 10;
  int pY = 3;
main()
  {
   system("cls");
   printMaze();
   printPlayer();
   while(x1<=40)
      {
         moveEnemy1(x1 , y1);
         x1=x1-1;
         if(x1==10)
            {
              x1=1;
            } 
      }
   while(x2<=40)
      {
         moveEnemy2(x2 , y2);
         x2=x2-1;
         if(x2==5)
            {
              x2=1;
            } 
      }
   while(x3<=5)
      {
         moveEnemy3(x3 , y3);
         x3=x3-1;
         if(x3==40)
            {
              x3=1;
            } 
      }
   while(x4<=10)
      {
         moveEnemy4(x4 ,  y4);
         x4=x4-1;
         if(x4==40)
            {
              x4=1;
            } 
      }
   while(x5<=3)
      {
         moveEnemy5(x5 , y5);
         x5=x5-1;
         if(x5==40)
            {
              x5=1;
            } 
      }
   while(x6<=11)
      {
         moveEnemy6(x6 , y6);
         x6 = x6-1;
         if(x6==40)
            {
              x6=1;
            } 
      }
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
         }

     
  }
void printMaze()
  {
     cout <<"################################################################################################";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||                                                                                             ||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||                                                                                            || ";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||.                                                                                           ||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;                                                                                                      
     cout <<"||.                                                                                           ||";cout << endl;
     cout <<"||..                                                                                          ||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"||                                                                                             ||";cout << endl;
     cout <<"||..|%|                                                              |%||%||%|.....%%%%%%%%%  ||" ;   cout << endl;
     cout <<"||..%%%%%%%%%%%%%%%%%%%                   .............|%||%|%%%%%%%%%%%%%%%       |%||%||%||%||";cout << endl;
     cout <<"||                                                                                            ||";cout << endl;
     cout <<"###############################################################################################";cout << endl;
  }
void moveEnemy1(int x1 , int y1)
  {
    gotoxy(x1 , y1);
    cout<<"|~YYY~|";
    Sleep(400);
    gotoxy(x1 , y1);
    cout<<"       ";
  }
void moveEnemy2(int x2 , int y2)
  {
    gotoxy(x2 , y2 );
    cout<<"|~YYY~|";
    Sleep(400);
    gotoxy(x2 , y2);
    cout<<"       ";
  }
void moveEnemy3(int x3 , int y3)
  {
    gotoxy(x3 , y3);
    cout<<"|~YYY~|";
    Sleep(400);
    gotoxy(x3 , y3);
    cout<<"       ";
  }
void moveEnemy4(int x4 , int y4)
  {
    gotoxy(x4 , y4);
    cout<<"|~YYY~|";
    Sleep(400);
    gotoxy(x4 , y4);
    cout<<"       ";
  }
void moveEnemy5(int x5 , int y5)
  {
    gotoxy(x5 , y5);
    cout<<"|~YYY~|";
    Sleep(400);
    gotoxy(x5 , x5);
    cout<<"       ";
  }
void moveEnemy6(int x6 , int y6)
  {
    gotoxy(x6 , y6);
    cout<<"|~YYY~|";
    Sleep(400);
    gotoxy(x6 , y6);
    cout<<"       ";
  }
void printPlayer()
  { 
    cout<<">>|%|<<";
  }
void erasePlayer()
  {
    cout<<"      ";
  }

void movePlayerLeft()
  {
     if (getCharAtxy(pX - 1, pY) == ' ')
     {
       erasePlayer();
       pX= pX-1;
       printPlayer();
     }
  }
void movePlayerRight()
  {
    if (getCharAtxy(pX +  8, pY) == ' ')
      {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
      }
  }

void gotoxy(int x , int y)
{
      COORD coordinates;
      coordinates.X=x;
      coordinates.Y=y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}