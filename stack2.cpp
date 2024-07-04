//using stl
#include <iostream>
using namespace std;
#include<stack>

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
        st.push(7);

   // st.pop();
    while(!st.empty())
    {
        cout<<st.top()<<endl;
       // st.pop();
    }
    return 0;
}
