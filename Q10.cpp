//Write functions using function overloading to add two numbers having different datatypes
#include<iostream>
using namespace std;
float add(int x, float y)
{
    return x+y;
}
int main()
{
   int a;
   float b;
   cout<<"Enter int value: ";
   cin>>a;
   cout<<"Enter float value: ";
   cin>>b;
   cout<<endl;
   cout<<"sum is "<<a+b;

   return 0;
}
