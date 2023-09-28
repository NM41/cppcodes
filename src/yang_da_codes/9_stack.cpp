// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Stack
{
private:
    int *array;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        array = new int[size];
        top = -1;
    }

    ~Stack()
    {
        delete[] array;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack is full." << endl;
            return;
        }
        top++;
        array[top] = element;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        int element = array[top];
        top--;
        return element;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return array[top];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
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
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    int choice;
    while (true)
    {
        cout << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Peek" << endl
             << "4. Display" << endl
             << "5. Exit" << endl
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to push: ";
            cin >> element;
            stack.push(element);
            break;
        case 2:
            cout << "The popped element is: " << stack.pop() << endl;
            break;
        case 3:
            cout << "The top element is: " << stack.peek() << endl;
            break;
        case 4:
            stack.display();
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