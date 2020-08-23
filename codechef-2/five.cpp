#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    int p[n]={0};
    for(int i=0;i<n;i++)
    {
        unordered_map <int,int> s;
        for(int j=i;j<n;j++)
                    {
            s[arr[j]]++;
                    }
        int max=0;
        for(int k=0;i<s.size();k++)
        {
            if(max<s[arr[k]])
            {
                p[i]+=arr[k];
            }
        }
    }

    for(int i=0;i<n;i++)
        {
        cout<<p[i]<<" ";
        }

    }
            return 0;
}
