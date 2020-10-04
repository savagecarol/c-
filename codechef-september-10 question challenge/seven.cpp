#include<iostream>
#define ll long long int
using namespace std;

void solve1(ll n)
{
    ll a=0;
    ll b=0;
    ll arr[n]={0};
    for(ll i=n;i>0;i--)
    {
        if(a==b)
            {a+=i;
            arr[i-1]=1;}
        else if(a>b)
            b+=i;
        else if(a<b)
            {a+=i;arr[i-1]=1;}
    }
    cout<<abs(a-b)<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    }

void solve2(ll n)
{

}
void solve3(ll n)
{

}
void solve4(ll n)
{

}




int main()
{
    int k;
    cin>>k;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
    if(k==1)
        solve1(n);
      if(k==2)
        solve2(n);
      if(k==3)
        solve3(n);
      if(k==4)
        solve4(n);
    }
    return 0;
}
