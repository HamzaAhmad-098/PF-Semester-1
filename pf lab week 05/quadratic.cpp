#include<iostream>
#include<cmath>
void dicsLessZero(int , int , int);
void dicsGreaterZero(int , int ,int);
void dicsEqualZero(int , int);
using namespace std;
float root1 , root2 ;
int A ,B , C ,Dics ;
main()
   {
      cout<<" Quadratic equation is given by "<<endl;
      cout<<"  ax^2+bx+c = 0  "<<endl;
      cout<<"enter value of a   ";
      cin>>A;
      cout<<"enter value of b    ";
      cin>>B;
      cout<<"enter value of c   ";
      cin>>C;
      Dics = (B*B)-(4*A*C);
      if(Dics>0)
        {
          dicsGreaterZero(A,B,Dics);   
        }
      if(Dics<0)
        {
         dicsLessZero(A,B,Dics);
         
        }
     
      if(Dics==0)
        {
          dicsEqualZero(A,B);
         
        }
     
   }
void dicsGreaterZero(int A, int B ,  int C)
        {
          root1 = (-B + sqrt(Dics))/2*A;
          root2 = (-B - sqrt(Dics))/2*A;
          cout<<"root1 is  "<<root1 <<"root2  "<<root2;
        }
void dicsLessZero(int A , int B ,  int Dics)   
        {
         float part1 , part2;
         part1= (-B/2*A);
         part2 = (sqrt(-Dics))/2*A;
         cout<<"root1  is  "<<part1 <<" +  "<<part2<<" i "<<endl;
         cout<<"root2 is "<<part1<<" - "<<part2<<" i ";
        }
void dicsEqualZero(int A, int B)
        {
         root1=root2= -B/2*A;
      
         cout<<" root1 is  "<<root1 <<"  root2  "<<root2;
        }