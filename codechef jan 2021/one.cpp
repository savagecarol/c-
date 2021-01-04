#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{   
    int n , k , d , x , sum =0;
    cin>>n;
    cin>>k;
    cin>>d;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum = sum +x;
    }
    (sum/k >=  d)? cout << d : cout <<  sum / k;
    cout<< endl;

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