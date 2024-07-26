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

// difference in height of left child and right child should not be more than 1
int isBalanced(Node* root) {
    if(root == NULL) return 0;

    int heightL = isBalanced(root->left);
    if(heightL == -1) return -1;

    int heightR = isBalanced(root->right);
    if(heightR == -1) return -1;

    if(abs(heightL - heightR) > 1) return -1;

    return (1 + max(heightL, heightR));
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->left->right->right = new Node(10);
    root->right = new Node(12);

    cout << isBalanced(root) << endl;
}