#include <iostream>
using namespace std;
class Queueue
{
public:
    int *arr;
    int front, rear, size;
    Queueue(int size)
    {
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int val)

    {
        if (rear = size - 1)
        {
            cout << "Queue is full" << endl;
            return ;
        }
        rear++;
        arr[rear] = val;
        if (front == -1)
            front++;
    }

void pop()
{
    if(front==-1||front>rear)
    {
        cout<<"Queue is empty"<<endl;
    return;
    }
    front++;
}

};
int main()
{
    Queueue queue(5);
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.pop();
    queue.display();
        return 0;
}
