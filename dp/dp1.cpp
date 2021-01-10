#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int memo[300] ;

void compute(int n)
{
for(int i=0;i<=n+1;i++)
    memo[i]=-1;
}
int fib( int n )
{
    if(memo[n] == -1 )
    {
        int res;
        if(n==1 || n ==0)
            res = n;
        else
            res = fib(n-1 ) + fib(n-2 );
        memo[n] = res;
   }
    return memo[n];
}

void solve()
{   
    int n;
    cin >>n;
    compute(n);
    cout << fib(n) << endl;;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        {
            solve();
            cout<<endl;
        }
return 0;
}


