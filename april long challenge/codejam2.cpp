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

    long double a[n];
    long double b[n];

    for(ll i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    ll count = 0;

    for(ll i = 1 ; i < n ; i++)
    {
        if(a[i] > a[i-1])
        {
            continue;
        }

        ll count1 = to_string(a[i]).size();
        ll count2 = to_string(a[i-1]).size();
        ll pro = (count2 - count1);
        ll m=a[i];
        a[i] = m * pow(10 , pro);
        count += pro;

        if(a[i] > a[i-1])
            {
                continue;
            }
    
        ll value = a[i-1];
        ll value1 = a[i];
        ll j = 0;
        ll sum = 0;
        while(j<pro)
        {
            ll r = value %10;
            sum  = sum +  r * pow(10 , j); 
            value = value / 10;       
            j++;        
        }

        if(countDigit(sum+1) == pro && value1 > a[i-1])
        {
                ll w = sum +1;
               a[i] = a[i] + w; 
        }
        else if(value1 <= a[i-1])
            {
                a[i] = a[i] * 10;
                count++;
            }
    }
    for(int i = 0 ; i < n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
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