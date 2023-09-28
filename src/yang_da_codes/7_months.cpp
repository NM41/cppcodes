// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
#include <iterator>
using namespace std;

class Month
{
private:
    string month_name;
    int index;
    string months[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "Augest",
        "September",
        "October",
        "November",
        "December",
    };

public:
    Month() {}
    Month(string monthname) : month_name(monthname) {}

    Month &operator++()
    {

        for (int i = 0; i < 12; i++)
        {
            if (month_name == months[i])
            {
                index = i;
            }
        }
        if (months[index] == "December")
        {
            month_name = "January";
        }
        else
        {
            month_name = months[++index];
        }
        return *this;
    }

    Month operator++(int)
    {
        Month temp = *this;
        ++*this;
        return temp;
    }

    void read()
    {
        cout << "Enter a month name: ";
        cin >> month_name;
    }

    void display()
    {
        cout << "The next month name is: " << month_name << endl;
    }
};

int main()
{
    cout << "----------------------------------------------------------" << endl;

    Month month;
    month.read();
    month++;
    month.display();
    
    cout << "\n----------------------------------------------------------" << endl;
    return 0;
}