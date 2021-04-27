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

#define FOR(i,x,y) for(int i=(x);i<=(y);++i)
#define REP(i,x) FOR(i,0,(x)-1)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
void solve()
{

    int m, s;
	cin >> m >> s;
	if(s == 0 && m == 1)
	{
		cout << "0 0\n";
		return;
	}
	if(s == 0 || s > 9 * m)
	{
		cout << "-1 -1\n";
		return;
	}

    int s1 = s, m1 = m;
	FOR(i, 1, 9)
	{
		if(s1 - i <= 9 * (m1 - 1))
		{
			cout << i;
			s1 -= i;
			m1--;
			break;
		}
	}
	REP(i, m - 1)
	{
		FOR(i, 0, 9)
		{
			if(s1 - i <= 9 * (m1 - 1))
			{
				cout << i;
				s1 -= i;
				m1--;
				break;
			}
		}
	}
	
	cout << " ";
	s1 = s;
	m1 = m;
	REP(i, m)
	{
		if(s1 >= 9)
		{
			cout << "9";
			s1 -= 9;
		}
		else
		{
			cout << s1;
			s1 = 0;
		}
	}
	cout << "\n";






}
int main()
{
    ll t;
    t=1;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}