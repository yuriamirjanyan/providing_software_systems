﻿//tnayin 2
#include <iostream>
#define SIZE 100
using namespace std;
int main() {

    char alf1[36] = "abcdefghijklmnopqrstuvwxyz123456789";
    char alf2[36] = "qwertyuiopasdfghjklzxcvbnm456897213";

    char msg[SIZE];
    cout << "Enter the message : ";
    cin.getline(msg, SIZE);

    for (int i = 0; msg[i] != '\0'; i++) {
        for (int j = 0; j < 36; j++) {
            if (msg[i] == alf1[j]) {
                msg[i] = alf2[j];
                break;
            }
        }
    }

    cout << "Result : " << msg << endl;

    return 0;
}