#include <iostream>
#include <fstream>
using namespace std;
int calculateFrequency(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);
	char first;
	file>>first;
    char ch;
    int count = 0;
    while (file.get(ch))
    {
		if(ch == first||ch== first-32){
        count++;
		}
    }
    file.close();
    return count;
}

int main()
{
    string fileName = "task3.txt";
    cout << "Frecuency of character is: " << calculateFrequency(fileName) << endl;
    return 0;
}
