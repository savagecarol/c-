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

int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

string decToBinary(int n)
{
    string x="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            x=x+"1";
        else
            x=x+"0";
    }
    return x;
}

/*code*/
vector<ll> p;
void solve() 
{
    ll n;
    cin >>n;
    if(n==2)
        {
            cout << 2;
            return;
        }

    ll sum1 = 0;
    for(ll i = 0; i <=(n/2)-1;i++)
    {
        sum1 = sum1 + p[i];
    }

    sum1 = sum1 + p[n];

    ll sum2 = 0;
    for(ll i = n/2; i <=n-1;i++)
    {
        sum2 = sum2 + p[i];
    }
    cout << sum1 - sum2;
}
int main() 
{	

    ll sum = 0;
    p.push_back(0);
    for(int i = 1 ; i <=32 ;i++)
    {
        sum = (ll)pow(2 , i);
        p.push_back(sum);
    }
	ll t;
    cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
