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
#define inp(arr , n) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(arr , n) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(n) for(int i=0;i<n;i++) 
#define ploop(a , b) for(int i = a ;i<=b ; i++)
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void solve(ll t)
{
    int n  , m;
    cin >> n >> m;
    int a[n];
    bool b[n];
    memset(b , false , n);
    inp(a , n);

    int count = 0;
    for(int i = 0 ; i <n ; i++)
    {
      if(b[i] == false)
      {
        int  k = i;
        for(int j = i+1 ; j <n ; j++)
        {
            if(a[k] + a[j] == m )
                {
                    b[j]= true;
                    k = j;
                }
        }
        count++;
      }
        b[i] = true;
    }
    cout << count ;
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


