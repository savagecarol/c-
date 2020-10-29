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
        int i;
        for(i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n;i++)
        {
            int k=arr[i];
            int p=0;

            for(int j=i+1;j<n;j++)
            {
                if(k>arr[j])
                    k=k+arr[j];
                else
                {   p=1;
                    break;
                }
            }

                if(p!=1)
                for(int j=i-1;j>=0;j--)
            {

                  if(k>arr[j])
                    k=k+arr[j];
                else
                    break;

            }

            if(p==0)
            {

            }












        }





    }
    return 0;
}

