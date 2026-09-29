#include <iostream>
using namespace std;
class Library
{
protected:
    string name = "Central Library";

public:
    void displayLibrary()
    {
        cout << "Library Name: " << name << endl;
    }
};
class Book : public Library
{
public:
    void displayBook()
    {
        cout << "Book: C++ Programming" << endl;
    }
};
class Magazine : public Library
{
public:
    void displayMagazine()
    {
        cout << "Magazine: Technology Today" << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Book Details:" << endl;
    b.displayLibrary();
    b.displayBook();

    cout << "\nMagazine Details:" << endl;
    m.displayLibrary();
    m.displayMagazine();
}
