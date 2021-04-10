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
void allBinary(ll n)
{
    m[0] = "0";
    queue<string> q;
    q.push("1");
    ll i =0;
    while (n--) {
        string s1 = q.front();
        q.pop();
        i++;
        m[i] = s1;
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }

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

void Subsequence(string input, string output ,  unordered_set<string> &l)
{
    if (input.empty()) {
       { 
           l.insert(output);
        return;
        }
    }
    Subsequence(input.substr(1), output + input[0] , l);
    Subsequence(input.substr(1), output , l);
}
  

void solve()
{
    string s;
	cin >> s;
    unordered_set<string> l;
	ll n = bTD(s);
    Subsequence(s , "" , l);
	for(int i = 0 ; i<n; i++)
	{
        if(l.find(m[i]) == l.end())
        {
				cout <<  m[i];
				return;
		}
	}
    cout << m[n+1];
}

int main() {
    ll t;
    cin >> t;
    allBinary(MAX);
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}


