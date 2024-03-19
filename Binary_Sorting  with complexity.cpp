#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[1000],n,pos=0;
   cout<<"enter n:";
   cin>>n;
   cout<<"enter a sorted array"<<endl;
   for(int i=0;i<n;i++)
    cin>>arr[i];
   int low=0,up=n-1,x;
   cout<<"enter the value of x"<<endl;
   cin>>x;
   auto t1 = chrono::steady_clock::now();
   while(low<=up)
   {
       int mid = low + (up - up) / 2;
       if(arr[mid]==x)
         pos=mid;
       if(arr[mid]<x)
         low = mid+1;
       else
        up = mid-1;

   }
   cout<<"the index of x is:"<<pos<<endl;
   auto t2 = chrono::steady_clock::now();
   double diff = double(chrono::duration_cast <chrono::nanoseconds> (t2-t1).count());
   cout<<"execution time is: "<<diff<<endl;
   return 0;
}
