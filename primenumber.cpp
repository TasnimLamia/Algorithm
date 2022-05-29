#include<iostream>
using namespace std;
int checkPrime(int n)

{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        int x = n/2;
        for(int i=2; i < x; i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
    }
    return n;
}
int main ()
{
    int a= 1, b= 100;
    for(int i=a; i<=b; i++)
        if(checkPrime(i))
    {
        cout<<i<<" ";
    }
    return 0;
}

