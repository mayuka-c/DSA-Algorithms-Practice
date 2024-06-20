#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void traversal(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *insert_begin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }

    temp->next = head;
    head->prev = temp;
    return temp;
}

Node* insert_end(Node *head, int x) {
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }

    Node* curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;

    return head;
}

int main()
{
    Node *head = new Node(10);

    head->next = new Node(20);
    head->next->prev = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    traversal(head);
    cout << endl;

    head = insert_begin(head, 50);
    traversal(head);
    cout << endl;

    head = insert_end(head, -5);
    traversal(head);
    cout << endl;

    return 0;
}