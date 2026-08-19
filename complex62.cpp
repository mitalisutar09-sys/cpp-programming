#include<iostream>
using namespace std;
class complex
{
 private:
  int real1;
  int real2;
  int img1;
  int img2;
  public:
  void input()
  { 
   cin>>real1;
   cin>>real2;
   cin>>img1;
   cin>>img2;
  }
  void add()
  {
   cout<<"addition of real1 and real2:"<<real1+real2<<endl;
   cout<<"addition of img1 and img2:"<<img1+img2<<endl;
   }
   void sub()
   {
   cout<<"sub of real1 and real2:"<<real1-real2<<endl;
   cout<<"sub of img1 and img2:"<<img1-img2<<endl;
   }
   void display()
   { 
   input();
   add();
   sub();
   }
   };
   int main()
   {
     complex c1;
     c1.input();
     c1.add();
     c1.sub();
}
   
  
  
