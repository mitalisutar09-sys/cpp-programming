#include<iostream>
using namespace std;
class shape
{
  public: 
  virtual void area()=0;
  };
 class square:public shape
  {
   int length;
  public:
    square(int l)
   {
   length=l;
  }
   void area() override
   {
    cout<<"area of square:"<<length*length<<endl;
    }
    };
 class rectangle:public shape
 {
   int length;
   int breadth;
 public:
 rectangle(int l,int b)
 {
 length=l;
 breadth=b;
 }
void area() override
 {
 cout<<"area of rectangle:"<<length*breadth<<endl;
 }
 };
 class circle:public shape
 {
 float radius;
 public:
  circle(float r)
  {
  radius=r;
   }
   void area() override
 {
 cout<<"area of circle:"<<3.14 *radius*radius<<endl;
 }
 };
 int main()
 {
 square s(10);
 rectangle r(4,5);
 circle c(2);
 s.area();
 r.area();
 c.area();
 }
  
   
   
    
