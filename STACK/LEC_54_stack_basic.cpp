#include <iostream>
using namespace std;

class stack
{

private:
    int size;
    int *arr;
    int top;

public:
    stack(int a)
    {
        size = a;
        top = -1;
        arr = new int[a];
    }

    void push(int a)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = a;
        }
        else
        {
            cout << "Stack overflow so we cant enter another element into the stack " << endl;
        }
    }

    void pop()
    {
        if (top >= 0 && top < size)
        {
            top--;
        }
        else
        {
            cout << "Stack is empty we are not able to pop back the element" << endl;
        }
    }

    int top_of_stack()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Sorry there is nothing at top of stack " << endl;
            return 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty " << endl;
        }
        else
        {
            cout << "Stack is not empty" << endl;
        }
    }
};

int main()
{
    stack st(4);
    // st.push(5);
    // st.push(4);
    // st.push(3);
    // st.push(2);
    // st.pop();
    cout << "Top element in the stack " << st.top_of_stack() << endl;

    return 0;
}