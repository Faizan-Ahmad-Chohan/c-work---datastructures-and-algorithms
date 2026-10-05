#include <iostream>
using namespace std;

const int SIZE = 5;
int queueArr[SIZE];
int front = -1;
int rear  = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return rear == SIZE - 1;
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Overflow! Queue is full. Cannot insert " << value << "\n";
        return;
    }
    if (isEmpty()) {
        front = 0;          // first element
    }
    rear++;
    queueArr[rear] = value;
    cout << value << " joined the queue\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Underflow! Queue is empty. Nothing to remove\n";
        return;
    }
    cout << queueArr[front] << " left the queue\n";
    front++;
    if (front > rear) {     // last element was removed
        front = -1;
        rear  = -1;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Person at front: " << queueArr[front] << "\n";
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue (front --> rear): ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << "\n";
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();          // 10 20 30

    dequeue();          // 10 leaves
    dequeue();          // 20 leaves
    display();          // 30

    enqueue(40);
    enqueue(50);
    display();          // 30 40 50

    enqueue(60);        // overflow — rear already at index 4
                        // even though index 0 and 1 are empty

    peek();
    dequeue();
    dequeue();
    dequeue();
    dequeue();          // underflow

    return 0;
}