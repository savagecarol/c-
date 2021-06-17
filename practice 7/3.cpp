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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*code*/
int main() 
{
	ll t;
    t=1;
	while(t--)
	{
		string s;
		cin >> s;
		ll n = s.length();
		vector<int> p;
		vector<int> q;
		for(int i = 0 ; i < n-1 ; i++)
		{
			if(s[i] == 'A' && s[i+1] == 'B')
						p.push_back(i);
			if(s[i] == 'B' && s[i+1] == 'A')
					    q.push_back(i);
		}
			bool r = false;
			for(int i = 0 ; i < q.size() ; i++)
				for(int j = 0 ; j < p.size() ; j++)
					if(abs(q[i] - p[j]) != 1) {r=true; break;} 
			if(r==true) yes();
			else no();
	}
	return 0;
}
