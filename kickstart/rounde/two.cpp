#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n,a,b,c;
        cin>>n;
        cin>>a;
        cin>>b;
        cin>>c;
       cout<<"Case"<<" "<<"#"<<j+1<<": ";
       int arr[n]={n};
       for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }

    return 0;
}
