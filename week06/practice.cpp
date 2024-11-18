#include <iostream>
#include <string>
using namespace std;

bool isValidPassword(const string &password) {
    if (password.length() < 8) {
        return false;
    }

    bool hasNumber = false, hasLetter = false, hasSpecialChar = false;
    for (int i = 0; i < password.length(); i++) {
        if ((password[i] >= '0' && password[i] <= '9')) {
            hasNumber = true;
        }
        else if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z')) {
            hasLetter = true;
        }
        else {
            hasSpecialChar = true;
        }
    }

    return hasNumber && hasLetter && hasSpecialChar;
}

int main() {
    string password;
    cout << "Create a strong password: ";
    cin >> password;

    if (isValidPassword(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is not valid. It must be at least 8 characters long, contain letters, numbers, and at least one special character." << endl;
    }

    return 0;
}
