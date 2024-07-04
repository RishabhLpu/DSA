#include <iostream>
using namespace std;
#include<stack>
// #include<string>
int main(){
stack<string> st;

    st.push("rishabh ");
    st.push("is ");
    st.push("a ");
    st.push("good ");
    st.push("boy ");
    st.push("yes ");
    st.push("ok ");

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}
