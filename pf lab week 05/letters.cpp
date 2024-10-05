#include<iostream>
using namespace  std;
void checkAlphabetCase(char);
main()
  {
    char ch;
    cout <<"enter any alphabet :";
    cin>>ch;
    checkAlphabetCase(ch);
   
     
  }
void checkAlphabetCase(char ch)
     {
                if(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'                              
                   ||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'
                   ||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')   
     {
       
       cout<<"you entered a small letter "<<ch;
     }
               if(ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'
                  ||ch=='K'||ch=='L'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'
                  ||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z')
     {
       cout<<"you entered capital letter "<<ch; 
     }
     }