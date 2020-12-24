#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int i=0;
        int j = n-1;

        while(i<j)
        {
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" ";
            i++;
            j--;

        }
        if((n-1)%2==0)
        {
            cout<<arr[i];
        }
        cout<<endl;

    }
    return 0;
}
