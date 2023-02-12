// REVERSE THE LINKED LIST BY BOTH CONCEPT LOOP AND RECURSION

#include <iostream>
#include <stack>
#include <string>
using namespace std;

void delete_middle(stack<int> &one, int count, int size)
{
    if (count == size / 2)
    {
        one.pop();
        return;
    }

    int num = one.top();
    one.pop();
    delete_middle(one, count + 1, size);
    one.push(num);
}

void insert_at_bottom(stack<int> &one, int num)
{
    if (one.empty())
    {
        one.push(num);
        return;
    }

    int value = one.top();
    one.pop();
    insert_at_bottom(one, num);
    one.push(value);
}
int main()
{

    stack<int> arjun;
    arjun.push(5);
    arjun.push(4);
    arjun.push(3);
    arjun.push(2);
    arjun.push(1);
    insert_at_bottom(arjun, 99);
    cout << endl;

    cout << "Initial top :: " << arjun.top() << endl;
    // arjun.pop();
    // cout << "Top is :: " << arjun.top() << endl;
    // arjun.pop();
    // cout << "Top is :: " << arjun.top() << endl;
    // arjun.pop();
    // cout << "Top is :: " << arjun.top() << endl;
    // arjun.pop();
    // cout << "Top is :: " << arjun.top() << endl;
    int count = 0;
    int size = arjun.size();
    delete_middle(arjun, count, size);

    while (!arjun.empty())
    {
        cout << "New Top after pop is :: " << arjun.top() << endl;
        arjun.pop();
    }

    return 0;
}