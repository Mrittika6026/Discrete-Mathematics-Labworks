#include<bits/stdc++.h>
using namespace std;

//f(x)=x^2
int fun1(int a)
{
    return a*a;
}

//f(x)=x+1;
int fun2(int b)
{
    return b+1;
}

//f(x)=x^3 + x^2 + x + 1
int fun2(int c)
{
    return (c*c*c) + (c*c) + c + 1;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n],;
    cout<<"Enter the set:{";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"}"<<endl;

}
