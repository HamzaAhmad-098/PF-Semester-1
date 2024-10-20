#include <iostream>
using namespace std;
void printUpperDiamond(int rows);
void printLowerDiamond(int rows);
main()
{
    int rows;
    cout<<"Enter Number of rows in Diamond:";
    cin>>rows;
    printUpperDiamond(rows);
    printLowerDiamond(rows);
}
void printUpperDiamond(int rows)
{
    for (int i = 0; i <=rows; i++)
    {
        for (int x = 0; x < i; x++)
        {
            cout<<"*";
        }
        cout<<endl;   
    }   
}

void printLowerDiamond(int rows)
{
    for (int i = rows; i >=0; i--)
    {
        for (int x = i-1; x >= 0; x--)
        {
            cout<<"*";
        }
        cout<<endl;   
    }   
}