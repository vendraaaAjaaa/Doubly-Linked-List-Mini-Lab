#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* prev;
    Node* next;

    Node(string value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

void displayForward() {
    Node* current = head;

    cout << "\nForward: ";

    while (current != nullptr) {
        cout << current->data;

        if (current->next != nullptr)
            cout << " <-> ";

        current = current->next;
    }

    cout << endl;
}

void displayBackward() {
    Node* current = tail;

    cout << "\nBackward: ";

    while (current != nullptr) {
        cout << current->data;

        if (current->prev != nullptr)
            cout << " <-> ";

        current = current->prev;
    }

    cout << endl;
}

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
};

void insertLast(string data) {
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAfter(string target, string newData) {
    Node* current = head;

    while (current != nullptr &&
           current->data != target) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Node tidak ditemukan.\n";
        return;
    }

    Node* newNode = new Node(newData);

    newNode->next = current->next;
    newNode->prev = current;

    if (current->next != nullptr) {
        current->next->prev = newNode;
    } else {
        tail = newNode;
    }

    current->next = newNode;
}

void checkIntegrity() {
    cout << "\nChecking pointer connections...\n";

    if (head == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    Node* current = head;

    while (current->next != nullptr) {

        if (current->next->prev != current) {
            cout << "Pointer error!\n";
            return;
        }

        current = current->next;
    }

    cout << "Semua pointer benar.\n";
}