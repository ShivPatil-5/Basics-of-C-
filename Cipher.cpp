#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabets{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}|;:',.<>/?`~ "};
    string key{"dJY+9tE{[z;C]BmOZr?<5~%'7feq64i=nFhNc8}o$WKU|@g&_LXkQ2a.:SG!*D`PR>j Asv#0^lTx(w)H,p/u3-IyVMb1"};
    string message;

    cout << "Do you want to encrypt or deccrypt the message?" << endl;
    cout << "To Encrypt press - 1 \nTo Decrypt press - 2" << endl;
    
    int a;
    cin >> a;
    
    // Clear the trailing newline character from the buffer
    cin.ignore(); 

    if(a == 1) {
        cout << "Enter message to encrypt:" << endl;
        getline(cin, message); // Reads the whole line, including spaces
        
        string temp = "";
        int len = message.length();
        for(int i = 0; i < len; i++) {
            size_t found = alphabets.find(message.at(i));
            if (found != string::npos) {
                temp = temp + key.at(found);
            } else {
                temp = temp + message.at(i); // Keep character as-is if not found
            }
        }
        cout << "Encrypted message: " << temp << endl;
    } 
    else if(a == 2) {
        cout << "Enter message to decrypt:" << endl;
        getline(cin, message); // Reads the whole line, including spaces
        
        string temp = "";
        int len = message.length();
        for(int i = 0; i < len; i++) {
            size_t found = key.find(message.at(i));
            if (found != string::npos) {
                temp = temp + alphabets.at(found);
            } else {
                temp = temp + message.at(i); // Keep character as-is if not found
            }
        }
        cout << "Decrypted message: " << temp << endl;
    } 
    else {
        cout << "Wrong Choice, try again!" << endl;
    }

    /*getline(cin, message): Replaced cin >> message to capture entire sentences with spaces intact.
    cin.ignore(): Added right after cin >> a to flush the newline character out of the input buffer so getline functions properly.
    Added Space to Strings: Added a space character " " to the very end of both alphabets and key variables so spaces can be mapped and ciphered securely.
    if (found != string::npos): Added an explicit safety check. If a character isn't supported, it passes through safely instead of crashing your software.*/

    return 0;
}
