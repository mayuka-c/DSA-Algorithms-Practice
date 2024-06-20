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

Node* delete_begin(Node* head) {
    if(head == NULL) {
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* delete_end(Node* head) {
    // no nodes
    if(head == NULL) {
        return head;
    }

    // only 1 node
    if(head->next == NULL) {
        delete head;
        return NULL;
    }

    // more than 1 node
    Node* curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }

    delete curr->next;
    curr->next = NULL;

    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    traversal(head);
    cout << endl;

    head = delete_begin(head);
    traversal(head);
    cout << endl;

    head = delete_end(head);
    traversal(head);
    cout << endl;

    head = delete_end(head);
    traversal(head);
    cout << endl;

    return 0;
}