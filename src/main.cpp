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