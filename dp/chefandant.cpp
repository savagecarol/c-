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
        int n;
        cin>>n;

        int m;
        cin>>m;

        ll a[m];
        for (int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        ll x=0, y=0, sum=0;
        if(n==1)
        {
            sort(a,a+m);
            if(a[0]>0)cout<<0<<endl;
            else if(a[m-1]<0) cout<<0<<endl;
            else
            {
                for(int i=0;i<m;i++)
                {
                    if(a[i]>0){x=i;y=m-i;break;}
                }
                while (x>0 && y>0)
                {
                    sum = sum + x+y -1;
                    x --;
                    y --;
                }
                cout<<sum;
            }
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


