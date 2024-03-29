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
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int countDigit(long long n) {
  return floor(log10(n) + 1);
}

void solve(ll t)
{
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    ll count = 0;
    for(ll i = 1 ; i < n ;i++)
    {
        if(a[i] > a[i-1])
        {
            continue;
        }

        ll count1 = countDigit(a[i]);
        ll count2 = countDigit(a[i-1]);

        ll pro = abs(count2 - count1);
        a[i] = a[i] * pow(10 , pro);
        count += pro;

        if(a[i] > a[i-1])
            {
                continue;
            }
    
        ll value = a[i-1];
        ll value1 = a[i];
        
        ll j = 0;
        while(j<pro)
        {
            ll r = value %10;

            if(r < 9)
                {
                    r = r+1;
                    r = r * pow(10 , j);
                    value1 = value1 + r;
                }
            if(value1 > a[i-1])
                {
                    a[i] = value1;
                    break;
                }    
            value = value / 10;       
            j++;        
        
        }

        if(value1 <= a[i-1])
            {
                a[i] = a[i] * 10;
                count++;
            }
    }
    cout << "Case "<< "#" <<t<<": " <<count; 
}
int main()
 {
     ll t;
     cin >> t;
     for(ll i = 1 ; i <= t ; i++)
         {
            solve(i);
            cout << endl;
     }
            return 0 ;
}