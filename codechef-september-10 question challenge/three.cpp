#include<iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int task()
{
    long long n,a, ans=0;
    cin>>n;
    vector<long long> l;
    for(ll i=1;i<=20;i++)
    {
        cout<<i<<" "<<(1ul<<i)<<endl;
        cout.flush();
        cin>>a;
        l.push_back(a);
    }



    reverse(l.begin(),l.end());

    long long to= l[0]-n*(1ul<<20);

    for(ll i=1;i<l.size();i++)
    {
        if(l[i]>=to)
        {
            l[i]=((n-(l[i]-to)/(1ul<<(l.size()-i)))/2);
        }
    }


    for(ll i=1;i<l.size();i++)
    {
        if(l[i]%2!=0)
            ans+=1ul<<(l.size()-1);

        if(to%2!=0)
            ans++;

        cout<<2<<" "<<ans<<endl;
        cout.flush();
        ll result;
        cin>>result;
        return result;

    }

}

int main()
{
   ll tc;
   cin>>tc;
    while(tc--)
   {
       if(!task())
            break;
       cout<<endl;
       cout.flush();
   }
    return 0;
}



