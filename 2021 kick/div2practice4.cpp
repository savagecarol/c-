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

  int a , b , c , d , m;
void solve(ll t)
{
    int n ; 
    int k;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++)
            { 
                cin >> a[i];
            }

    int count = 0;
    int i = 0;
    for(i = 0 ; i <=(n-k) ; i++)
        {
            if(a[i] == 1 )
                {
                    a[i] = 0;
                    count++;
                }
        }
        
    i--;
    int r = i;
    int one = 0;
    for(int j = i ; j < n ; j++)
    {
        if(a[j] == 1)
            one++;
    }    

    for(int j = r; j < n ; j++)
    {
        if(a[j] == 1)
            {
                count = count+one;
                one = one - 1;
            }
    }
        cout << count;
    }

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve(i);
            cout << endl;
        }
    return 0 ;
}



