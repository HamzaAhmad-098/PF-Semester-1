#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int countCharacters(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);
    char ch;
    int count = 0;
    while (file.get(ch))
    {
        count++;
    }
    file.close();
    return count;
}

int main()
{
    string fileName = "task2.txt";
    int charCount = countCharacters(fileName);
    
        cout << "Number of characters are: " << charCount << endl;
    return 0;
}
