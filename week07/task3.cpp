#include <iostream>
using namespace std;
void amplifing(int number);

main()
{
    int number;
    cout << "Enter a Number for Sequence";
    cin >> number;
    amplifing(number);
}

void amplifing(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i % 4 == 0)
        {
            cout << i * 10 << ", ";
        }
        else
        {
            cout << i << ", ";
        }

      
    }
    cout << endl;
}