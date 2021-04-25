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
void solve(ll t)
{
    int n , p , q;
    cin >> n >> p >> q;
    unordered_map<int , int> a;
    unordered_map<int , int> b;
    int x;
    loop(i , n)
    {
        cin >> x;
        if(x!=0)
            a[i+1]=x;
    }
    b=a;
    for(int i = n+1; i<=41;i++)
        {
            queue<int> dp;
            int r = i;
            if(r-p>0)
                dp.push(r-p);
            if(r-q>0)
                dp.push(r-q);

            while(!dp.empty())
            {
                if( a.find(dp.front())!=a.end())
                {
                        a[dp.front()]--;
                        if(a[dp.front()]==0)
                            {
                                a.erase(dp.front());
                            }
                        if(a.empty())
                            {
                                    cout << "Case #"<<t<<": " << r;
                                return;
                            }
                    dp.pop();
                }
                else
                {     
                 int k = dp.front();
                    dp.pop();
                   if(k-p>0)
                        dp.push(k-p);
                  if(k-q>0)
                       dp.push(k-q);
                }
            }
            a=b;
        }
     cout << "Case #"<<t<<": " <<"IMPOSSIBLE";
}
int main()
{
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t;i++)
    {
	    solve(i);
        cout << endl;
    }
	return 0;
}