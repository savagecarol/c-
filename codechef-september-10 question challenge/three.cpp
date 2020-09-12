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


    int eq=0;
    int sm=0;
    int gt=0;

    for(int i=1;i<n;i++)

     {
         if(arr[i-1]==arr[i])
            eq++;
         else if(arr[i-1]<arr[i])
            sm++;
         else if(arr[i-1]>arr[i])
            gt++;

     }

    if(eq==n-1)
    {
        cout<<1<<" "<<1<<endl;
        continue;

    }
    else if(sm==n-1)
    {
        cout<<1<<" "<<1<<endl;
        continue;

    }

    else if(gt==n-1)
    {
        cout<<n<<" "<<n<<endl;
        continue;

    }




        int mini=INT_MAX;
        int maxx=0;


        for(int i=0;i<n;i++)
        {
            unordered_map <int,int> s;

            for(int j=0;j<n;j++)
            {
                if(i>j && arr[j]>arr[i])
                {
                     int k=(i-j)/(arr[j]-arr[i]);
                     s[k]++;

                }
                else if(i<j && arr[i]>arr[j])
                {
                    int k=(j-i)/(arr[i]-arr[j]);
                    s[k]++;
                }
            }

            if(s.size()==0)
                mini=0;


            unordered_map<int , int>:: iterator itr;

         for (itr = s.begin(); itr != s.end(); itr++)
            {
                cout<<itr->second<<endl;
             if(itr->second > maxx)
                         maxx=itr->second ;

             if(itr->second < mini)
                        mini= itr->second ;
            }

        }

        cout<<mini<<" "<<maxx+1<<endl;

    }


}
