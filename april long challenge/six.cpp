
/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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

string dTB(int n)
{
    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');     
    if(loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}


ll bTD(string n)
{
    string num = n;
    ll dec_value = 0;
    ll base = 1;
    ll len = num.length();
    for (ll i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}

bool isSubSequence(string str1, string str2)
{
	ll m = str1.length();
	ll n = str2.length();
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}
 

void solve()
{
    string s;
	cin >> s;
	ll n = bTD(s);
	for(int i = 0 ; i<n; i++)
	{
		string r = dTB(i);
		if(!isSubSequence(r , s))
			{
				cout << r;
				return;
			}
	}
    cout << dTB(n+1);
}
int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}