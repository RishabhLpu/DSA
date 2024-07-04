//manually operation on the stack with using stl
// one way to access data in stack
//stack with array
#include <iostream>
using namespace std;
class Stackk{
    public:
    int *arr;
    int top;
    int size;
    Stackk(){
        arr=new int[size];
        top=-1

}
void push(int val){
    top++;
    arr[top]=val;
};
void pop(){
    if(top==-1)
    {
        cout<<"Stack overflow"<<endl;
        return ;
    }
    top--
};
void peek (){
    if(top>=0)
    {
        cout<<arr[top]<<endl;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            }
            }

};

int main() {
    Stackk st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.peek();
    st.pop();
    st.peek();
    return 0;
    }

