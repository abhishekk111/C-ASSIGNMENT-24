//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int x, int y)
{
    int a=1;
    while(y--)
    {
        a=a*x;
    }
    return a;
}
int main()
{
    int x,y;
    cout<<"Enter 2 number"<<endl;
    cin>>x>>y;
    cout<< x <<" power "<< y <<" is "<<power(x,y);
    return 0;
}


