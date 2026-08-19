#include<iostream>
using namespace std;
class complex
{
  int real;
  int img;
  public:
  void input()
  {
  cout<<"enter real and img:";
  cin>>real>>img;
  }
  void display()
  {
    cout<<"real:"<<real<<"+"<<"img:"<<img<<endl;
    }
  void add(complex c1,complex c2)
  {
   real=c1.real+c2.real;
   img=c1.img+c2.img;
   }
    };
int main()
  {
   complex c1,c2,c3;
   c1.input();
   c2.input();
   c3.display();
   
   }
  
