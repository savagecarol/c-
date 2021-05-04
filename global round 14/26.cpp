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

        ll a,b,k; cin >> a >> b >> k;
        vector<ll> boy(k),girl(k);
        inp(i , k , boy);
        inp(i , k , girl);
        map<int,int>m1,m2;
        for(int i : boy) m1[i] += 1;
        for(int i : girl) m2[i] += 1;
        ll ans = 0;
        for(int i =  0 ; i < k ;i++)
        {
        	ans += (k - m1[boy[i]] - m2[girl[i]] + 1);
        }
        ans /= 2;
        cout << (ans);
}

int main() 
{	

	int t;
	cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}