#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
    {int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
int c[n];
    int i=0,j=n-1,x=0;

    while(i<n-1)
    {

    if(arr[i]==arr[j])
    {
        c[x++]=arr[i];
        c[x++]=arr[j];
        i++;
        j--;
    }
    if(arr[i]>arr[j])
    {
    c[x++]=arr[j];
    j--;
    }
    if(arr[i]<arr[j])
    {
    c[x++]=arr[i];
    i++;
    }

    }
    int count=0;
        for(int i=1;i<n;i++)
        {
            if(c[i-1]>=c[i])
                count++;
        }

        cout<<count<<endl;



    }
    return 0;
}
