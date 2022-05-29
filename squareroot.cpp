#include<bits/stdc++.h>
using namespace std;
int checkPrime(int n)
{
    if(n < 2)
    {
        return 0;
    }
    else
    {
        for (int i =2; i < sqrt(n); i++)
        {
            if (n % i ==0)
            {
                return 0;
            }
        }
    }
    return n;
}
int main()
{
    int a=1, b= 100;
    {
        for(int i= a ; i<= b ; i++)
        {
            if(checkPrime(i))
                cout<<i<<" ";
        }
        return 0;
    }
}
