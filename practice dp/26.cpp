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

ll mod = 1e9 + 7;
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

int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}
int powerOfTwo(int n){
        return n && (!(n & (n-1)));
    }
/*code*/
 int cal(int num){
	int ans = 0;
	while (num){
		ans += num % 10;
		num /= 10;
	}
	return ans;
}
void solve() 
{
    ll n , m , x , y;
    cin >> n >> m >> x >> y;
    vector<string> a;
    for(ll i = 0 ; i < n ;i++)
    {
        string x;
        cin >> x;
        a.push_back(x);
    }
    
    ll count = 0;
    if(2*x<=y)
    {
        for(ll i = 0 ; i < n ;i++)
        {
            for(ll j = 0 ; j < m ;j++)
            {
                if(a[i][j] =='.')count++;
            }
        }
      cout << count * x;
    }
    else
    {  
        for(ll i = 0 ; i < n ;i++)
        {
            for(ll j = 0 ; j < m;)
            {
                if(a[i][j] == '.' && j+1<m && a[i][j+1] == '.')
                {
                    count = count + y;
                    j++;
                    j++;
                }
                else if(a[i][j] == '.' )
                {
                    count = count + x;
                    j++;
                }
                else
                    j++;
            }
        }
        cout << count;
    }
}
int main() 
{
    ll t;
    cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
