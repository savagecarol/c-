/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
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

ll val = 998244353;



/* code */
void solve()
{
    ll n;
    cin>> n;
    int arr[n];
    ll sum = 0;
    for(int i=0;i < n; i++)
        {
            cin >> arr[i];
            sum = (sum + arr[i])%val; 
        }

    int q , m;
    cin >> q;
    for(int i=0;i < q ; i++)
    {
        cin >> m; 

        if(m==1)
           {
                cout<<sum<<endl;
                continue;
           }
           


    }    
}

int main() 
{
        solve();
}

