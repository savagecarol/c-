/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
/* code */
ll mexx(vector<ll> a)
{
    ll n = a.size();
    for(ll i= 0 ; i < n ; i++)
    {
        if(a[i] > i)
            return i;
    }
    return a[n-1] + 1;
}




void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    stack<ll> p;
    for(ll i = 0 ; i < n; i++)
       {
           cin  >> a[i];
       }
    sort(a , a+ n);
    cout << a[0] << " " ;
    for(ll i = 1 ; i < n ; i++)
    {
        if(a[i-1] == a[i])
            p.push(a[i]);
        else
            cout << a[i] << " ";
    }  

    while(!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }

}
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}