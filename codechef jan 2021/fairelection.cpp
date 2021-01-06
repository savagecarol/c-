#include<bits/stdc++.h>
#define ll long long int
using namespace std;


void solve()
{   
    ll n;
    ll m;
    cin>>n;
    cin >> m;
    ll a[n];
    ll b[m];
    ll sum_a = 0 ;
    ll sum_b= 0;
    ll i;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
        sum_a+=a[i];
    }
    for( i=0;i< m; i++)
    {
        cin >> b[i];
        sum_b += b[i]; 
    }
    if(sum_a>sum_b)
        {
            cout<< 0 << endl ;
            return ;
        }
    sort(a,a+n);
    sort(b,b+m , greater<ll>());

    i = 0 ;
    ll count = 0 ;
    while(i< n && i < m)
    {
        if(b[i] > a[i])
        {
            sum_a = sum_a - a[i];
            sum_a = sum_a + b[i];
            
            sum_b = sum_b - b[i];
            sum_b = sum_b + a[i];
            count++;
        }
        if(sum_a > sum_b)
        {
            cout<< count << endl;
            return ;
        }
        i++;
    }
    cout << -1 << endl;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
return 0;
}