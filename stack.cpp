#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Anurag");
    s.push("Hello");
    s.push("Bye");
    // cout << "First element:" << s.top() << endl;
    s.pop();
    cout << "After pop first element:" << s.top() << endl;
    stack<int> s1[10];

    return 0;
}