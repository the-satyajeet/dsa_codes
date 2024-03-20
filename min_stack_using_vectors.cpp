#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class MinStack
{
private:
    vector<int> data;
    vector<int> mins;

public:
    void push(int x)
    {
        data.push_back(x);
        if (mins.empty() || x <= mins.back())
        {
            mins.push_back(x);
        }
    }
    void pop()
    {
        if (data.empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        if (data.back() == mins.back())
        {
            mins.pop_back();
        }
        data.pop_back();
    }
    int top()
    {
        if (data.empty())
        {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        return data.back();
    }
    int getMin()
    {
        if (mins.empty())
        {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        return mins.back();
    }
};

int main()
{
    MinStack stack;
    stack.push(3);
    stack.push(5);
    stack.push(2);
    stack.push(1);

    cout << "Minimum element: " << stack.getMin() << endl;
    stack.pop();
    cout << "Minimum element after popping: " << stack.getMin() << endl;

    return 0;
}
