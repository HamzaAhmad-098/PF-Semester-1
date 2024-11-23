#include<iostream>
#include<iomanip>
using namespace std;
void percentage(int number);
main()
{
int number;
cout<<"Enter a number count: ";
cin>>number;
percentage(number);
}
void percentage(int number)
{
int check1=0,check2=0,check3=0,check4=0,check5=0;
for(int x =0;x<number;x++)
{
int num; 
 cout<<"enter number: ";
 cin>>num;
float p;
if(num<200)
check1++;
else if(num>=200 && num<399)
check2++;
else if(num>=400 && num<599)
check3++;
else if(num>=600 && num<799)
check4++;
else if(num>=800)
check5++;
}

float p1=(check1*100.0)/number;
float p2=(check2*100.0)/number;
float p3=(check3*100.0)/number;
float p4=(check4*100.0)/number;
float p5=(check5*100.0)/number;

    cout<<fixed<<setprecision(2);
    cout<<"p1: "<<p1<<"%"<<endl;
    cout<<"p2: "<<p2<<"%"<<endl;
    cout<<"p3: "<<p3<<"%"<<endl;
    cout<<"p4: "<<p4<<"%"<<endl;
    cout<<"p5: "<<p5<<"%"<<endl;


}