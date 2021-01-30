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

/* code */
void solve()
{

     ll n;
     ll k;
    cin >> n; 
    cin >> k;
    ll arr[n];

    
    for(ll i=0 ; i < n ; i++)
        cin >> arr[i] ;
    
    ll sum = arr[0];

    float val = float(k) / 100;
    for(ll i=1;i<n;i++)
        {
         sum = sum + arr[i];
        while(       > val )
            {



            }




        }
}

int main() 
{
	int t;
	cin>> t;
	while(t--)
	{ 
	   solve();
       cout<<endl;
	}

	return 0;
}