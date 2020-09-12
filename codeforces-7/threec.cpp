#include<iostream>
#include<unordered_set>

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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

       int i=0
       int j=1;

       while(i<n && j>=0)
       {
           if(arr[i]>0 && arr[j]<0 && i<j)
           {
               arr[i]=arr[i]-(abs(arr[i]-arr[j]));
               arr[j]=arr[j]-(abs(arr[i]-arr[j]));

           }




       }


    }
    return 0;
}

