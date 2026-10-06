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