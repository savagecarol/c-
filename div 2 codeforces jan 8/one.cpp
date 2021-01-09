#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve()
{   
    int n ;
    cin >> n;

    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    if(n==1)
        {
            cout<<9;
            return;
        }

      if(n==2)
        {
            cout<<98;
            return;
        }

        if(n==3)
        {
            cout<<989;
            return;
        }
        cout<<989;
    for(int i=3;i<n;i++)
     {
                cout<<a[(i-3)%10];
     }
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

