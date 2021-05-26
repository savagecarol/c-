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
int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

 int powerOfTwo(int n)
    {
        return n && (!(n & (n-1)));
    }
/*code*/

void solve() 
{
   ll n;
   cin >> n;
   ll x = 0 , y = 0;
   vector<ll> p;
   vector<ll> q;
   for(ll i = n ;i >=1;i--)
   {
       if(x<=y) {x=x+i;p.push_back(i);}
       else if(x>y){y=y+i;q.push_back(i);}
   }
   if(x==y)
   {
       sort(p.begin() , p.end());
       sort(q.begin() , q.end());
       cout << "YES" << endl;
       cout << p.size()<< endl;
       out(i , p.size() , p);
       cout <<endl<<q.size() << endl;
       out(i , q.size() , q);
   }
   else cout << "NO";
}
int main() 
{
	ll t;
    t=1;
	while(t--)
	{
	   solve();
	}
	return 0;
}
