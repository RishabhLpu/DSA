#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> st;
    string input = "example input data"; // Replace with your actual input data
    int n = input.size(); // Get the size of your input data

    for (int i = 0; i < n; ++i) {
        string word = "";
        while (i < n && input[i] != ' ') {
            word += input[i];
            ++i;
        }
        st.push(word);
    }

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
