#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int res=0;
        int count=0;
        int i,k;
        for(i=0;i<n;i++)
            cin>>arr[i];

        for( k=0;k<n;k++)
        {
            if(arr[k]==1)
                { i=k;
                    break;}
        }

        for( i=k;i<n;i++)
        {

            if(arr[i]==0)
            {
                count++;
            }
            if(arr[i]==1)
            {
                res+=count;
                count=0;
            }

        }
        cout<<res<<endl;
    }
    return 0;
}
