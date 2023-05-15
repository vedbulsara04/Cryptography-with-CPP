#include<iostream>
#include<string>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;


void row_col_transpos_encrypt(string message) {

    stringstream ss(message);
    string word;
    string inp[100];
    char mess[100][100];
    int idx1 = 0, idx2 = 0;
    while (ss >> word) {
        inp[idx1] = word;
        idx1 += 1;
    }

    for(int i=0; i<idx1; i++) {
        for(int j=0; j<inp[i].length(); j++) {
            mess[i][j] = inp[i][j];
        }
    }

    for(int i=0; i<idx1; i++) {
        for(int j=0; j<inp[i].length(); j++) {
            cout << mess[i][j] << " ";
        }
        cout << endl;
    }

    // getting max
    char encrypted_message[100][100];
    int max = 0;
    for(int i=0; i<idx1; i++) {
        if(inp[i].length() > max) {
            max = inp[i].length();
        }
    }
    cout << "Max: " << max << endl;

    // transpose
    for(int i=0; i<idx1; i++) {
        for(int j=0; j<max; j++) {
            encrypted_message[j][i] = mess[i][j];
        }
    }

    string enc_message;
    for(int i=0; i<max; i++) {
        for(int j=0; j<idx1; j++) {
            enc_message += encrypted_message[i][j];
            cout << encrypted_message[i][j] << " ";
        }
        enc_message += " ";
        cout << endl;
    }

    cout << "Encrypted Message: " << enc_message << endl;

}

void row_col_transpos_decrypt(string message) {
    // hw eo lr ll od
    stringstream ss(message);
    string word;
    string inp[100];
    char mess[100][100];
    int idx1 = 0, idx2 = 0;


    while (ss >> word) {
        inp[idx1] = word;
        idx1 += 1;
    }

    for(int i=0; i<idx1; i++) {
        for(int j=0; j<inp[i].length(); j++) {
            mess[i][j] = inp[i][j];
        }
    }

    for(int i=0; i<idx1; i++) {
        for(int j=0; j<inp[i].length(); j++) {
            cout << mess[i][j] << " ";
        }
        cout << endl;
    }

    // getting max
    char encrypted_message[100][100];
    int max = 0;
    for(int i=0; i<idx1; i++) {
        if(inp[i].length() > max) {
            max = inp[i].length();
        }
    }
    cout << "Max: " << max << endl;

    // transpose
    for(int i=0; i<idx1; i++) {
        for(int j=0; j<max; j++) {
            encrypted_message[j][i] = mess[i][j];
        }
    }

    string dec_message;
    for(int i=0; i<max; i++) {
        for(int j=0; j<idx1; j++) {
            dec_message += encrypted_message[i][j];
            cout << encrypted_message[i][j] << " ";
        }
        dec_message += " ";
        cout << endl;
    }

    cout << "Decrypted Message: " << dec_message << endl;

}

int main(){

    cout << "1. Encrypt \n";
    cout << "2. Decrypt \n";
    cout << "Enter your choice: ";
    int ch;
    cin >> ch;

    if(ch == 1) {
        string message;
        cout << "Enter the message to be encrypted: ";
        fflush(stdin);
        getline(cin, message);
        row_col_transpos_encrypt(message);
    }

    else {
        string message;
        cout << "Enter the message to be decrypted: ";
        fflush(stdin);
        getline(cin, message);
        row_col_transpos_decrypt(message);
    }

    return 0;
}







