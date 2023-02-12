// REVERSE THE LINKED LIST BY BOTH CONCEPT LOOP AND RECURSION

#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> reverse(stack<int> a)
{
    stack<int> temp;
    int b = a.size();
    for (int i = 0; i < b; i++)
    {
        int value = a.top();
        a.pop();
        temp.push(value);
    }
    return temp;
    cout << endl;
}

void insert_at_end(stack<int> &a, int num)
{
    if (a.empty())
    {
        a.push(num);
        return;
    }

    int value = a.top();
    a.pop();
    insert_at_end(a, num);
    a.push(value);
}

void reverse_recursion(stack<int> &a)
{
    if (a.empty())
    {
        return;
    }

    int num = a.top();
    a.pop();
    reverse_recursion(a);
    insert_at_end(a, num);
}

string reverse_string(string str)
{
    stack<char> store;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        store.push(ch);
    }
    int i = 0;
    while (!store.empty())
    {
        char ch = store.top();
        ans.push_back(ch);
        store.pop();
        i++;
    }
    return ans;
}

int main()
{

    stack<int> arjun;
    arjun.push(5);
    arjun.push(4);
    arjun.push(3);
    arjun.push(2);
    cout << endl;
    cout << "               STACK ::  2  3  4  5         " << endl;
    cout << "Initial top is :: ";
    cout << arjun.top() << endl;
    // arjun.pop();
    // cout << arjun.top() << endl;
    // arjun.pop();
    // cout << arjun.top() << endl;
    // arjun.pop();
    // cout << arjun.top() << endl;
    cout << endl
         << "After reverse the stack we have top shift like this " << endl;
    stack<int> ans = reverse(arjun);
    cout << "Top is :: " << ans.top() << endl;
    // ans.pop();
    // cout << "After first pop on the stack TOP is ::  " << ans.top() << endl;
    // ans.pop();
    // cout << "After second pop on the stack TOP is :: " << ans.top() << endl;
    // ans.pop();
    // cout << "After third pop on the stack TOP is :: " << ans.top() << endl;
    cout << endl;

    cout << "After again reverse the stack using the recursion concept " << endl;
    reverse_recursion(ans);
    cout << "Top is :: " << ans.top() << endl;
    ans.pop();
    cout << "After first pop on the stack TOP is ::  " << ans.top() << endl;
    ans.pop();
    cout << "After second pop on the stack TOP is :: " << ans.top() << endl;
    ans.pop();
    cout << "After third pop on the stack TOP is :: " << ans.top() << endl;
    cout << endl;

    string a = "arjun tanotra";

    cout << "Name before the reverse the string using stack  :: " << a << endl;
    string anss = reverse_string(a);
    cout << "Name after the reverse the string using stack :: " << anss << endl;
    return 0;
}