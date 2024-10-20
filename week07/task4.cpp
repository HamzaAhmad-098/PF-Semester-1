#include <iostream>
using namespace std;
void triangle(int number);
main()
{
    int number;
    cout<<"Enter Number of triangle:";
    cin>>number;
    triangle(number);
}
void triangle(int number)
{
    int dots=0;
    for (int r = 0; r<number; r++)
    {
        dots++;
        for (int column = 0; column<=r ; column++)
        {
            dots++;
        }
        
    }
    dots=dots-number;
    cout<<dots;
}