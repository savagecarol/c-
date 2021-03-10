#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
  int t;
  cin >> t;
  int cc = 1;

  while (t--)
   {
    cout << "Case #" << cc++ << ": ";
    string s;
    cin >> s;

    ll mod = 1e9;

    ll x = 0, y = 0;

    vector<ll> mul = {1};

    for (char c : s) 
    {
      if (c >= '2' && c <= '9')
        	mul.push_back(mul.back()*(c-'0')%mod);
      else if (c == 'E') 
      x = (x+mul.back())%mod;
      else if (c == 'W')
       x = ((x-mul.back())%mod+mod)%mod;
      else if (c == 'S')
       y = (y+mul.back())%mod;
      else if (c == 'N')
       y = ((y-mul.back())%mod+mod)%mod;
      else if (c == '(') 
      continue;
      else if (c == ')')
       mul.pop_back();
      else 
        assert(0);
    }
    cout << x+1 << ' ' << y+1 << endl;
  }
}
