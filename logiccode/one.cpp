#include<bitrs/stdc++.h>
using namespace std;


int count=0;

solve(int arr[],int n,int i,int j,int k)
{
            j=j+1;
            k=k+2;

            if(arr[i]==arr[j] &&  (arr[i]==arr[k])  )
            {
                count++;
                return 0;
            }

            else if(arr[i]==arr[j])
            {
                count++;
                k=j;
                i=j;
                return 0;
            }

            else if(arr[i]==arr[k])
            {
                count++;
                j=k;
                i=k;
                continue;
            }

            else
            {
                break;
            }

        cout<<count<<endl;

}

int solver(int arr[],int n,int i,int j,int k)
{

 return max(solve(arr[],int n,i,j,k),solve(arr[],int n,i,j,k));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[n];
        int i,j,k;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count=solver(arr[],n,0,1,2);
    }

}
