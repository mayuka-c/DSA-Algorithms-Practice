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

void traversal(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void traversalRecursive(Node* head) {
    if (head == NULL) {
        return;
    }
    cout << head->data << " ";
    traversalRecursive(head->next);
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    traversal(head);
    cout << endl;
    traversalRecursive(head);

    return 0;
}
