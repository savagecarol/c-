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
vector<ll> a;
void solve()
{

        int n;
        cin >> n;
        set <int> ans;
        int cnt = 1, n1 = n;
        for (int i = 2; i*i <= n; ++i){
            
            while(n % i == 0)
            {
                n /= i;
                cnt *= i;    
                if(ans.find(cnt) == ans.end()){
                    ans.insert(cnt);
                    n1 /= cnt;
                    cnt = 1;
                    
                    if(ans.size() == 2){
                        if(n1 != 1)
                            ans.insert(n1);
                        break;
                    }
                }
 
            }
            
            if(ans.size() >= 2)
                break;
        }        
        if(ans.size() < 3)
            cout << "NO\n";
        else{
            cout << "YES\n";
            for (auto i: ans)
                cout << i << ' ';
            cout << endl;
        }
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}