#include<iostream>
using namespace std;
float f1(int r)
{
    return 3.14*r*r;
}
float f1(int x, int y)
{
    return x*y;
}
float f1(float p, float q)
{
    return 0.5*p*q;
}
int main()
{
    int x,y,r;
    float b,h;
    cout<<"Enter length and breadth of rectangle:";
    cin>>x>>y;

    cout<<"Enter radius of circle:";
    cin>>r;

    cout<<"Enter base and height of triangle:";
    cin>>b>>h;
    cout<<"area of rectangle is "<<f1(x,y)<<endl;
    cout<<"area of triangle is "<<f1(b,h)<<endl;
    cout<<"area of cicle is "<<f1(r)<<endl;
    return 0;
}
