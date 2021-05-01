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
ll nott(ll x){
    if(x==0)
        return 1;
    ll k=x,ct=0;
    while(k){
        k/=2;
        ct++;
    }
    if(1<<(ct-1)==x)
        return x-1;
    return (1<<(ct))-x-1;
}


void solve(ll tt)
{
   
    map<ll,ll> m;
    string s,t;
    cin>>s>>t;
    ll v1=0,v2=0;
    for(auto it:s){
        v1*=2;
        v1+=it-'0';
    }
    for(auto it:t){
        v2*=2;
        v2+=it-'0';
    }
    if(v1==v2)
    {
        cout<<"Case #"<<tt<<": 0"<<endl;
          return;
    }
    queue<pair<ll,ll>> q;
    q.push({v1,0});
    while(!q.empty()){
        pair<ll,ll> y=q.front();
        q.pop();
        if(m[y.first]!=0ll && m[y.first]<y.second)
            continue;
        if(y.first>(1<<16))
            continue;
        if(m[v2]!=0 && m[v2]<y.second)
            continue;
        m[y.first]=y.second;
        q.push({y.first*2,y.second+1});
        q.push({nott(y.first),y.second+1});
    }
    if(m[v2]!=0)
        cout<<"Case #"<<tt<<": "<<m[v2]<<endl;
    else
        cout<<"Case #"<<tt<<": IMPOSSIBLE"<<endl;
}

int main()
{
    ll test;
    cin>>test;
    for(ll tt=1;tt<=test;tt++)
        {
	    solve(tt);
     }
	return 0;
}