#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k;
        cin>>n;
        cin>>k;

        int x;
        int sum =0,count=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x<=k && k%x==0)
            {
                    sum+=k/x;
                    count++;
            }

        }
            if(count>0)
            cout<<sum-count<<endl;
            else
                cout<<-1<<endl;
    }
    return 0;
}
