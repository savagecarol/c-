#include<iostream>
#include<bits/stdc++.h>
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
            cin>>arr[i];
        int player=0;
        for(int i=0;i<n-1;i++)
        {
        if(arr[i]==1 && i==0)
           {player=1;
           continue;
           }
         if(arr[i]==1 )
             {
                if(player==0)
                    player=1;
                else
                    player=0;

                continue;
             }

               if(player==0)
                    player=1;
                else
                    player=0;

                continue;
          if(arr[i+1]!=1)
         {
             if(player==0)
                    player=1;
                else
                    player=0;

                continue;

         }


        }

    if(player==0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    }
 return 0;
}
