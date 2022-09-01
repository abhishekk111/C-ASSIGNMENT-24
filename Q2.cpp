//Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;

int largest_digit(int x);
int main ()
{
    int y;
    y=largest_digit(98767876);
    cout<<"Largest digit of a number is "<<y;
    return 0;
}

int largest_digit(int x)
{
    int max=-1;
    while(x)
    {
        if(max<x%10)
            max=x%10;
        x=x/10;
    }
    return max;
}

