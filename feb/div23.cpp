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
    int n ;
    cin >> n ; 

        string s;
        unordered_set<string> se ;
        char fir[n];    
    for(int i=0;i<n;i++)
    {
 
        cin >> s;
        fir[i] = s[0];
        se.insert(s);
    }

    for(int i=0;i<n-1;i++)
    {
        char p = fir[i];
        string t = arr[i];
        for(int j =i+1 ; j < n ; j++)
            {
                char q = fir[j];
                string l = arr[j];
            }
    }

}


int main() 
{
	
	int t;
	cin>> t;
	while(t--)
	{
	    
	   solve();
       cout<<endl;
	}

	return 0;
}