#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> data;
public:
    void push(int x) {
        data.push_back(x);
    }
    int pop() {
        if (data.empty()) {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        int topElement = data.back();
        data.pop_back();
        return topElement;
    }
    int peek() {
        if (data.empty()) {
            cout << "Stack is empty" << endl;
            return -1; // or throw an exception
        }
        return data.back();
    }
    bool isEmpty() {
        return data.empty();
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element after popping: " << stack.peek() << endl;

    return 0;
}
