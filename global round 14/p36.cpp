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
/* code */
 
void solve()
{
    ll n;
    cin >> n;

    if(n==2)
        {
            cout << -1 << endl;
            return ;
        }
    int mat[n][n];
    int k = 1;

    ll p =0;
    int x;
    while(p<n-1)
    {
         x = 0;
        for(int j = p ; j < n ; j++)
            {
                mat[x][j] = k;
                x++;
                k++;
            }
        p++;
    }

    p=1;
    x=p;
    while(p < n-1)
    {
        mat[x][x-p] = k;
        x++;
        k++;
        if(x==n)
          {
               p++;
               x=p;
          }
    }   
    mat[n-1][0]=k+1;
    mat[0][n-1]=k;

    for(int i = 0 ; i < n;i++)
    {
        for(int j = 0 ; j < n;j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
    }
}
int main() 
{	
	int t;
    cin >> t;
	while(t--)
	{
	   solve();
	}
	return 0;
}