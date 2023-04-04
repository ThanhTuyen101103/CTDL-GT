#include <iostream>
using namespace std;

#define MAX_SIZE 100 

class Queue {
private:
    int front; 
    int rear; 
    int arr[MAX_SIZE];
public:
    Queue() {
        front = -1; 
        rear = -1;
    }
    void enqueue(int x) {
        if (rear >= MAX_SIZE - 1) { 
            cout << "Hang doi day! Khong the them " << x << endl;
            return;
        }
                if (front == -1) { 
            front = 0;
        }
        arr[++rear] = x;
        cout << x << " da them vao hang doi." << endl;
    }
    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Hang doi rong!" << endl;
            return -1;
        }
        int x = arr[front++]; 
        return x;
    }
    int peek() {
        if (front == -1 || front > rear) {
            cout << "Hang doi rong!" << endl;
            return -1;
        }
        int x = arr[front]; 
        return x;
    }
        bool isEmpty() {
        return (front == -1 || front > rear); 
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.dequeue() << " da lay ra tu hang doi." << endl;
    cout << q.dequeue() << " da lay ra tu hang doi." << endl;
    cout << q.peek() << " la phan tu hien tai o dau hang doi." << endl;
    cout << q.dequeue() << " da lay ra tu hang doi." << endl;
    cout << "Hang doi rong? " << (q.isEmpty() ? "Dung" : "Sai") << endl;
    return 0;
}
