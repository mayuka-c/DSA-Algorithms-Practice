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

int search(Node* head, int x) {
    int pos=1;
    while(head != NULL) {
        if(head->data == x) {
            return pos;
        }
        head = head->next;
        pos++;
    }
    return -1;
}

int searchRecursive(Node* head, int x) {
    if(head == NULL) {
        return -1;
    }

    if(head->data == x) {
        return 1;
    } else {
        int pos = searchRecursive(head->next, x);
        if(pos == -1) {
            return -1;
        }
        return (pos+1);
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    traversal(head);
    cout << endl;

    int pos = search(head, 40);
    cout << pos << endl;

    pos = searchRecursive(head, 20);
    cout << pos << endl;

    return 0;
}