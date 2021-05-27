#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter array size"<<"\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<"\n";
    for(int i=0;i<n;i++) cin>>arr[i];


    int mx=arr[n-1];
    cout<<"Eleaders in the array are:"<<"\n";
    cout<<mx<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            cout<<mx<<" ";
        }
    }
}
