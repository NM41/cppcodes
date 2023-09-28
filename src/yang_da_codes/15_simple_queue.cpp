// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
using namespace std;

class Queue
{
private:
    int *array;
    int front;
    int rear;
    int size;

public:
    Queue(int size)
    {
        this->size = size;
        array = new int[size];
        front = -1;
        rear = -1;
    }

    ~Queue()
    {
        delete[] array;
    }

    bool isEmpty()
    {
        return front == rear;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    void enqueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        array[++rear] = element;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        int element = array[++front];
        if (front == rear)
        {
            front = rear = -1;
        }
        return element;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return array[front + 1];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = front + 1; i <= rear; i++)
        {
            cout << array[i] << " ";
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

    Queue queue(size);

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