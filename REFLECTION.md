Name: Vendra Fausta Andrean
My main contribution: add node structures, fix the main code and compile to .exe
What I learned about next and prev: I learned that next points to the next node, while prev points to the previous node in a doubly linked list.

The hardest part: fix conflict merge, and debugging code.
What AI helped me with: git command for fix conflict.
What I changed or fixed myself: I created the Node structure, added prev and next pointers, and initialized head and tail in the DoublyLinkedList class.

GitHub Issue / PR / Commit I contributed: PR #1 and PR #2 on the Vendra branch.

---

Name: Muhammad Fadhil Asyam Damanik
My main contribution: Add Function Check Integrity
What I learned about next and prev: I learned that next points to the next node, while prev points to the previous node. Both pointers must be connected correctly so the Doubly Linked List can be traversed forward and backward.     
The hardest part:The hardest part was understanding how to check whether the next and prev pointers are connected correctly.
What AI helped me with:AI helped me understand the logic of next and prev pointers and how to create the Check Integrity function.
What I changed or fixed myself:I tested the function and fixed the pointer checking logic so it could detect incorrect connections between next and prev.
GitHub Issue / PR / Commit I contributed:I tested the function and fixed the pointer checking logic so it could detect incorrect connections between next and prev.

---

Name: Mahesa putra mulyawan
My main contribution: Add insert operations (insertLast and insertAfter) for the Doubly Linked List
What I learned about next and prev: I learned that when inserting a node, both pointers of the new node and of its neighbors must be updated. For insertAfter, the new node's next and prev must be set first, then the next node's prev, and finally the current node's next. If the new node becomes the last node, tail must also be updated. 
The hardest part: Handling the special cases, such as inserting into an empty list (head and tail must both point to the new node) and inserting after the tail, and keeping the order of pointer updates correct so no link is lost. 
What AI helped me with: AI helped me understand the order of pointer updates when inserting a node and the edge cases I needed to handle. 
What I changed or fixed myself: I wrote the insertLast and insertAfter logic, handled the empty list and tail cases, and tested that the list can be displayed correctly forward and backward after insertion. 
GitHub Issue / PR / Commit I contributed: PR #3 on the MahesaAja branch (commit "Update Add insertLast operation").
---

Name:
My main contribution:
What I learned about next and prev:
The hardest part:
What AI helped me with:
What I changed or fixed myself:
GitHub Issue / PR / Commit I contributed:

---

Name: Muhammad Fariz Muhtadi
My main contribution:
Implementing the core Doubly Linked List functions (insert, delete, and traversal) in C++ and setting up the main experiment structure for the team repository.
What I learned about next and prev:
I learned that 'next' points to the succeeding node for forward traversal, while 'prev' points to the preceding node for backward traversal. When inserting or deleting a node, both pointers of the adjacent nodes must be updated properly to avoid breaking the list connection.
The hardest part:
Ensuring pointer integrity during deletion and middle insertion, especially handling edge cases where 'prev' or 'next' might be nullptr or accessing memory that hasn't been re-linked properly.
What AI helped me with:
AI helped explain the step-by-step logic for pointer updates during node deletion and assisted in debugging compilation/linker errors in VS Code.
What I changed or fixed myself:
Fixed the pointer update logic for backward traversal in Task 9, verified the output for forward and backward traversal, and tested edge cases for middle insertion and deletion.
GitHub Issue / PR / Commit I contributed:
- Issue: #1 Add core Doubly Linked List implementation and bug fixes
- PR: #2 Merge Doubly Linked List implementation into main
- Commit: "Add forward and backward traversal", "Fix delete-node pointer update"