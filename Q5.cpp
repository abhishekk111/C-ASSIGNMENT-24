//Define a function to check whether a given number is a term in a Fibonacci series ornot.
#include <iostream>
using namespace std;
int fib(int n)
{
    int f1=1,f2=1,temp;
    if(n<=2)
        return 1;

    for(int i=3;i<=n;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return f2;
}
int main()
{
    int n,flag=0;
    cout<<"Enter numbers"<<endl;
    cin>>n;

    for(int i=1; ; i++)
    {
        int value=fib(i);
        cout<<" "<<value;
        if(n==value)
        {
            flag=1;
            break;

        }
        if(value>n)
            break;
    }
    cout<<endl;
    if(flag==1)
        cout<<"no is in fibonacci";
    else
        cout<<"no is not in fibonacci";
    return 0;

}
