#include <iostream>
using namespace std;

#define MAX_SIZE 100 
class Stack {
private:
    int top;
    int arr[MAX_SIZE]; 
public:
    Stack() {
        top = -1;
    }
    void push(int x) {
        if (top >= MAX_SIZE - 1) { 
            cout << "Ngan xep day! Khong the them " << x << endl;
            return;
        }
        arr[++top] = x; 
        cout << x << " da them vao ngan xep." << endl;
    }
    int pop() {
        if (top < 0) {
            cout << "Ngan xep rong!" << endl;
            return -1;
        }
        int x = arr[top--];
        return x;
    }
    int peek() {
        if (top < 0) { 
            cout << "Ngan xep rong!" << endl;
            return -1;
        }
        int x = arr[top];
    }
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " da lay ra tu ngan xep." << endl;
    cout << s.pop() << " da lay ra tu ngan xep." << endl;
    cout << s.peek() << " la phan tu hien tai o dau ngan xep." << endl;
    cout << s.pop() << " da lay ra tu ngan xep." << endl;
    cout << "Ngan xep rong? " << (s.isEmpty() ? "Dung" : "Sai") << endl;
    return 0;
}
