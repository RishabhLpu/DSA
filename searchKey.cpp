#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
Node* searchKey(Node* root, int key)
{
    if(root==NULL)
{
    return NULL;
    }
    if(root->data==key)
    {
        return root;
        }
        if(root->data>key)
        {
            return searchKey(root->left,key);
            }
            else
            {
                return searchKey(root->right,key);
                }
                }
Node* minValue(Node* root)
{
    Node* temp=root;
    while(temp->left!=NULL)
    { temp= temp->left;
        return temp;
    }
}

int main() {
    Node* root=new Node(10);

    root->left=new Node(5);
    root->right=new Node(15);
    root->left->left=new Node(2);
    root->left->right=new Node(6);
    root->right->left=new Node(12);
    root->right->right=new Node(18);
    Node* temp=searchKey(root,6);
    cout<<temp->data;
    cout<<minValue(root);

            return 0;
}
