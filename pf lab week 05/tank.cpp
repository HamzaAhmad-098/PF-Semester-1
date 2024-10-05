#include<iostream>
using namespace std;
main()
   { 
     float tankVolumn , pipe1 , pipe2 , absentHours;
     cout<<"enter volume of tank ";
     cin>>tankVolumn ;
     cout<<"enter first pipe  flow rate ";
     cin>>pipe1;
     cout<<"enter second pipe flow rate  ";
     cin>>pipe2;
     cout <<"enter number of hours for workers absent  ";
     cin>>absentHours;
     pipe1 = pipe1*absentHours;
     pipe2 = pipe2*absentHours;
     float total ;
     total =  pipe1 + pipe2;
     if(total>tankVolumn)
        {
          int overFlow = total-tankVolumn;
          cout<<"tank overflows water  "<<overFlow<<"  liters";
        }
     if(total<tankVolumn)
        {
          float percentage, percentage1 , percentage2;
          percentage = ((total)/tankVolumn)*100;
          percentage1 =((pipe1/total)*100);
          percentage2 =((pipe2/total)*100);
          cout <<"tank is "<<percentage<<" % full"<<endl<<"the contribution of pipe 1 is "<<percentage1<<" %  the contribution of pipe2 is  "<<percentage2<<" %";
        }
     
   }