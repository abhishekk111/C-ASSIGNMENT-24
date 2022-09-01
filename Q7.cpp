//Write a function using the default argument that is able to add 2 or 3 numbers
#include<iostream>
using namespace std;
int add(int , int, int=0);
int main ()
{
   int a,b;
   cout<<"Enter value of a and b: ";
   cin>>a>>b;
   cout<<"sum is "<<add(a,b);
   cout<<endl;
   cout<<"Enter the value of a,b,c:";
   int c;
   cin>>a>>b>>c;
   cout<<"addition of a,b,c is "<<add(a,b,c);
   cout<<endl;
   return 0;
}

int add(int x, int y, int z)
{
    return x+y+z;


}

