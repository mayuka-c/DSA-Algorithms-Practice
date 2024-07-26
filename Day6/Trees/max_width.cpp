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

int max_width(Node* root) {
    if(root == NULL) return 0;

    queue<Node*> q;
    q.push(root);

    int max_width = 0;
    while(!q.empty()) {
        int count = q.size();
        max_width = max(max_width, count);

        for(int i=0; i<count; i++){
            Node* node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
        }
    }

    return max_width;
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(8);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right = new Node(12);
    root->right->left = new Node(7);
    root->right->right = new Node(11);

    cout << max_width(root) << endl;
}