#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {

        string s;
        cin>>s;
        string a="KICK";
        string b="START";
        int n=s.length();
        int p=0;
        int q=0;
        vector<bool> x;
        for(int i=0;i<(n-4)+1;)
        {

                 if(a==s.substr(i,4))
                 {

                     x.push_back(true);
                     p++;
                     i=i+4;
                 }
                 else if(b==s.substr(i,5))
                 {

                     x.push_back(false);
                     q++;
                     i=i+5;
                 }
                 else
                 {
                     i++;
                 }
        }
         int sum=0;
            if(p==0 || q==0)
                {
                 cout<<"Case #"<<j<<":"<<" "<<sum<<endl;
                 continue;
                }

          for ( auto it = x.rbegin(); it != x.rend(); it++)
                  {
                      if( *it == true)
                        p--;
                    else
                        sum=sum+p;
                  }
        cout<<"Case #"<<j<<":"<<" "<<sum<<endl;
    }
    return 0;
    }
