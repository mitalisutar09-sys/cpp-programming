#include <iostream>
using namespace std;
class Time
{
    int hr, min, sec;
public:
    void accept()
    {
        cout << "Enter hours: ";
        cin >> hr;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter seconds: ";
        cin >> sec;
    }

    void add(Time t1, Time t2)
    {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min;
        hr = t1.hh + t2.hh;
        if (sec >= 60)
        {
            sec = sec - 60;
            min++;
        }
        if (min >= 60)
        {
            min = min - 60;
            hr++;
        }
    }

    void display()
    {
        cout << "Total Time = "
             << hr << " hours "
             << min << " minutes "
             << sec << " seconds";
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "\nEnter second time:\n";
    t2.accept();

    t3.add(t1, t2);

    cout << "\n";
    t3.display()
}
