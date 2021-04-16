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
        cin>> n;
        string s;
        cin >>s ;
        int t = 0;
        int m = 0;
        loop(i , n)
        {
            if(s[i] == 'T')
                t++;
            else
                m++;

            if(m > t)
                {
                    no();
                    return;
                }    
        }

        int f = 0;
        int l = 0;
        for(int i = n-1 ; i >=0 ;i--)
        {
              if(s[i] == 'T')
                f++;
            else
                l++;
            if(l >f)
                {
                    no();
                    return;
                }    
        }

        if(t==2*m)
            yes();
        else
            no();
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
    return 0;
}