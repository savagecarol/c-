#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=0;l<=t;l++)
    {
        int n;
        cin>>n;
        int arr[n][n];
        int a[(2*n)-1]={0};
        int k=n-1;
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>arr[i][j];
                    if(i==j)
                    {
                        a[k]+=arr[i][j];
                    }
                    else if(i<j)
                    {
                        a[k+(j-i)]+=arr[i][j];

                    }
                    else if(i>j)
                    {
                        a[k-(i-j)]+=arr[i][j];

                    }
                }
            }

        int minn=0;
        for(int i=0;i<(2*n)-1;i++)
        {   cout<<a[i]<<" ";
            if( a[i]>=minn)
                minn=a[i];
        }
        cout<<endl;
        cout<<"Case #"<<(l+1)<<": "<<minn<<endl;
    }
}
