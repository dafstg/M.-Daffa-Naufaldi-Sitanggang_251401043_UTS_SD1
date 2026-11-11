#include <iostream>
using namespace std;



struct Node {
    int value;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertFirst(int n, string a) {
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

void insertLast(int n, string a) {
    Node *newNode = new Node;
    newNode->value = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}



void deleteFirst() {
    if (head == NULL) {
        cout << "List kosong!" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;

    if (head == NULL) {
        tail = NULL;
    }

    delete temp;
}


void printList(int a, string b) {
    Node *temp = head;

    cout << "Isi Linked List: ";

    while (temp != NULL && a >=75) {
        cout << temp->value << "Nama : " << b;
        temp = temp->next;
    }
}

int main() {
    int pilihan;
    int skor;
    string nama;

    do {
        cout << "===== MENU LINKED LIST =====" << endl;
        cout << "1. Tambah di awal" << endl;
        cout << "2. Tambah di akhir" << endl;
        cout << "3. Hapus data di awal" << endl;
        cout << "4. Tampilkan yang lolos" << endl;
        cin >> pilihan;

        switch (pilihan) {

        case 1:
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan skor: ";
            cin >> skor;

            insertFirst(skor, nama);
            break;

        case 2:
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan skor: ";
            cin >> skor;

            insertLast(skor, nama);
            break;

        case 3:
            deleteFirst();
            break;

        case 4:
            cout << "Daftar peserta yang lolos (Skor >=75)";
            printList(skor,nama);
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}