#include<iostream>
using namespace std;
int main()
{
   int i, rev=0,rem;
   cout<< "enter the no: ";
   cin>>i;
   while(i!=0)
   {
     rem = i%10;
     rev = rev*10+rem;
     i=i/10;
   }
   cout<< "reverse= " <<rev;
   }
