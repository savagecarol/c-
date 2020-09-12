#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[4*n];
        for(int i=0;i<4*n;i++)
        {
        if(i%4==0 || i%4==3)
            arr[i]=1;
        else
            arr[i]=0;
        }
        for(int i=n;i>0;i--)
        {
        arr[(4*n)-i]=0;
        }
       for(int i=0;i<4*n;i=i+4)
       {
           if(arr[i]==0 && arr[i+1]==0 && arr[i+2]==0 && arr[i+3]==0)
            cout<<0;
            if(arr[i]==1 && arr[i+1]==0 && arr[i+2]==0 && arr[i+3]==0)
            cout<<8;
            if(arr[i]==1 && arr[i+1]==0 && arr[i+2]==0 && arr[i+3]==1)
            cout<<9;
       }
       cout<<endl;
    }
    return 0;
}
