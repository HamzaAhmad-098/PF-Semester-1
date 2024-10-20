#include <iostream>
using namespace std;
bool checkPrime(int number);
int primorial(int Prime);
main()
{
    int Prime;
    cout<<"Enter Number: ";
    cin>>Prime;
    cout<< primorial(Prime);
}

int primorial(int Prime)
{
    int primeNumber=0;
    int number=0;
    int primeProduct=1;
    while (primeNumber<=Prime)
    {
        number=number+1;
        if (checkPrime(number)==true)
        {
            primeProduct=primeProduct*number;
            primeNumber++;
        }
        
    }
    return primeProduct;
    
}

bool checkPrime(int number)
{
    bool result=true;
    int check=0;
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