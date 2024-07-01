#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
// insertion on the tail.
void insertionAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        // cout<<"NULL"<<endl;
    }
}

bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        return false;
    }
}
void deleteNode(Node *&head, int key)
{
    Node *temp = head;
    while (head == NULL)
        return;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

int main() {
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);

    deleteNode(head, 1);
    display(head);

    return 0;
}

