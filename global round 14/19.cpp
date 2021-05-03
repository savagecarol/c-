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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */
 
void solve()
{
    int n;
    cin >> n;   
    string s;
    cin >> s;
 
    vector<pair<int , int>> ans;
    for(int i = 0 ; i < n ;i++)
    {
        int l = 0 , r = 0 , u = 0 , d = 0;
        for(int  j = i;j< n;j++ )
            {
                if(s[j] == 'L')
                    l++;
                if(s[j] == 'R')
                    r++;
                if(s[j] == 'U') 
                    u++;
                if(s[j] == 'D')
                    d++;
 
                if(l== r &&  u==d )
                    {
                        ans.push_back({i , j});
                    }
            }   
    }
 
    if(ans.size()==0)
        cout << -1;
    else
        {
            int temp = INT_MAX;
            int res = 0;
            for(int i = 0 ; i < ans.size();i++)
                {   
                    if(ans[i].second - ans[i].first < temp )
                    {
                        temp = ans[i].second - ans[i].first ;
                        res = i;
                    }
                }
                cout << ans[res].first + 1 << " " << ans[res].second + 1;
        }
 
 
}
int main() 
{	
	int t;
	cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}