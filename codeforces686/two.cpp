#include<bits/stdc++.h>
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
    {
        cin>>arr[i];
    }

    unordered_map<int,int> a;
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;

    }

    int res = 0;
    int val = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[arr[i]]==1 && val>arr[i])
            {val = arr[i];
                res= i+1;
            }
    }
    if(res!=0)
    cout<<res<<endl;
    else
    cout<<-1<<endl;

}
return 0;
}

