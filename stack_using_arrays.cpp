#include <iostream>
using namespace std;

#define MAX_SIZE 1000

class Stack
{
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() { top = -1; }
    bool push(int x)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Stack Overflow";
            return false;
        }
        else
        {
            arr[++top] = x;
            return true;
        }
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow";
            return -1;
        }
        else
        {
            return arr[top--];
        }
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        return (top < 0);
    }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element after popping: " << stack.peek() << endl;

    return 0;
}
