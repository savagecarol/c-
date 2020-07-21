#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
cin>>t;
while(t--)
    {
     int n,m,p,q;
    cin>>n;
    cin>>m;
     unordered_set <int> a;
     for(int i=0;i<n;i++)
        {
        cin>>p;
        a.insert(p);
        }
        int k=0,c=0,r;
        for(int i=0;i<m;i++)
        {
        cin>>q;
        if(a.find(q)!=a.end() && c==0)
            {   k=1;
            c=1;
            r=q;
            }
        }
        if(k==1)
            cout<<"YES"<<endl<<k<<" "<<r<<endl;
        else
            cout<<"NO"<<endl;
     }
return 0;
    }

