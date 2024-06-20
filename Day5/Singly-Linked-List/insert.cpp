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

Node* insert_begin(Node* head, int x) {
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}

Node* insert_end(Node* head, int x) {
    Node* temp = new Node(x);
    if(head == NULL) {
        return temp;
    }
    Node* curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node* insert_pos(Node* head, int pos, int x) {
    Node* temp = new Node(x);
    Node* curr = head;

    if(pos == 0) {
        temp->next = head;
        return temp;
    }

    while(pos > 1 && curr != NULL) {
        curr = curr->next;
        pos--;
    }

    if(curr == NULL) {
        return head;
    }

    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main() {
    Node* head = NULL;

    head = insert_begin(head, 10);
    head = insert_begin(head, 15);
    traversal(head);
    cout << endl;

    head = insert_end(head, 20);
    head = insert_end(head, 30);
    traversal(head);
    cout << endl;

    head = insert_pos(head, 5, 25);
    traversal(head);
    cout << endl;

    return 0;
}