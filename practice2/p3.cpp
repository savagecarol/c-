/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
void solve()
{
    string s;
    cin >> s;
    ll k = 5;
    ll n = s.length();
    int a = 0 , b = 0 , c= 0 , d = 0 , e = 0;
    loop(i , n)
    {
        if(s[i] == 'h' && a==0)
        {
            a=1;
        }
        else if(s[i] == 'e' && a==1 && b==0)
            {
                b=1;
            }
        else if(s[i] == 'l' && b==1 && c==0)
        {
            c=1;
        }
        else if(s[i] == 'l' && c==1 && d==0)
        {
            d=1;
        }
        else if(s[i] == 'o' && d==1 && e==0)
        {
            e=1;
        }
    }

    if(a==1 && b==1 && c==1 && d==1 && e==1)
        {
            yes();
        }
    else    
        {
            no();
        }
}
int main()
{
    ll t;
    t= 1;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}