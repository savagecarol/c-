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

    
        map <pair<int, int>, int> mp;
        mp[{0,0}] = -1;
        int x = 0, y = 0;
        int pos1 = -1000, pos2 = 1e8;
 
        for(int  j = 0 ;j< n;j++ )
            {
                if(s[j] == 'L')
                    x--;
                if(s[j] == 'R')
                    x++;
                if(s[j] == 'U') 
                    y++;
                if(s[j] == 'D')
                    y--;

                 if(mp.find({x,y}) != mp.end())
                 {
                        int l = mp[{x,y}];
                        l++;
                         int r = j;
                      if((r-l+1) < (pos2-pos1 + 1))
                        {
                        pos1 = l;
                        pos2 = r;
                    }            
                }
                    mp[{x,y}] = j;
            }
                    if(pos1==-1000 and pos2==1e8){
                            cout << "-1";
                                            }
        else{
            cout << (pos1+1) << ' ' << (pos2+1);
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