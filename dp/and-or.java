import java.uti.*;
import java.lang.*;
import java.io.*;
class codechef{


    public static void main(string[] ar)
    {

        Scanner sc = new Scanner();
        int t = sc.nextInt();
        while(t--!=0)
        {
                int n = sc.nextInt();
                int m = sc.nextInt();

                TreeSet<Integer> h = new TreeSet<Integer>();
                Stack<Integer> s = new Stack<Integer>();

                h.add(0);
                s.add(0);

                int a[] = new int[n];
                int b[] = new int[m];

                for(int i=0;i<n;i++)
                {
                    a[i] = sc.nextInt();
                }

                
                for(int i=0;i<m;i++)
                {
                    b[i] = sc.nextInt();
                }



                while(!s.isEmpty())
                {
                    int x =(int)(s1.pop());
                    for(int i = 0 ;i < n;i++)
                    {
                        int y = a[i];
                        if(!h.contains(x|y)){
                            h.add(x|y);
                            s.push(x|y);
    
                        }
                    }

                    for(int i=0;i<m;i++)
                    {
                        int y = b[i];

                        if(!h.contains(x&y)){
                            h.add(x&y);
                            s.push(x&y);
                        }
                    }
                  
                }
                System.out.println(h.size());
        }




    }


}