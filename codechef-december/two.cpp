#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int arr[1000][1000] = {0};
void custom()
{
            int count = 0;
          for(int i=0;i<1000 ; i++)
        {
              if( (1+i+1) %2==0) 
              {

                  count = count + 1;  
                  arr[i][0]=count;
              }
              else
              {
                  arr[i][0] = count;
              }        
        }


        for(int i= 1;i<1000;i++)
        {
            ll k = 1;
            for(int j=1;j<k;j++)
                arr[i][j] = arr[i][j-1] + arr[i-1][j-1];
            k++;
            if(k == 1000)
                    break;
        }


        for(int i=0 ; i<10 ;i++)
        {
            for(int j=0;j<10;j++)
            {
                cout<< arr[i][j]<<" ";   
            }
            cout<<endl;
        }
 
}




int main()
{
    custom();
    ll t;
    cin>>t;

    while(t--)
    {
        ll a, b;
        cin>>a;
        cin>>b;

    if(b>a)
    { 
           cout << arr[b][a] << endl;
    }
    else
    {
        cout<<arr[a][b] << endl;
    }
        
    }            
    return 0;
}