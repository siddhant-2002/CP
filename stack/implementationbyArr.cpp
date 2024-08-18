#include <bits/stdc++.h>
using namespace std;

class MyStack {
    int size;
    int *arr;
    int topIndex;

public:
    MyStack() {
        topIndex = -1;
        size = 1000;
        arr = new int[size];
    }

    void push(int a) {
        if (topIndex == size - 1) {
            cout << "NO space" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = a;
    }

    int pop() {
        if (topIndex == -1) {
            cout << "no element" << endl;
            return -1; // Return a sentinel value indicating an error
        }
        int a = arr[topIndex];
        topIndex--;
        return a;
    }

    int top() {
        if (topIndex == -1) {
            cout << "no element" << endl;
            return -1; // Return a sentinel value indicating an error
        }
        return arr[topIndex];
    }

    int getSize() {
        return topIndex + 1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    MyStack s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Print top element
    cout << "Top element: " << s.top() << endl;

    // Pop elements from the stack
    cout << "Popped element: " << s.pop() << endl;
    cout << "Popped element: " << s.pop() << endl;

    // Print top element
    cout << "Top element: " << s.top() << endl;

    // Print size of the stack
    cout << "Size of stack: " << s.getSize() << endl;

    // Check if stack is empty
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}