/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node *p, *q;
    if (!head) return false;
    p = q = head;
    int step = 0; 
    do {
      if (!p->next) break;
      else p = p->next;
      if (!q->next || !q->next->next) break;
      else q = q->next->next;
      if (p == q) return true;
    }while (1);
    return false;
}
