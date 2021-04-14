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
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */
void solve()
    {
        ll n;
        cin >> n ;
        ll a[n];
        inp(i , n , a);
        
        loop(i , n)
        {
            if(a[i]%2==0)
                {
                    cout << 1 << endl << i+1;
                    return;
                }
        }

         int c = -1, d=-1 , e= -1 ;   
        loop(i , n)
        {
              if(a[i]%2!=0 && e==-1)
                {
                    c= i+1;
                    e=1;
                    
                }
            else if(a[i]%2!=0 && e==1)
                {
                    d= i+1;
                    break;
                }
        }
        if(c!=-1 && d!=-1)
        {
            cout << 2 << endl << c << " " << d;
            return;
        }
        cout << -1;
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