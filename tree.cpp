#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrderTraversal(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
}
void preOrder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}
void postOrder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;
    cout << "PreOrder traversal: ";
    preOrder(root);
    cout << endl;
    cout << "Postorder travesal: ";
    postOrder(root);
    delete root;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    return 0;
}
