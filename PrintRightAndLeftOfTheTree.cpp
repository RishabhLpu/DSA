#include <iostream>
#include <queue>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Function to print the right view of the binary tree
void printRightTree(Node* root) {
    if (root == nullptr)
        return;
        
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int n = q.size();
        
        for (int i = 0; i < n; i++) {
            Node* curr = q.front();
            q.pop();
            
            // Print the rightmost element at the level
            if (i == n - 1) {
                cout << curr->data << " ";
            }
            
            if (curr->left != nullptr) {
                q.push(curr->left);
            }
            
            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }
    }
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Right view of the binary tree is: ";
    printRightTree(root);

    return 0;
}
