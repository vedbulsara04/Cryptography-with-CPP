#include<iostream>
#include<string>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

string caesar_cipher_encrypt(string message, int shift) {
    string encrypted_message;
    for(int i = 0; i < message.length(); i++) {
        encrypted_message += char(int(message[i]) + shift);
    }
    cout << "Encrypted Message = " << encrypted_message << endl;
    return encrypted_message;
}

void caesar_cipher_decrypt(string encrypted_message, int shift) {
    string decrypted_message;
    for(int i = 0; i < encrypted_message.length(); i++) {
        decrypted_message += char(int(encrypted_message[i]) - shift);
    }
    cout << "Decrypted Message = " << decrypted_message << endl;
}

int main() {

    string output;

                int s;
                cout << "Enter the shift size: ";
                cin >> s;

                cout << "1. Encrypt \n";
                cout << "2. Decrypt \n";
                cout << "Enter your choice: ";
                int choice;
                cin >> choice;
                if(choice == 1) {
                    string message;
                    cout << "Enter the message to be encrypted: ";
                    cin >> message;
                    output = caesar_cipher_encrypt(message, s);
                    int n;
                    cout << "Press (1) if you want to decrypt else (0): ";
                    cin >> n;
                    if(n == 1) {
                        caesar_cipher_decrypt(output, s);
                    }
                }
                else {
                    string message;
                    cout << "Enter the message to be decrypted: ";
                    cin >> message;
                    caesar_cipher_decrypt(message, s);
                }
    return 0;
}
