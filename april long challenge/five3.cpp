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


void solve()
{
    ll n , m , lol;
    cin >> n >> m >> lol;    
    ll a[n][m];
    ll b[n][m];
    ll c[n][m];
    ll count = 0;
    ll i , j;
    for( i = 0 ; i < n ;i++)
    {
        for( j = 0 ; j < m ; j++)
        {
            cin>> a[i][j];
        }
    }

    for( i = 0 ; i < n ;i++)
    {
        ll sum = 0;
        for( j = 0 ; j < m ; j++)
        {
            sum = sum + a[i][j];
            b[i][j] = sum;
        }
    }

    for( i = 0 ; i < m;i++)
    {
        ll sum = 0;
        for( j = 0 ; j < n ; j++)
        {
            sum = sum + b[j][i];
            c[j][i] = sum;
        }
    }


    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0  ; j < m ; j++)
        {
               if(a[i][j]>=lol)
                count++; 
        }
    }


    ll k = 2;
    ll val = min(n , m);

    while(k <= val)
    {
        for(i = k-1 ; i < n;i++)
        {
            for(j = k-1 ; j < m ; j++)
                {

                  ll sum = c[i][j];
                  ll p=0 , q=0, r = 0;

                if(i>=k && j>=k)
                  r = c[i-k][j-k];
                if(i>=k)
                    p = c[i-k][j];
                if(j>=k)
                    q = c[i][j-k];
                
                 if( ((sum+r) - (p+q)) >= (k) * (k) * lol) 
                    count++;      
                }  
        }
        k++;
    }
    cout << count;
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
        return 0 ;
}