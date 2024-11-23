#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void printSnake();
void moveSnakeUp();
void moveSnakeDown();
void moveSnakeLeft();
void moveSnakeRight();
void eraseSnake();
void gotoxy(int , int);
int sX = 1 , sY = 1;
int direction = 0; 
int tailX[100], tailY[100]; // Arrays to store the snake's body parts
int snakeLength = 1;
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
	printSnake();
	 while(true)
        {
           if (GetAsyncKeyState(VK_LEFT))
                {
                   if (direction != 0) direction = 2; 
                }
           if (GetAsyncKeyState(VK_RIGHT))
                {
                  if (direction != 2) direction = 0;
                }
		   if(GetAsyncKeyState(VK_UP))
		        {
			      if (direction != 1) direction = 3;
		        }
		   if(GetAsyncKeyState(VK_DOWN))
		        {
			      if (direction != 3) direction = 1;
		        }	
			switch (direction) {
            case 0: moveSnakeRight(); break;
            case 1: moveSnakeDown(); break;
            case 2: moveSnakeLeft(); break;
            case 3: moveSnakeUp(); break;
                }
            Sleep(100);				
		}
	
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
  void printSnake()
  {
	  gotoxy(sX,sY);
	  cout<<"0";
	      for (int i = 0; i < snakeLength - 1; i++) {
        gotoxy(tailX[i], tailY[i]);
        cout << "o";
	 }
  }
  void eraseSnake()
  {
	  gotoxy(sX,sY);
	  cout<<" ";
	  for (int i = 0; i < snakeLength - 1; i++) {
        gotoxy(tailX[i], tailY[i]);
        cout << " ";
	  }
		  
  }
  void moveSnakeLeft()
  {
	if (getCharAtxy(sX - 1, sY) == ' ')
     {
       eraseSnake();
       sX = sX - 1;
       printSnake();
     }
  }
  void moveSnakeRight()
  {
	  if (getCharAtxy(sX + 1, sY) == ' ')
      {
        eraseSnake();
        sX = sX + 1;
        printSnake();
      }
  }
  void moveSnakeUp()
  {
	  if(getCharAtxy(sX,sY-1)==' ')
	  {
		  eraseSnake();
		  sY--;
		  printSnake();
	  }
  }
  void moveSnakeDown()
  {
	if(getCharAtxy(sX,sY+1)==' ')
	{
		eraseSnake();
		sY++;
		printSnake();
	}		
  }
  void gotoxy(int x , int y)
    {
      COORD coordinates;
      coordinates.X=x;
      coordinates.Y=y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    }