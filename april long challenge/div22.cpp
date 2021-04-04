/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve()
{
    int n;
    cin >> n;
    string a;
    string b;
    cin >> a;
    cin >> b;

    string d=a;
    string c=a;
   

    unordered_set<int> m;

    int zero =0;
    int one = 0;
    if(a[0] == '1')
        one++;
    else
        zero++;

    for(int i = 0 ; i < n ; i++)
    {
        if(c[i] == '1')
            c[i] = '0';
        else
            c[i] = '1';        
    }


    for(int i = 1 ; i <n ; i++)
    {
    if(a[i] == '1')
         one++;
    else
        zero++;
    
        if(one == zero)
            m.insert(i);
    }

    bool reverse = false;
    for(int i = n-1; i>=0 ; i--)
    {

        if(reverse == false)
        {
        if(d[i] != b[i])
         {
            if(m.find(i) == m.end())
                { 
                    no();
                    return;
                }
            else
            {
                if(d[i] == b[i])
                    continue;    
                else
                {   
                    reverse = true;
                }
            }
         }
        }
        else
        {
        if(c[i] != b[i])
        {
            if(m.find(i) == m.end())
                { 
                    no();
                    return;
                }
            else
            {
                if(c[i] == b[i])
                    continue;    
                else
                {   
                    reverse = false;
                }
            }
        }
        }
}
 yes();
}

int main()
 {
    ll t;
    cin >> t;
     while(t--)
     {
            solve();
            cout << endl;
    }
            return 0 ;
}