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

/* power function */
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
/* code */
unordered_map<string , int> v;

void solve()
{
    string n;
    cin >> n;
    cout << v[n];
}

int main() 
{	
    queue<string> q;
    q.push("4");
    q.push("7");
    v["4"] = 1;
    v["7"] = 2;
    int i = 3;
    while(!q.empty())
    {
        string a = q.front(); 
        q.pop();
        v[a+"4"] = i;
        q.push(a+"4");
        i++;
        v[a+"7"] = i;
        i++;
        q.push(a+"7");
        if(a.length() == 9)
            {
                break;
            }
    }

	ll t;
    t=1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
