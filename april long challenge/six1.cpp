
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

ll MAX = 100000;

unordered_map<ll , string> m;
unordered_map<string , ll> p;

void allBinary(ll n)
{
    m[0] = "0";
    p["0"] = 0;
    queue<string> q;
    q.push("1");
    ll i =0;
    while (n--) {
        string s1 = q.front();
        q.pop();
        i++;
        m[i] = s1;
        p[s1] = i;
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }

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
	ll n = p[s];
	for(int i = 0 ; i<n; i++)
	{
		if(!isSubSequence(m[i] , s))
			{
				cout << m[i];
				return;
			}
	}
    cout << m[n+1];
}
int main() {
    allBinary(MAX);
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}
















