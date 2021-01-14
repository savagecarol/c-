#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



int dp[100][100];

void pl(int n , int m)
{
    

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j] = -1;           
        }
    }
 
}

int path(int n , int m)
{


    if(dp[n][m]==-1)
    {
        if(n== 1&& m==1 )
            return dp[n][m];
        if(n== 1 || m == 1 )
            return 1;
        dp[n][m] = path(n-1,m) + path(n,m-1) ;
    }
    return dp[n][m];
}

int NumberOfPath(int n , int m){
     
    pl(n,m);
    return path(n,m);
    
}

void solve()
{       
        int n;
        cin>>n;

        int m;
        cin>>m;
        cout << NumberOfPath(n ,m);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        {
            solve();
            cout << endl;
        }
return 0;
}

