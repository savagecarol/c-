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
void solve()
{
    int n , m , z;
    cin >> n >> m >> z;
    unordered_set<int> a;
    int i =1;
    while(true)
    {
        if(n*i>z)
            break;
        a.insert(n*i);
        i++;
    }
     i =1;
    int count = 0;
    while(true)
    {
        if(m*i>z)
            break;

        if(a.find(m*i)!=a.end())
            count++;
        i++;
    }
    cout << count;
}

int main() 
{
	
	int t;
	t = 1;
	while(t--)
	{
	   solve();
	}

	return 0;
}