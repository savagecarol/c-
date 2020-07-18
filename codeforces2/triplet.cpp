#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;

 int p=max(x,y);
    p=max(p,z);
    int count=0;
    if(p==x)
        count++;
    if(p==y)
        count++;
    if(p==z)
        count++;
    if(count>2)
    {cout<<"YES"<<endl<<x<<" "<<y<<" "<<z;}
    else if(count==2)
    {
    int q=min(x,y);
    q=min(q,z);
    cout<<"YES"<<endl<<p<<" "<<q<<" "<<q;
    }
    else
    {cout<<"NO";}
    cout<<endl;
    }



return 0;
}
