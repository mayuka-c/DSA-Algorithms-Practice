#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node *root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }

    return;
}


int main() {
    Node* root = new Node(3);
    root->left = new Node(1);
    root->left->left = new Node(8);
    root->left->right = new Node(9);
    root->right = new Node(7);

    inorder(root);
    cout << endl;

    preorder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    levelorder(root);
    cout << endl;

    return 0;
}