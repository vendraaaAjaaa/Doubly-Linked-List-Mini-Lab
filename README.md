# Doubly Linked List Mini Lab

A **C++** mini lab for learning the *doubly linked list* data structure, where every node holds a pointer to the previous node (`prev`) and the next node (`next`). Built as a group project using a Git workflow: one branch per member, Pull Requests, and merge conflict resolution.

## Features

| Operation | Function | Description |
|---|---|---|
| Insert at end | `insertLast(data)` | Appends a new node at the tail of the list |
| Insert after a node | `insertAfter(target, newData)` | Inserts a new node after the node whose value is `target` |
| Delete a node | `deleteNode(target)` | Removes the node whose value is `target` and relinks its neighbors |
| Display forward | `displayForward()` | Prints the list from `head` to `tail` |
| Display backward | `displayBackward()` | Prints the list from `tail` to `head` |
| Integrity check | `checkIntegrity()` | Verifies that `next->prev` always points back to the correct node |

The destructor `~DoublyLinkedList()` frees every node to prevent memory leaks.

## Project Structure

```
Doubly-Linked-List-Mini-Lab/
├── README.md
├── screenshots/output.png
├── src/
│   └── main.cpp        # Node struct and     DoublyLinkedList class
├── main.exe            # Compiled binary (Windows)
├── AI-NOTES.md         # Notes on AI usage
└── REFLECTION.md       # Each member's reflection

```

## Data Structure

```cpp
struct Node {
    string data;
    Node* prev;
    Node* next;
};
```

The `DoublyLinkedList` class stores two pointers: `head` (the first node) and `tail` (the last node). Because `tail` is kept directly, appending and backward traversal don't require walking the entire list.

## Getting Started

**Prerequisites:** a C++ compiler (for example `g++` from GCC or MinGW).

```bash
git clone https://github.com/vendraaaAjaaa/Doubly-Linked-List-Mini-Lab.git
cd Doubly-Linked-List-Mini-Lab

g++ src/main.cpp -o main
./main            # Linux/macOS
main.exe          # Windows
```

## Example Output

```
Forward: A <-> B <-> C
Backward: C <-> B <-> A

Checking pointer connections...
All pointers are correct.
```

## Team

- Vendra
- Mahesa
- Fariz
- Fathin
- Fadhil

## Notes

Each member's reflection (contribution, hardest part, and AI assistance) is in [REFLECTION.md](REFLECTION.md).