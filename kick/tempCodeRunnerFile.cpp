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



void solve(ll i)
{
    int n  , k;
    cin >>n;
    int a[n];
    inp(i , n , a);

if( k == 1)
{
    int small = 0 ;
    int large = 1;
    int max_sum = 1;
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(a[i+1]-a[i] > max_sum)
        {
            max_sum = a[i+1] - a[i];
            small = i ;
            large = i+1;
        }
    }
    if(max_sum == 1)
    {
        cout << "Case #"<<i<<": "<<0;
        return ;
    }
    else
        {
            cout << "Case #"<<i<<": "<< (a[small] + a[large])/2;
            return;
        }
 }

}

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve(i);
            cout << endl;
        }
    return 0 ;
}