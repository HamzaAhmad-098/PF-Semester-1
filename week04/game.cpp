#include<iostream>
using namespace std;
void printMaze();
void printEnemy();
void eraseEnemy();
void printPlayer();
void gotoxy(int  , int);
int eX=2 , eY=2;
int pX=2 . pY=2;
main()
{
   printMaze();
   while(x>=20);
     {
        printEnemy();
        eraseEnemy();
        if(x>=20)
           {
              eX=2;
           }
     }
}
void printMaze()
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
void printPlayer()
{
  cout<<"        //\\              "; gotoxy(pX,pY);
  cout<<"       //  \\             ";gotoxy(pX,pY+1);
  cout<<"    ////    \\\\          ";gotoxy(pX,pY+2);
  cout<<"  /////      \\\\\        ";gotoxy(pX,pY+3);
  cout<<"    ||||||||||||          ";gotoxy(pX,pY+4);
  cout<<"      ||||||||            ";gotoxy(pX,pY+5);
  cout<<"       ~~~~~~             ";gotoxy(pX,pY+6);
  cout<<"        !!!!              ";gotoxy(pX,pY+7);
  cout<<"                          ";gotoxy(pX,pY+8);
}

void printEnemy()
{
  cout<<"          !!!!             ";gotoxy(eX,eY);
  cout<<"         ~~~~~~            ";gotoxy(eX,eY+1);
  cout<<"        ||||||||           ";gotoxy(eX,eY+2);
  cout<<"      ||||||||||||         ";  gotoxy(eX,eY+3);
  cout<<"    /////      \\\\\       ";gotoxy(eX,eY+4);
  cout<<"      ////    \\\\         "; gotoxy(eX,eY+5);
  cout<<"         //  \\            ";gotoxy(eX,eY+6);
  cout<<"          //\\             ";gotoxy(eX,eY+7);
}
void eraseEnemy()
{
  cout<<"                           ";gotoxy(eX,eY);
  cout<<"                           ";gotoxy(eX,eY+1);
  cout<<"                           ";gotoxy(eX,eY+2);
  cout<<"                           ";  gotoxy(eX,eY+3);
  cout<<"                           ";gotoxy(eX,eY+4);
  cout<<"                           "; gotoxy(eX,eY+5);
  cout<<"                           ";gotoxy(eX,eY+6);
  cout<<"                           ";gotoxy(eX,eY+7);
}
void gotoxy(int eX , int eY)
{
      COORD coordinates;
      coordinates.X=x;
      coordinates.Y=y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
