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

unordered_set<ll> ar;

void sieve()
{
    for(int i=0; i < 100007 ; i++ )
        {   
            if(iscube(i)) 
                ar.insert(i);
        }
}

void solve()
{

    ll N;
    cin >> N;
     int count = 0; 
   if(N == 1 )
    {
        cout << "NO";
    return;
    }
    if(ar.find(cbrt(N)) !=ar.end())
        yes();
    else   
        no();
}

int main() 
{
	sieve();
	int t;
	cin>> t;
	while(t--)
	{	    
	   solve();
       cout<<endl;
	}
	return 0;
}