#include<iostream>
using namespace std ;
string checkPointPosition(int h, int x, int y);
main()
{
	int x , y , h;
	cout<<" Enter height : ";
	cin >>h;
	cout<<"Enter x coordinate : ";
	cin>>x;
	cout<<"Enter y coordinate : ";
	cin>>y;
	cout<<checkPointPosition(h , x , y);
	
}
string checkPointPosition(int h, int x, int y) {
    
    if (x >= 0 && x <= 2 * h && y >= 0 && y <= 2 * h) {
        if (x == 0 || x == 2 * h || y == 0 || y == 2 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    // Left top block check
    else if (x >= 0 && x <= h && y > 2 * h && y <= 4 * h) {
        if (x == 0 || x == h || y == 2 * h || y == 4 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    // Right top block check
    else if (x > h && x <= 2 * h && y > 2 * h && y <= 4 * h) {
        if (x == h || x == 2 * h || y == 2 * h || y == 4 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    // Outside all regions
    return "outside";
}
