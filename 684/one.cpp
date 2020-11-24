#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, c0,c1,h;
    cin>>n;
    cin>>c0;
    cin>>c1;
    cin>>h;
    string str;
    cin>>str;
    if(c0==c1)
    {
        cout<<c0*n<<endl;
        return ;
    }
    int p=0 ;
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
            l++;
        else
            p++;
    }
    if(c0 < h && c1 < h )
    {
        cout<< (c0*p) + (c1*l) <<endl;
        return ;
    }

    if(c0>c1)
    {
         cout<<(c1*n)+(p*h)<<endl;
         return ;
    }

    else if(c1>c0)
    {
      cout<<(c0*n) +(l*h)<<endl ;
      return ;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}

