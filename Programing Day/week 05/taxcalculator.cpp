#include <iostream>
using namespace std;
float taxCalculator(char , float);
float taxAmount =0;
main()
  {
    char type ;
    float itemPrice; 
    cout<<" enter your item type code"<<endl;
    cout<<" Motorcycle ~ M "<<endl;
    cout<<" Electric ~ E "<<endl;
    cout<<" Sedan ~S     "<<endl;
    cout<<" Van~ V       "<<endl;
    cout<<" Truck ~T     "<<endl;
    cin>>type;
    cout<<"enter the price of vehicle";
    cin>>itemPrice;
    
    float result =taxCalculator(type , itemPrice);
    cout<<"the final price of the vehicle of type "<<type<<"  after adding the     tax  "<<taxAmount<<"  is  $"<<result ;
   
  }
float taxCalculator(char type , float itemPrice)
  {
    float finalPrice , taxRate;
    if(type=='m'||'M')
        {
          taxRate = 6;
          taxAmount = (itemPrice*taxRate)/100;
          finalPrice = taxAmount + itemPrice;
          return finalPrice;
        }
    
    if(type=='e'||'E')
       {
        
         taxAmount = (itemPrice*8)/100;
         finalPrice = taxAmount + itemPrice;
         return finalPrice;
       }
    if(type='s'||'S')
      {
        taxRate = 10;
       taxAmount = (itemPrice*taxRate)/100;
       finalPrice = taxAmount + itemPrice;
       return finalPrice;
      }
    if(type='v'||'V')
     {
       taxRate = 12;
       taxAmount = (itemPrice*taxRate)/100;
       finalPrice = taxAmount + itemPrice;
       return finalPrice;
     }
    if(type='t'||'T')
     {
      taxRate = 15;
      taxAmount = (itemPrice*taxRate)/100;
      finalPrice = taxAmount + itemPrice;
      return finalPrice;
     }
  
  }
  

