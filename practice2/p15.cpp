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
set<int> r;    
void solve()
{
    ll n;
    cin >> n;
    for(auto s : r)
    {
        if(s>n)
           {
                cout << s;
                return;
           }
    }
    
}

int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
  
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get 
        // the integer value of the digit.
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
int main()
{

    for(int i = 1 ; i <=100000;i++)
    {   
        string a = to_string(i);
        string b =to_string(i+1);
        string c = a + b;
        r.insert(stringTointeger(c));
    }
    ll t;
    cin >> t;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}