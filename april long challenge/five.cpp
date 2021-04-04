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
    ll n , m , k;
    cin >> n >> m >> k;    
    ll a[n][m];
    ll b[n][m];
    ll c[n][m];
    ll count = 0;
    ll t;
    int i , j;
    
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

    for( i = 0 ; i < n ;i++)
    {
        ll sum = 0;
        for( j = 0 ; j < m ; j++)
        {
            sum = sum + b[j][i];
            c[j][i] = sum;
        }
    }

    for( i = 0 ; i < n ;i++)
    {
        for( j = 0 ; j < m; j++)
        {
            if(a[i][j] >= k)
            {
                count = count + min(n-i , m-j);
            }
            else
            {
                int p = i+1;
                int q = j+1;
                int val = min(n,m);
                int r = 2;
                int x ,y , z;

                while(p<val&&q<val)
                {
                     x = c[p][q];
                    if(p-r>=0 && q-r>=0)
                    {
                         y = c[p-r][q];
                         z = c[p][q-r];
                    }
                    else if(p-r>=0 && q-r<0)
                    {
                        y = c[p-r][q];
                        z = 0;
                    }
                     else if(p-r<0 && q-r>=0)
                    {
                        y = 0;
                        z = c[p][q-r];
                    }
                    else
                    {
                        y = 0;
                        z = 0;
                    }

                            ll s = pow(r ,2);
                            
                        if( ((float)(x-(y+z)) /(float)s) > (float)k)
                            {
                            count = count + min(n-p, m-q);
                            break;
                            }

                    p++;
                    q++;
                    r++;
                }
            }
        }
    }
    cout << count;
}

int main()
 {
     int t;
     cin >> t;
     while(t--)
     {
            solve();
            cout << endl;
     }
        return 0 ;
}