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
void solve(int t)
{

    ll n;
    cin >> n;
    ll a[n];
    ll odd = 0;
    for(ll i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            if(a[i]%2 != 0 )
            {
                odd++;
            }
         } 
        if(odd%2 == 0 )
        {
            cout << 0;
            return ;
        }
        
        for(int i = 0 ; i < n; i++)
        {
            if(a[i] == 2)
                    {
                        cout << 1;
                        return;
                    }
        }
         cout << -1; 
    }
int main() {	
	int t;
	cin>> t;
	for(int i = 1 ; i <=t ; i++)
	{
	   solve(i);
       cout<<endl;
	}
	return 0;
}
