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

float s(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve()
{
    ll n  , k ;
    cin >> n >> k;
    char s[n];
    for(ll i = 0 ; i < n ; i++ )
        cin >> s[i];
    
    ll count = 0;
    if(s[0] == '*')
        count = 1;
    
    if(k ==1 && count == 1)
       {
            yes();
            return;
       }

    for( ll i = 1; i < n ; i++)
        { 
            if(s[i]!=s[i-1] && s[i] == '*')
                {
                    count=1;
                }
            
            else if(s[i]== s[i-1] && s[i] == '*')
                {
                    count++;
                }
            else
                count = 0;

             if(count == k)
               {
                   yes();
                    return;
               }
        }
    no();

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