#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;

    if(n==1)
        {
        cout<<1;
        return;
        }

      if(n==2)
        {
        cout<<-1;
        return;
        }


    if( n && (!(n&(n-1))) )
        {cout<<-1;
        return;}


    if(n==3)
        {
        cout<<2<<" "<<3<<" "<<1;
        return;
        }


    if(n>=5)
    {

        cout<<2<<" "<<3<<" "<<1<<" ";

        for(int i=4;i<=n;)
        {
            if( i && (!(i&(i-1))) )
               {
                cout<<i+1<<" "<<i<<" ";
                i=i+2;
               }

            else
            {
                cout<<i<<" ";
                i++;
            }

        }
        return;
    }

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

