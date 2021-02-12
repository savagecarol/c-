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


const int MAX = 1000000;
int prefix[MAX + 1];


void primer()
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));

    for(int i = 2; i * i <= MAX; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i * 2; j<= MAX; j+= i)
            {
                prime[j] = false;
            }
        }
    } 

    prefix[0] = prefix[1] = 0;
    for(int i = 2; i<= MAX; i++)
    {
        prefix[i] = prefix[i-1];
        if(prime[i]) 
            prefix[i]++;
    }
}

/* code */
void solve()
{

      ll x, y; 
      cin>>x;
      cin>>y;
        if(prefix[x] > y) 
        {cout << "Divyam";
         return;
        }
        else cout<<"Chef";    

}


int main() 
{

    primer();
    ll t;
	cin>>t;
	while(t--)
	{
        solve();
	  cout<< endl;
	}
	return 0;
}







