#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void yes()
{
    cout<<"YES"<<endl;

}

void no()
{
    cout<<"NO"<<endl;
    
}


void solve()
{   
    ll n;
    cin>>n;
    ll arr[n];
    ll one = 0,two = 0;
    ll sum = 0 ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        (arr[i]==1)? one++ : two++;
        sum = sum + arr[i];
    }
    if(sum%2==0)
    {
       if(two%2!=0 && one == 0)
            no();
        else
        {
            yes();
        }
        
    }    
    else
    {
        no();
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