#include<iostream>
using namespace std;
class student
{
  private:
  int rollno;
  string name;
  float marks;
  public:
  void input()
  {
    cout<<"enter rollno:";
    cin>>rollno;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter marks:";
    cin>>marks;
  }  
  void display()
  {
    cout<<"rollno:"<<rollno<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"marks:"<<marks<<endl;
    }
  };
  int main()
  {
    student s;
    s.input();
    s.display();
  }  
