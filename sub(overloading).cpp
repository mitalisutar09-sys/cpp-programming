#include <iostream>
using namespace std;

class Number {
    int a;

public:
    Number(int x= 0) {
        a = x;
    }
    Number operator-(Number n) 
{
        return Number(a - n.a);
    }

    void display() {
        cout << "a = " << a<< endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number n3 = n1 - n2;
    n3.display();

    return 0;
}
