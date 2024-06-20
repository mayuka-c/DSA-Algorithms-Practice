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

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head, *prev = NULL;
    while (curr != NULL)
    {
        curr->prev = curr->next;
        curr->next = prev;
        prev = curr;
        curr = curr->prev;
    }

    return prev;
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

    head = reverse(head);
    traversal(head);
    cout << endl;

    return 0;
}