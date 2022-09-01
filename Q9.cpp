//Write functions using function overloading to find a maximum of two numbers andboth the numbers can be integer or real.
#include<iostream>
using namespace std;
int max(int x, int y)
{
    if(x>y)
        return x;
    else
       return y;
}
int main()
{
    cout<<max(10,20);
    return 0;
}
