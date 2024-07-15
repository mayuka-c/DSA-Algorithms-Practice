#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void traversal(Node *head) {
    if (head == NULL) {
        return;
    }
    // only 1 node
    cout << head->data << " ";
    // multi node
    for(Node *p = head->next; p != head; p=p->next) {
        cout << p->data << " ";
    }
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    traversal(head);
    cout << endl;
    return 0;
}