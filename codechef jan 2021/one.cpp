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
    int n , k , d ;
    cin>>n;
    cin>>k;
    cin>>d;
   int count = 1;
   while(n%2==0)
   {
        count = count * 2; 
       n = n/2;
   }
      while(k%2==0)
   {
     count = count * 2;  
       k = k/2;
   }

    if(count>=d)
        yes();
    else
        no();
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