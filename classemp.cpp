#include<iostream>
using namespace std;
class employee
{
  public:
  int empid;
  string empname;
  float empsalary;
  string empdepartment;
  void input()
  {
    cout<<"enter empid:";
    cin>>empid;
    cout<<"enter empname:";
    cin>>empname;
    cout<<"enter empsalary:";
    cin>>empsalary;
    cout<<"enter empdepartment:";
    cin>>empdepartment;
      }  
  void display()
  {
    cout<<"empid:"<<empid<<endl;
    cout<<"empname:"<<empname<<endl;
    cout<<"empsalary:"<<empsalary<<endl;
    cout<<"empdepartment:"<<empdepartment;
    }
  };
  int main()
  {
    employee emp;
    emp.input();
    emp.display();
  }  
