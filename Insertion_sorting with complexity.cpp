#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],n,t;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter the list of integers:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    auto t1 = chrono::steady_clock::now();

    for(int i=1;i<n;i++)
    {
        t= arr[i];
        int p=i-1;
        while(p>=0 && t<=arr[p])
        {
            arr[p+1]=arr[p];
            p--;
        }
        arr[p+1] = t;
    }

    auto t2 = chrono::steady_clock::now();
    double diff = double(chrono::duration_cast <chrono::nanoseconds> (t2-t1).count());
    cout<<"execution time is: "<<diff<<endl;
    cout<<"The sorted list using insertion sort:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
