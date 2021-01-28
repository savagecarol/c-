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

run()
{

for(int i=0;i<1000;i++)
{
    i * 2020 +  * 2021 

}

}








int run(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;

    run(n-2020);
    run(n-2021);
}


void solve()
{
    ll n;
    cin >> n;
   int k= run(n);
   if(k==0)
   {
       no();
   }
   else
   {
       yes();
   }
   

}

int main() {
	
	int t;
	cin>> t;
	while(t--)
	{
	   solve();
       cout<<endl;
	}
	return 0;
}