#include <iostream>
#include <string>
using namespace std;

#define MAX 100

char stack[MAX];
string a;
int top = -1;

void push(char value) {
    if (top == MAX - 1) {
        cout << "Stack Penuh!"<< endl;
    }
    else {
        top++;
        stack[top] = value;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack masih kosong"<<endl;
    }
    else {
        return stack[top--];
    }
}

int main() {

    string kata;

    cout << "Masukkan KATA: ";
    cin >> kata;

    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    while (top != -1) {
        cout << pop();
       a = a + pop();
    }
    
    if (kata == a) {
        cout << "KATA INI ADALAH PALINDROM";
    }

    else {
        cout << "BUKAN PALINDROM";
    }
    return 0;
}