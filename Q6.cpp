//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
int swap(int & , int &);
int main ()
{
   int a,b;
   cout<<"Enter value of a and b ";
   cin>>a>>b;
   swap(a,b);
   cout<<a<<" "<<b;
   return 0;
}

int swap(int &x, int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}

