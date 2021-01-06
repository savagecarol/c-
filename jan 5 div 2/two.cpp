#include<bits/stdc++.h>
#define ll long  long int 
#define M 1000000007
using namespace std;

void solve()
{   
    int n ;
    cin>>n;
    int arr[n];
   
   int k ;
   cin >> k;
    
    deque<int> dq;
    int x;

    for(int i=0;i<n;i++)
    {
        cin>>x;
            dq.push_back(x);
    }

    ll sum = 0;
   

    while(!dq.empty())
    {
        int val  = dq.front();
        sum = sum + val ;
        if(val % k == 0)
        {
        dq.push_back(val/k);
        dq.push_back(val/k);    
        }
        else
        {
            dq.pop_front();
            break;
        }
        dq.pop_front();
    }
    while(!dq.empty())
    {
        sum = sum + dq.front();
        dq.pop_front();
    }

    cout<< sum << endl;
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