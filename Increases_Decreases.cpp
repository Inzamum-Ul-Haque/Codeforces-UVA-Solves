#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0)
    {
        cout<<n;
    }
    else
    {
        cout<<n-1;
    }
    return 0;
}
