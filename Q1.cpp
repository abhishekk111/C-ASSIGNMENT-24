//Define a function to check whether a given number is a Prime number or not
#include <iostream>
using namespace std;
void isPrime(int n)
{
   int i, flag = 0;
   for(i=2; i<=n/2; ++i)
    {
      if(n%i==0)
      {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<n<<" is a prime number"<<endl;
   else
   cout<<n<<" is not a prime number"<<endl;
}
int main()
{
   isPrime(11);
   isPrime(45);
   return 0;
}
