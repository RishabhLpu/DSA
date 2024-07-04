//queue wth stl
#include <iostream>
using namespace std;
#include<queue>
int main() {
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    qu.push(6);
    qu.push(7);
   qu.pop();
   qu.pop();
    while(!qu.empty())
    {
        cout<<qu.front()<<endl;
       qu.pop();
    }
    return 0;
}
