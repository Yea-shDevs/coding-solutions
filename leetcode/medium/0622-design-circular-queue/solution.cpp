class MyCircularQueue {
private:
    vector<int> item;
    int front;
    int rear;
    int size;

public:
    MyCircularQueue(int k) {
        size = k + 1;
        item.resize(size);

        front = 0;
        rear = 0;
    }

    bool enQueue(int value) {
        if (isFull())
            return false;

        item[rear] = value;
        rear = (rear + 1) % size;

        return true;
    }

    bool deQueue() {
        if (isEmpty())
            return false;

        front = (front + 1) % size;

        return true;
    }

    int Front() {
        if (isEmpty())
            return -1;

        return item[front];
    }

    int Rear() {
        if (isEmpty())
            return -1;

        return item[(rear - 1 + size) % size];
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }
};