#include<bits/stdc++.h>
using namespace std;
int fibonacii(int n)
{
    if(n<=1)
        return n;
    return fibonacii(n-1)+fibonacii(n-2);
}
int main()
{
    int n;
    cin >>n;
    cout<<fibonacii(n-1);
}
