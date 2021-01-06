#include<bits/stdc++.h>
#define ll long  long int 
#define M 1000000007
using namespace std;
void yes()
{
    cout << "YES" << endl;
}



void no()
{
    cout << "NO" << endl;
}
void solve()
{   
    int n ;
    cin>>n;
    int arr[n];
   
   int k ;
   cin >> k;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxx = 0;
    int sum = 0 ;
    for(int i=0;i<n;i++)
    {
        maxx+=(arr[i] % k==0) ?  (arr[i] / k) : ((arr[i] / k)+1);
        sum += arr[i];
    }

    cout<<  sum / k <<" "<< maxx << endl;
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