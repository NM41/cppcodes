// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
// #include<deque>
using namespace std;

class Deque
{
private:
    int *array;
    int front;
    int rear;
    int size;

public:
    Deque(int size)
    {
        this->size = size;
        array = new int[size];
        front = -1;
        rear = -1;
    }

    ~Deque()
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

    void enqueue_front(int ele)
    {
        if (isFull())
        {
            cout << "Deque is full." << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            front--;
        }

        array[front] = ele;
    }

    void enqueue_rear(int ele)
    {
        if (isFull())
        {
            cout << "Deque is full." << endl;
            return;
        }

        rear++;
        array[rear] = ele;
    }

    int dequeue_front()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return -1;
        }

        int ele = array[front];
        front++;

        if (front == rear + 1)
        {
            front = -1;
            rear = -1;
        }

        return ele;
    }

    int dequeue_rear()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return -1;
        }

        int ele = array[rear];
        rear--;

        if (front == rear + 1)
        {
            front = -1;
            rear = -1;
        }

        return ele;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
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
    cout << "Enter the size of the deque: ";
    cin >> size;

    Deque deque(size);

    int choice;
    while (true)
    {
        cout << "1. Enqueue at front" << endl;
        cout << "2. Enqueue at rear" << endl;
        cout << "3. Dequeue from front" << endl;
        cout << "4. Dequeue from rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int ele;
            cout << "Enter the element to enqueue at front: ";
            cin >> ele;
            deque.enqueue_front(ele);
            break;
        case 2:
            cout << "Enter the element to enqueue at rear: ";
            cin >> ele;
            deque.enqueue_rear(ele);
            break;
        case 3:
            cout << "The dequeued element from front is: " << deque.dequeue_front() << endl;
            break;
        case 4:
            cout << "The dequeued element from rear is: " << deque.dequeue_rear() << endl;
            break;
        case 5:
            deque.display();
            break;
        case 6:
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
