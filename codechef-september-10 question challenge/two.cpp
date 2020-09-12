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
       int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int count=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(arr[i][j]!= ((i*n)+(j+1)))
               {
                      cout<<endl;

                   cout<<arr[i][j];
                for(int p=0;p<=i;p++)
                 {
                    for(int q=p+1;q<=i;q++)
                    {
                    int temp=arr[p][q];
                    arr[p][q]=arr[q][p];
                    arr[q][p]=temp;
                    }
                 }
                   cout<<endl;

                    for(int i=0;i<n;i++)
                     {
                     for(int j=0;j<n;j++)
                      {
                    cout<<arr[i][j]<<" ";
                      }
                    cout<<endl;
                    }
                count++;
                break;

            }
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<count<<endl;


    }
    return 0;
}

