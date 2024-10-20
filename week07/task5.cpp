#include <iostream>
using namespace std;
bool checkPrime(int number); 
main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    cout<<checkPrime(number);
}

bool checkPrime(int number)
{
    bool result = true;
    int check =0;
    for (int i = 2; i <=number; i++)
    {
        if (number%i == 0)
        {
            check++;
        }
        if (check>=2)
        {
            result=false;
        }
    }
    return result;
}