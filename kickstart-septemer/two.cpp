#include<bits/stdc++.h>
#define ll long long int
using namespace std;


bool myCmp(pair<ll,ll> a,pair<ll,ll> b)
{
    return (a.second<b.second);
}

int main()
{
    ll t;
    cin>>t;
    ll j;
    for( j=0;j<t;j++)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        vector<pair<ll,ll>> arr;
        ll x;ll y;
        for(ll i=0;i<n;i++)
        {
             cin>>x;
             cin>>y;
            arr.push_back(make_pair(x,y));

        }


        cout<<"Case #"<<j+1<<":"<<" ";


        sort(arr.begin(),arr.end(),myCmp);


        ll robot=0;
        ll work=0;
        ll p;
        for(ll i=0;i<n;i++)
        {


                if(work>arr[i].first)
                {
                    p=arr[i].second-work;
                }
                else
                {
                    p=arr[i].second-arr[i].first;
                }


                if(p<=k && work<arr[i].second)
                {
                    work=arr[i].first+k;
                    robot++;
                }

                else if(p>k && work<arr[i].second)
                {
                    int l=(p/k)+1;
                    work=arr[i].first+(l*k);
                    robot=robot+l;
                }

        }
        cout<<robot<<endl;
    }
    return 0;

}
