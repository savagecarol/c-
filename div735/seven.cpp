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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*code*/
ll n , m ,a, b , q , x;
vector<int> reals[2*100001 +5];
vector<int> g[2*100001 +5];
bool live[2*100001 + 5] = {false};


void removefriend(int a, int b)
{
    remove(g[a].begin(),g[a].end(),b);
    remove(g[b].begin(),g[b].end(),a);
}

void addFriend(int a , int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}

void dfs(int source , vector<int> &visit)
{
    visit[source] = true;
    int var = 0;
    for( auto r : g[source])
    {   
        if(r > source && visit[r] == false)
        {
            removefriend(source , r);
            var++;
        }
    }
    if(var!=0) live[source] = false; 
}



int main() 
{
    
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> a >> b;
        addFriend(a , b);

        reals[a].push_back(b);
        reals[b].push_back(a);
        
        live[a] = true;
        live[b] = true;
    }

    cin >> q;

    for(int i = 1 ; i <= q ; i++)
    {
        cin >> x;
        if(x==1)
        {
            cin >> a >> b;
            addFriend(a , b);
        }
        if(x==2)
        {        
            cin >> a >> b;
            removefriend(a , b);
        }
        if(x==3)
        {
            vector<int> visit(n+1 , false);
            memset(live , n+1 , true);
            for(int i = 1 ; i <=n ; i++)
            {
                if(visit[i] == false && live[i] == true)
                    {
                        dfs(i , visit);
                    }
            }

            int ans = 0;
            for(int i = 1 ; i <=n ; i++) if(live[i] == true)ans++;
            cout << ans << endl;

            for(int i = 1;i<=n;i++)
            {
                g[i].clear();
            }
            for(int i = 1; i <=n ; i ++)
            {
                for(int j = 1 ; j <= reals[i].size() ; j++)
                {
                    g[i].push_back(reals[i][j]);
                }
            }

        }
    }

}
