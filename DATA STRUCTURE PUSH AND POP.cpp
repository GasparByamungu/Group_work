#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow. Cannot push element." << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow. Cannot pop element." << endl;
            return;
        }
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from the stack." << endl;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
