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
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

        int count = 0;
        vector<int> v;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i] < arr[i+1] && arr[i] < arr[i-1])
                    v.push_back(i);

        if(arr[i] > arr[i+1] && arr[i] > arr[i-1])
                      v.push_back(i);
    }
    cout<<v.size();
    if(v.size() == 0)
        {
            cout<<0;
             return;
        }

    if(v.size() == 1)
        {
            cout<<1;
             return;
        }

     if(v.size() == 2)
    {
            if(v[1] - v[0] == 1)
                cout<<0;
            else
                cout<<1;
    }
  
        if(v.size()==3)
            {
                if(v[2]-v[1]==1 && v[1]-v[0]==1)
              {      cout<<0;
                    return;
              }
            }

        else
        {
            bool val = true;
            int vvv = 0;
            for(int i=0;i<v.size()-2;i++)
            {

                     if(v[i+2]-v[i+1]==1 && v[i+1]-v[i]==1)
                        {
                            cout<<v.size()-3;
                            val = false;
                        }
                     else if(v[i+2]-v[i+1]==1 )
                        {
                           vvv++;
                           val = false;
                        }
            }
            if(val)
            {
                v.size
            }
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

