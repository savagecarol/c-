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
  
  ll a , b;
  cin >> a >> b;
  string s;
  cin >> s;
  ll n = s.length();

    ll zero=0;
    ll one=0;

  for(int i = 0 ; i < n; i++)
  {
    if(s[i] == '0')
        zero++;
    if(s[i] == '1')
        one++;      
  }

  if(zero > a || one > b )
    {
           cout << -1;
            return;
    }
    a = a-zero;
    b=b-one;

    ll i = 0;
    ll j = n-1;

    while(i<=j)
    {


        if(s[i] == s[j] && s[i]!='?')
        {
            i++;
            j--;
            continue;
        }
        else if(s[i] != s[j] && s[i]!='?')
        {
            cout << -1;
            return;
        }
        if(s[i] == s[j] && s[i]=='?' && a>=1)
        {
            s[i] ='0';
            s[j] ='0;
        }




    }

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