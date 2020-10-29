#include<bitrs/stdc++.h>
using namespace std;


bool arr[n][m];
string str;
int solveMaze(int i,int j)
{

    if(i== n-1 && j== m-1)
    {

    }

    if(isSafe(i,j)==true)
        {


        }

}
















int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(t--)
        {
            int n,m;
            cin>>n;
            cin>>m;

            int i=0,j=0,k;
            for(k=0;k<(n*m);k++)
            {
                if(j==m)
                {
                    i++;
                    j=0;
                }
                cin>>arr[i][j];
                j++;

            }

           cin>>str;
           if(n==1 && m==1)
           {
              if(str[0]== str[0][0])
              {
                  cout<<0<<endl;
                  continue;
              }
              cout<<1<<endl;
              continue;
           }

           int k=solveMaze(0,0);
           cout<<k<<endl;

        }
    }

}
