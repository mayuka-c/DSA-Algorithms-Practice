#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int maximum(Node *root)
{
    if(root == NULL) return -1;

    return max(root->data, max(maximum(root->left), maximum(root->right)));
}

int main()
{
    Node* root = new Node(3);
    root->left = new Node(12);
    root->left->left = new Node(8);
    root->left->right = new Node(9);
    root->left->right->right = new Node(10);
    root->right = new Node(7);

    cout << maximum(root) << endl;

    return 0;
}