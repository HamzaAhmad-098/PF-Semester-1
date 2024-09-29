#include<iostream>
using namespace std;
void printHeader();
void aggregate(string , float,float,float );
void compareMarks(string , float , string , float);
main()
{
                  printHeader();
                  string name;
                  float matric,inter,ECAT;
                  cout<<"enter your name";
                  cin>>name;
                  cout<<"enter your matric marks";
                  cin>>matric;
                  cout<<"enter your inter marks";
                  cin>>inter;
                  cout<<"enter your ECAT marks";
                  cin>>ECAT;
                  aggregate(name,matric,inter,ECAT);
                  string student1 , student2;
                  float ECATMarks1 , ECATMarks2;
                  cout<<"enter student1 name  ";
                  cin>>student1;
                  cout<<"enter student1 ECAT marks  ";
                  cin>>ECATMarks1;
                  cout<<"enter student2 name  ";
                  cin>>student2;
                  cout<<"enter student 2 ECAT marks ";
                  cin>>ECATMarks2;
                  compareMarks(student1 , ECATMarks1 , student2 , ECATMarks2);
}
void printHeader()
{
             cout<<"                                                 @@    @@  @@@@@@@@@@    @@@@@@@@@@@@"<<endl;
             cout<<"                                                 @@    @@  @@@           @@@@@@@@@@@@"<<endl;
             cout<<"                                                 @@    @@  @@@               @@@@"<<endl;
             cout<<"                                                 @@    @@  @@@@@@@@@@        @@@@"<<endl;
             cout<<"                                                 @@    @@  @@@@@@@@@@        @@@@"<<endl; 
             cout<<"                                                 @@    @@  @@@               @@@@"<<endl;
             cout<<"                                                 @@    @@  @@@               @@@@"<<endl;
             cout<<"                                                 @@@@@@@@  @@@@@@@@@@        @@@@"<<endl;
}
void aggregate(string name,float matric,float inter,float ECAT)
{
             float aggregate;
             aggregate =(((0.5*ECAT)+(0.4*inter)+(0.1*matric))/534)*100;
             cout<<"your aggregate is "<<aggregate<<endl;
}
void compareMarks (string student1 , float ECATMarks1 ,string student2 , float ECATMarks2)
{
           if(ECATMarks1>ECATMarks2)
              {
                  cout<<"roll_1 is    "<<student1<<endl;
              }
            if(ECATMarks1<ECATMarks2)
              {
                 cout<<"roll_1 is    "<<student2<<endl;
              }
}