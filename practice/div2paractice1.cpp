/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
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

/* code */
void solve()
    {
        string s;
        cin >> s;
        ll n = s.length();

        string a = "(";
        string b = "(";
        string c = "(";
        string d = "(";

        char x = s[0];
        char y , z ; 
         if(x == 'A')
         {
             y = 'B';
             z = 'C';
         }
         else if(x == 'B')
         {
            y = 'A';
            z = 'C';
         }
         else
         {
            y = 'A';
            z = 'B';
         }
        for(ll i = 1; i < n; i++)
        {
            if(s[i] == x)
            {
                a = a + "(";
                b = b + "(";
                c = c+ "(";
                d = d + "(";
                continue;
            }
            else if(s[i] == y)
            {
                a = a + "(";
                b = b + ")";
                c = c + "(";
                d = d + ")";
                continue;
            }
            else if(s[i] == z)
            {
                a = a + ")";
                b = b + "(";
                c = c + "(";
                d = d + ")";
                continue;
            }
        }

    stack<char> l ;
    stack<char> m ;
    stack<char> o ;
    stack<char> p;

    bool one =true, two = true, three = true, four = true;
    for(ll i = 0 ; i < n; i++)
        {
            if(a[i] == '(' && one == true)
               l.push(a[i]);

            if(l.empty()) 
                one = false;  

            if(a[i] == ')' && one == true)
                l.pop();



            if(b[i] == '(' && two == true)
               m.push(b[i]);

            if(m.empty()) 
                two = false;  

            if(b[i] == ')' && two == true)
                m.pop();

    


            if(c[i] == '(' && three == true)
               o.push(c[i]);

            if(o.empty()) 
                three = false;  

            if(c[i] == ')' && three == true)
                o.pop();




            if(d[i] == '(' && four == true)
               p.push(d[i]);

            if(p.empty()) 
                four = false;  

            if(d[i] == ')' && four == true)
                p.pop();

        }

     if(l.empty() && one == true)
        {
             yes();
        }   
    else if(m.empty() && two == true)
          {
             yes();
        }  
    else if(o.empty() && three == true)
          {
             yes();
        }  
    else if(p.empty() && four == true)
          {
             yes();
        }  
    else
        no();

}
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}