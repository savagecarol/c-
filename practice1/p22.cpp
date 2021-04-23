/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


double fact(int n)
{
    double ans=1;
    for(int i = 1  ; i <= n ;i++)
    {
        ans*=i;
    }
    return ans;
}
double ncr(int n,int r)
{
    if(n==0 or r==0)
        return 1;
    return fact(n)/((fact(r)*fact(n-r)));
}
 
 
 
/* code */ 
void solve()
{
   string a;
   string b;
   cin >> a >> b;
   int x= 0 , y= 0 , q = 0;
   for(int i = 0 ; i < a.length();i++)
   {
       if(a[i] == '+')
       {
           x++;
       }
       if(a[i] == '-')
       {
           y++;
       }
       if(b[i] == '+')
       {
           x--;
       }
       if(b[i]== '-')
       {
           y--;
       }
       if(b[i]=='?')
       {
           q++;
       }
   }

 if(x==0 and y==0)
            cout<<fixed<<setprecision(10)<<1;
 else if(x<0 or y<0)
            cout<<fixed<<setprecision(10)<<0;
    else
        {
            double xx=ncr(q,x);
            double z=pow(2,q);
            cout<<fixed<<setprecision(10)<<(xx/(z));
        }

}
int main()
{
    ll t;
    t = 1;
    while(t--)
    {
	solve();
    }
	return 0;
}