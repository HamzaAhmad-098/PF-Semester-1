<<<<<<< HEAD
#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int,int);
void movePlayer(int ,int);
main()
{
         int x=1;
         int y=2;
         system("cls");
         maze();
         while(x<=26)
           {
              movePlayer(x,y);
              x=x+1;    
              if(x==26)
                 {
                    x=1;	
                 } 
           }
         gotoxy(15,15);
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
         int x=1;
         int y=2;
         system("cls");
         maze();
         while(x<=26)
           {
              movePlayer(x,y);
              x=x+1;    
              if(x==26)
                 {
                    x=1;	
                 } 
           }
         gotoxy(15,15);
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