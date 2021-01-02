#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(int n1 , int n2 )
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}



int small(vector<int> v) {
    unordered_set<int> s;
  for (int i : v) {
    s.insert(i);
  }
  for (int i = 1; i <=v.size(); i++) {
    if (s.find(i) == s.end()) {
      return i;
    }
  }
  return v.size() + 1;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> a;
        for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    a.push_back(gcd(arr[i],arr[j])); 
                }
            }
            cout<< small(a) << endl; 
    }
    return 0;
}





