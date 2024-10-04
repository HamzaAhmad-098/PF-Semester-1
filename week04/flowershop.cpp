
#include<iostream>
using namespace std;
void flowerShop(int , int ,int);
main()
{

          int redRoses , whiteRoses , tulips;
          cout<<"enter number of red roses";
          cin>>redRoses;
          cout<<"enter number of white roses";
          cin >>whiteRoses;
          cout<<"enter number of tulips";
          cin>>tulips;
          flowerShop(redRoses , whiteRoses , tulips );
}
void flowerShop(int redRoses , int whiteRoses , int tulips)
     {
          float totalPrice = (redRoses*2.00)+(whiteRoses*4.10)+(tulips*2.50);
          cout<<"total amount is   : "<<totalPrice <<"$" <<endl;
          if(totalPrice>200)
             {
             float discountedPrice;
             cout<<"you gain 20% discount"<<endl;
             discountedPrice = totalPrice-((20*totalPrice)/100);
             cout<<"discounted price is  " <<discountedPrice <<"$";
             }
     }