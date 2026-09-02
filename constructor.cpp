#include<iostream>
#include<string>
using namespace std;
class employee
{
  int emp_id;
  string emp_name;
  float emp_salary;
  public:
  employee()
  {
  emp_id=123;
  emp_name="mitali";
  emp_salary=200000;
  }
  employee(int id,string name,float salary)
  {
     emp_id= id;
     emp_name= name;
     emp_salary= salary;
   }
   employee(const employee &e)
   {
    emp_id= e.emp_id;
    emp_name= e.emp_name;
    emp_salary= e.emp_salary;
    }
    void display()
    {
    cout<<"employee id:"<<emp_id<<endl;
    cout<<"employee name:"<<emp_name<<endl;
    cout<<"employee salary:"<<emp_salary<<endl;
    }
    };
    int main()
    {
      employee e;
      e.display();
    }
  
