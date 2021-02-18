


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


	unordered_set<ll> a;
	vector<ll> b;

/* code */



bool isPowerOfTwo (ll x) 
{ 
    return x && (!(x&(x-1))); 
} 
 



 bool iscube(ll N) 
{ 
    for (ll i = 1 ; i <= cbrt(N); i++) 
    { 
        ll cb = i*i*i; 
  
        ll diff = N - cb; 
        ll cbrtDiff = cbrt(diff); 
        if (cbrtDiff*cbrtDiff*cbrtDiff == diff) 
            {
                return true;
            } 
    }  
    return false;
} 



void solve()
{

    ll count =0;
	    ll n ;
        cin >> n;

	    for(ll i=0 ; i<=10004 && b[i] <= n ; i++)
        {
	        if(a.count(n-b[i]) > 0)
             {

            count++;
            break;

             }
	    
        }

	    if(count>0)
            yes();

	    else 
             no();

}

void sieve()
{

	for(ll i=1 ; i <= 10005 ; i++)
    {
	    ll l=i*i*i;
	    a.insert(l);
	    b.push_back(l);
    }


}


int main() {

    sieve();
	ll t;
    cin>>t;

    while(t--)
	{ 
	   solve();
       cout << endl;
	
    }
    return 0 ;
}


