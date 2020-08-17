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
    if(n<=9 && m <=9)
       {
        cout<<1<<" "<<1<<endl;
        continue;
       }
      if(n<=9 && m >9)
       {
        cout<<0<<" "<<1<<endl;
        continue;
       }
    if(n>9 && m <=9)
       {
        cout<<1<<" "<<1<<endl;
        continue;
       }
    int x=n/9;
    int y=m/9;
    if(x>=y)
            {
           if(m%9==0)
        cout<<1<<" "<<y;
        else
            cout<<1<<" "<<y+1;
            }
    else
            {
            if(n%9==0)
        cout<<0<<" "<<x;
            else
         cout<<0<<" "<<x+1;
            }
     cout<<endl;
    }
    return 0;


}
