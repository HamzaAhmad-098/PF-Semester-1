#include<iostream>
using namespace std;
string timevalidation(string input)
{
again:
    cin >> input;
    bool am_pm_found = false;
    int i = input.length();
    if ((input[i - 2] == 'A' || input[i - 2] == 'a' || input[i - 2] == 'P' || input[i - 2] == 'p') && input[i - 1] == 'M' || input[i - 1] == 'm')
    {
        am_pm_found = true;
    }
    if (am_pm_found == true)
    {
        return input;
    }
    else
    {
        cin.clear();
        cin.sync();
        cout << "Wrong input..." << endl;
        cout << "Enter Again: ";
        goto again;
    }
}
string checkNumber(string input)

{
    cin >> input;
    int size;
    int check;
    bool flap;
    while (true)
    {
        size = input.length();
        for (int i = 0; i < size; i++)
        {
            if (input[i] != ' ')
            {
                check = int(input[i]);
                if (check >= 48 && check <= 57)
                {
                    flap = true;
                }
                else
                {
                    flap = false;
                    break;
                }
            }
        }
        if (flap == true)
        {
            return input;
        }
        else
        {
            cin.clear();
            cin.sync();
            cout << "Wrong  info..." << endl;
            cout << "Enter Again (only numbers): ";
            cin >> input;
        }
    }
}
string passwordlength1(string anypass)
{
    cin >> anypass;
    int size;
    while (true)
    {
        size = anypass.length();
        if (size <= 8 && size >= 4 && anypass.find(',') == string::npos)
        {
            return anypass;
        }
        else
        {
            cin.clear();
            cin.sync();
            cout << "Password must not be greater than 8 characters long and should not contain a comma" << endl;
            cout << "Enter password again: ";
            cin >> anypass;
        }
    }
    return "";
}
bool checkComma(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            return true;
        }
    }
    return false;
}
main()
{
	string anypass,input;
	cout<<passwordlength1(anypass);
	cout<<timevalidation(input);
}