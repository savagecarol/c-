#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


unordered_set<int> co;


int rec(int n,int m,int a[],int b[] ,int i ,int  val)
{

    if(i>= m && i>=n)
        return co.size(); 
    cout << (a[i]|val)<<endl;
    if( co.find( a[i]|val) == co.end() && i<m)
    {
        val =a[i] | val;
        co.insert(val);
        int l=i+1;
        return rec( n, m,  a , b , l, val);
    }
    if(co.find(b[i] & val)==co.end() && i<n)
    {
        val=a[i] & val;        
        co.insert(val);
        int l=i+1;
        return rec(n,m, a,b,l, val);
    }

    return co.size();
}




void solve()
{       
        int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for (int i=0;i<m;i++)
        {
            cin>>b[i];
        }
    cout<<rec(n,m,a,b,0,0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            solve();
            cout<<endl;
        }
return 0;
}


