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

// Sum of left child value + right child value = parent value
bool isSum(Node *root) {
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;

    int sum = 0;
    if(root->left != NULL) sum += root->left->data;
    if(root->right != NULL) sum += root->right->data;

    return (root->data == sum && isSum(root->left) && isSum(root->right));
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right = new Node(12);

    cout << isSum(root) << endl;
}