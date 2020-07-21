#include<iostream>
#include<map>
#include<algorithm>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;

pair <string,int> winner(string arr[],int n);

int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        pair <string,int> result=winner(arr,n);

        cout<<result.first<<" "<<result.second<<endl;
    }
    return 0;
    }
std::pair <string,int> winner(string arr[],int n)
{
    pair <string,int> l;
return l("aa",1);
}


