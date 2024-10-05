#include<iostream>
using namespace std;
void evenodd();
int add ;
main()
  {
    int number , a , b ,c ,d , e  ;
    cout<<"enter a five digit  number";
    cin>>number;
    a = number%10;
    b = (number/10)%10;
    c = (number/100)%10;
    d = (number/1000)%10;
    e = (number/10000)%10;
    add = a+b+c+d+e;
    evenodd();
}
void evenodd()
{
    if(add%2==0)
      { 
        cout<<"number is evenish";
      }
    if(add%2!=0)
     {
       cout<<"number is oddish";
     }
  }