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
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll i = 0 , j = n-1;
    ll alice = 0;
    ll bob = 0;
    bool k = true;
    ll count = 0;
    ll last_alice = 0;
    ll last_bob = 0;
    ll curr ;
    while(i<=j)
    {

        if(k==true)
        {
            curr = 0;    
            while(curr <= last_bob && i<=j)
                {
                    alice = alice + a[i];
                    curr = curr + a[i];
                    i++;
                } 
            last_alice = curr;   
            k=false;
        }   
        else
        {   
                curr = 0;
                while(curr <=last_alice && i <=j)
                    {
                        bob = bob + a[j];
                        curr = curr + a[j];
                        j--;
                    }
                last_bob = curr;
            k=true;
        }

        count++;

    }

            cout <<count << " "  << alice  << " " << bob ;      
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