#include<iostream>
using namespace std;
class number
{
   int n;
public:
   number(int x)
   {
    n=x;
}
  void operator++(int)
  {
     n++;
  }
 
  void display()
  {
  cout<<"number= "<< n;
  }
  };
int main()
{
 number obj(10);
 
 obj++;
 obj.display();
 }
 
    
   
  

