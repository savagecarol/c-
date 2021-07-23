import java.util.*;

public class one
{
    public static void main(String a[])
    {
        Scanner sc = new Scanner(System.in);
        for(int i = 0 ; i < 4; i ++)
        {   
            int p = sc.nextInt();
            int val = p/3;
            int ans = val * 35;

            if(p%3 == 1) ans = ans + 20;
            else if(p%3 == 2) ans = ans + 30;
            System.out.println(ans);
        }
    }
}
