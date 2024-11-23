#include<iostream>
#include<string>
using namespace std;
string reverseWords(string );
main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout<<reverseWords(str);
}
string reverseWords(string str)
 {
	string words[100];
    int n = str.length();
	/*
	while(str[idx]!='\0')
	{
		idx++;
	}
	int n=idx-1;
	*/
    int wordStart = 0;
    int count = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0' || i == n) {
            if (i > wordStart) {
                string word = "";
                for (int j = wordStart; j < i; j++) {
                    word += str[j];
                }
                words[count] = word;
                count++;
            }
            wordStart = i + 1;
        }
    }
	string reverse = "";
	for(int i=count-1 ; i>=0 ; i--)
	{
		reverse+=words[i];
		if (i > 0)
			{
				reverse += " ";
			}
	}
	return reverse;
}
