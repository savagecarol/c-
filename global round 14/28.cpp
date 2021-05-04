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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */
void solve()
{
    ll n;
    cin >> n ;
    ll a[n];
    map<ll,ll> odd;
    map<ll,ll> even;
    for(int i = 0 ; i <n ;i++)
    {
        cin >> a[i];
        if(a[i]%2!=0)
            odd[a[i]]  = i;
        else
            even[a[i]] = i;
    }

if(odd.size() == 0 || even.size() == 0)
   {out(i , n , a);return;} 

    for(int i = 0 ; i < n ;i++)
    {
        if(a[i]%2==0)
        {
             auto it = odd.begin();
            if(it->first < a[i])
            {
                even.erase(a[i]);
                ll temp = a[i];
                a[i] = it->first;
                a[it->second] = temp;
                odd.erase(odd.begin());
            }
        }

        else
        {
            auto it = even.begin();
            if(it->first < a[i])
            {
                odd.erase(a[i]);
                ll temp = a[i];
                a[i] = it->first;
                a[it->second] = temp;
                even.erase(even.begin());
            }
        }

            if(odd.size() == 0 || even.size() == 0)
                    {out(i , n , a);return;} 
    }
    out(i , n , a);
}

int main() 
{	

	int t;
	    t=1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}