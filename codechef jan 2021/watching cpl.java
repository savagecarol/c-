import java.util.*;
import java.lang.*;
import java.io.*;

class code
{
    public static void main(String[] args) 
    {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t--)
        {
            int n = sc.nextInt();
            int k - sc.nextInt();
            int h[] = new int[n];
            LinkedHashSet<Integer> h1 = new LinkedHashSet<Integer>();
            int sum = 0;

            for(int i=0;i<n;i++)
            {
                h[i]=sc.nextInt();
            }

            Arrays.sort(h);

            h1.add(h[n-1]);
            sum = h[n-1];

            int z = -1;
            for(int i=n-2;i>=0;i--)
            {
                LinkedHashSet<Integer> h2 = new LinkedHashSet<Integer>();
                sum = sum + h[i];
                iterator i1 = h1.iterator();
                while(i1.hasNext())
                {
                    int p = (int)(i1.next());
                    h2.add(p);
                    h2.add(h[i]);
                    h2.add(p+h[i]);    
                     
                   if(  (p+h[i]) >=k && (sum - p - h[i])>=k ) 
                   {
                       z= n- i;
                       break;
                   }

                   if( h[i]>= k && (sum - h[i])>=k )
                   {
                    z= n- i;
                    break;
                   }

                }

                if(z!=1)
                {
                    break;
                }

                h1=h2;
            }
            System.out.println(z);


        }

    }
}