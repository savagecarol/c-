#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




void yes()
{
    cout << "YES" << endl; 
}

void no()
{
    cout << "NO" << endl; 
}




int gcd( int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
 int  lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}





void solve()
{   

    string s1 , s2;
    cin >> s1;
    cin >> s2;

    ll n , m;

    
    n = s1.length();
    m = s2.length();


    int k = lcm(n, m);
    int p = k/n;
    int q = k/m;

    string var1 = "";
    string var2 = "";

    for(int i=0; i<p; i++)
        var1 = var1 + s1;
       for(int i=0; i<q; i++)
        var2 = var2 + s2;

    if(var1 == var2)
        cout << var1;
    
    else
        cout << -1;

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        {
            solve();
            cout << endl;       
        }
return 0;
}

