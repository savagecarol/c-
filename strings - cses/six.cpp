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

int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int a[n];
        inp(i , n ,a);
        if(n==1)
        {
            if(a[0] == 0) cout << 0;
            else cout << (a[0] - 1) + 2;
            continue;
        }

        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] > 1)
            {

            if(a[i] > a[i+1] && i==0 )
            {
                if(a[i+1] == 0)
                {
                    count = count + a[i] - 1;
                      a[i] = 1;
                }

                else
                {
                count = count + ( a[i] - a[i+1]);
                a[i] = a[i] - (a[i] - a[i+1]) ;
                }
            }
            if(a[i] > a[i-1] && i==n-1 )
            {   
                if(a[i-1] == 0)
                {
                    count = count + a[i] - 1;
                    a[i] = 1;
                }
                else
                {
                count = count + ( a[i] - a[i-1] );
                a[i] = a[i] - (a[i] - a[i-1]) ;
                }
            }

            else  if(a[i] > a[i+1] && a[i] > a[i-1])
            {
                if(a[i-1] == 0 && a[i+1] == 0)
                {
                    count = count + a[i] - 1;
                    a[i] = 1;
                }
                else
                {
                count = count + min( a[i] - a[i+1] , a[i] - a[i-1]);
                a[i] = a[i] - min(a[i] - a[i+1] , a[i] - a[i-1]);
                }
            }

            }
        }    
         ll sum = 0;   
        for(int i = 0 ; i < n-1 ;i++)
        {
            if(i==0)
            {
                sum+= abs(a[i] - a[i+1]) + a[i];
            }
            else if(i==n-1)
            {
                 sum+= abs(a[i] - a[i+1]) + a[i];
            }
            else 
            {
                sum+= abs(a[i] - a[i+1]);
            }

        }
        cout << sum + count + a[n-1] << endl;
    }

}
