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
void solve()
{

    ll r , c;
    cin >>  r >> c;
    char s[r+2][c+2];
    for(int i = 0 ; i <=r+1 ;i++)
    {
        for(int j = 0 ; j <=c+1 ;j++)
        {
            if(i== 0 || j==0)
            {
                s[i][j] = '.';
            }
            else if(i==r+1 || j==c+1)
                {
                    s[i][j]='.';
                }
            else
                cin >> s[i][j];
        }
    }


    for(int i = 0 ; i <=r+1;i++)
    {
        for(int j = 0 ; j <=c+1;j++)
        {
            if(s[i][j] == 'S')
            {
                if(s[i][j+1] == 'W'||s[i][j-1]== 'W'||s[i+1][j] == 'W'||s[i-1][j] == 'W')
                    {
                        no();
                        return;
                    }
            }
        }
    }

    yes();
    cout << endl;
    for(int i =1; i <=r;i++)
    {
        for(int j = 1;j<=c;j++)
        {
            if(s[i][j] == '.')
                {
                    cout <<'D';
                }
            else
            {
                cout << s[i][j];
            }
        }
        cout << endl;
    }
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