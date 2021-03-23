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

int cal(int w ,int m)
{

    if((m >0 && w<=0) || ( w>0 && m<=0) || (m < 0 && w < 0) )
    {
            return 0;
    }
    if(m == 0 && w == 0)
    {
        return 1;
    }
        return max(cal(w-c , m-1) , cal(w-d  , m-1));

}


void solve(ll t)
{
  string s;
  cin >> s;
  int n = s.length();

    for(int i = 0 ; i < n-4;i++)
    {
        if(s[i] == 'p' && s[i+1] == 'a' && s[i+2] == 'r' && s[i+3] == 't' && s[i+4] == 'y')
                {
                    s[i ] = 'p';
                     s[i+1 ] = 'a';
                      s[i+2] = 'w';
                       s[i+3] = 'r';
                        s[i+4 ] = 'i';
                }   
    }
        cout << s;
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



