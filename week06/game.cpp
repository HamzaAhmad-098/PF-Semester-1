#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void printEnemy();
void printEnemy2();
void printEnemy3();
void eraseEnemy();
void eraseEnemy2();
void eraseEnemy3();
void printPlayer();
void movePlayerLeft();
void movePlayerRight();
void erasePlayer();
void moveEnemy();
void moveEnemy2();
void moveEnemy3();
void gotoxy(int , int);

int eX=5 , eY=2;
int eX2=2  , eY2=5;
int eX3=4 , eY3=4; 
int pX=15 , pY=16;
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
main()
{ 
   system("cls");
  
   printMaze();
   printPlayer();
   printEnemy();
   printEnemy2();
   printEnemy3();   
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
		   moveEnemy2();
		   moveEnemy3();
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
void printEnemy()
 {
  gotoxy(eX,eY);
  cout<<R"(  !!!!!!  )";gotoxy(eX,eY+1);
  cout<<R"(  //  \\  )";gotoxy(eX,eY+2);
  cout<<R"( \\    // )";gotoxy(eX,eY+3);
  cout<<R"(   ||||   )";gotoxy(eX,eY+4);
  cout<<R"(    ||    )";
}
void printEnemy2()
 {
  gotoxy(eX2,eY2);
  cout<<R"(  !!!!!!  )";gotoxy(eX2,eY2+1);
  cout<<R"(  //  \\  )";gotoxy(eX2,eY2+2);
  cout<<R"( \\    // )";gotoxy(eX2,eY2+3);
  cout<<R"(   ||||   )";gotoxy(eX2,eY2+4);
  cout<<R"(    ||    )";
}
void printEnemy3()
 {
  gotoxy(eX3,eY3);
  cout<<R"(  !!!!!!  )";gotoxy(eX3,eY3+1);
  cout<<R"(  //  \\  )";gotoxy(eX3,eY3+2);
  cout<<R"( \\    // )";gotoxy(eX3,eY3+3);
  cout<<R"(   ||||   )";gotoxy(eX3,eY3+4);
  cout<<R"(    ||    )";
}

void printPlayer()
{
  gotoxy(pX,pY);
  cout<<R"(    |_|    )";gotoxy(pX,pY+1);
  cout<<R"(    / \    )";gotoxy(pX,pY+2);
  cout<<R"(   /   \   )";  gotoxy(pX,pY+3);
  cout<<R"(  !!!!!!!  )";gotoxy(pX,pY+4);
  cout<<R"( ||||||||| )"; 
  
}
void eraseEnemy()
{
  gotoxy(eX,eY);
  cout<<"           ";gotoxy(eX,eY+1);
  cout<<"           ";gotoxy(eX,eY+2);
  cout<<"           ";  gotoxy(eX,eY+3);
  cout<<"           ";gotoxy(eX,eY+4);
  cout<<"           ";

}
void eraseEnemy2()
{
  gotoxy(eX2,eY2);
  cout<<"           ";gotoxy(eX2,eY2+1);
  cout<<"           ";gotoxy(eX2,eY2+2);
  cout<<"           ";  gotoxy(eX2,eY2+3);
  cout<<"           ";gotoxy(eX2,eY2+4);
  cout<<"           ";

}
void eraseEnemy3()
{
  gotoxy(eX3,eY3);
  cout<<"           ";gotoxy(eX3,eY3+1);
  cout<<"           ";gotoxy(eX3,eY3+2);
  cout<<"           ";  gotoxy(eX3,eY3+3);
  cout<<"           ";gotoxy(eX3,eY3+4);
  cout<<"           ";

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
}
void movePlayerLeft()
 {
   if (getCharAtxy(pX - 1, pY) == ' ')
     {
       erasePlayer();
       pX = pX - 1;
       printPlayer();
     }
 }
void movePlayerRight()
 {
   if (getCharAtxy(pX + 15, pY) == ' ')
      {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
      }
 }
void moveEnemy()
 {
   eraseEnemy();
   eX = eX + 1;
   if(eX == 55)
      {
        eX = 2;
      }
   printEnemy();
 }
 void moveEnemy2()
 {
   eraseEnemy2();
   eY2 = eY2 + 1;
   if(eY2 == 15)
      {
        eY2 = 3;
      }
   printEnemy2();
 }
  void moveEnemy3()
 {
   eraseEnemy3();
   eX3 = eX3+4;
   eY3 = eY3 + 1;
   if(eX3 == 20 || eY3 == 15)
      {
		eX3 = 3;
        eY3 = 3;
      }
   printEnemy3();
 }
void gotoxy(int x , int y)
{
      COORD coordinates;
      coordinates.X=x;
      coordinates.Y=y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

