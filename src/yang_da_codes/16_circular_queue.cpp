// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int *array;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int size)
    {
        this->size = size;
        array = new int[size];
        front = 0;
        rear = 0;
    }

    ~CircularQueue()
    {
        delete[] array;
    }

    bool isEmpty()
    {
        return front == rear;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void enqueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        array[rear] = element;
        rear = (rear + 1) % size;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        int element = array[front];
        front = (front + 1) % size;
        return element;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return array[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        int i = front;
        while (i != rear)
        {
            cout << array[i] << " ";
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    CircularQueue queue(++size);

    int choice;
    while (true)
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to enqueue: ";
            cin >> element;
            queue.enqueue(element);
            break;
        case 2:
            cout << "The dequeued element is: " << queue.dequeue() << endl;
            break;
        case 3:
            cout << "The front element is: " << queue.peek() << endl;
            break;
        case 4:
            queue.display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }

    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}
