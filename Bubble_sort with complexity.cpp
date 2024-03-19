#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],n,t,p=0;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter the list of integers:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    auto t1 = chrono::steady_clock::now();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
        p++;
    }
    auto t2 = chrono::steady_clock::now();
    double diff = double(chrono::duration_cast <chrono::nanoseconds> (t2-t1).count());
    cout<<"execution time is: "<<diff<<endl;
    cout<<"The sorted list using bubble sort is:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<", ";
    return 0;

}
