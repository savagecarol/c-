#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
  while(t-->0)
  {
      int n,m;
      cin>>n;
      cin>>m;
      if(n/2>m)
         {
            cout<<0<<endl;
            continue;
         }
      cout<<1<<endl;
  }
    return 0;
}

