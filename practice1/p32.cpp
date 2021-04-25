/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i]
#define loop(i,n) for(int i=0;i<n;i++)
 
#define mod 1000000007
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */ 
void solve()
{
    ll n;
    cin >> n;
    ll k=n*2;
    string s;
    cin >> s;
    char a[n];
    char b[n];
    char temp;
    loop(i , n)
    {
        a[i] = s[i];
        b[i] = s[ n + i]; 
    }
    ll q;
    cin >> q;
    ll t , x, y;
    bool val = false;
    for(int j = 0 ; j < q ;j++)
    {
        cin >> t >> x >> y;
        x=x-1;
        y=y-1;
        if(t==2 && val == true)
            val = false;
        else if(t==2 && val == false)
            val = true;

        if(t==1)
        {
            if(val == false)
            {   
                if(x<n && y < n)
                    {
                        temp = a[x];
                        a[x] = a[y];
                        a[y] = temp;
                    }
                
                if(x <= n && y >=n)
                    {
                        temp = a[x];
                        a[x] = b[y-n];
                        b[y-n]=temp;
                    }
                if(x>n && y>n)
                {
                        temp = b[(x-n)];
                        b[(x-n)] = b[(y-n)];
                        b[(y-n)] = temp;
                }
            }

            if(val == true)
            {
                if(x<n && y <n)
                {
                    temp = b[x];
                    b[x] = b[y];
                    b[y] = temp;
                }
                if(x <= n && y >= n)
                    {
                        temp = b[x];
                        b[x] = a[(y-n)];
                        a[(y-n)] = temp;
                    }
                if(x>n && y>n)
                {
                        temp = a[(x-n)];
                        a[(x-n)] = a[(y-n)];
                        a[(y-n)] = temp;
                }
            }

        }
    }

    
    if(val == false)
    {
    out(i , n , a);
    out(i , n , b);
      }
    else
    {
    out(i , n , b);
    out(i , n , a);
    }
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