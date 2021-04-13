/* 
 * Created by Abby Strebel - 4/12/2021
 * 
 * A very simple C++ crackMe like program
 * - Asks for a "password", but really it just checks length
 * This was created to help demostrate Ghidra
 * I intend to compile on my Raspberry Pi 
 * - ARM assembly might be a bit more simple to read
 */

#include <iostream>
#include <string>
using namespace std;

string password = "Hunter2";

int main() {
    string pword;
    cout << "Please enter the password: ";
    cin >> pword;
    if (pword.length() == password.length()) {
        cout << "\nCongratulations, you successfully guessed the password\n";
    } else {
        cout << "\nIncorrect password\n";
    }
    return 0;
}


