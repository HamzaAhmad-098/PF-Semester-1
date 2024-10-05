#include<iostream>
using namespace std;
void symmetrical(int , int);
main()
  {
   int number;
   cout<<"enter any three digit number  :";
   cin>>number;
   int a , b , c , reverse ;
   a = number%10;
   b = (number/10)%10;
   c = (number/100)%10;
   reverse = a*100+b*10+c*1;
   symmetrical(reverse , number);
  }
void symmetrical(int reverse , int number)
  {  
   if(number==reverse)
      {
        cout<<"number is symmetrical";
      } 
   if(number!= reverse)
      {
        cout<<"number is not symmetrical";
      }
   }