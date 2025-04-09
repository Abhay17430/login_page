#include <iostream>
#include <string>

using namespace std;

int main() {
    string storedUsername = "user";
    string storedPassword = "password";
    string enteredUsername;
    string enteredPassword;

    cout << "Welcome to the Login System" << endl;
    cout << "Please enter your username: ";
    cin >> enteredUsername;

    cout << "Please enter your password: ";
    cin >> enteredPassword;

    if (enteredUsername == storedUsername && enteredPassword == storedPassword) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }

    return 0;
}
