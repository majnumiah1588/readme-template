import java.util.*;
public class CF{
    //public static int even=0,odd=0;
    public static void main(String [] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int even = 0;
            int odd = 0;
            int n = in.nextInt();
            int [] arr = new int [n];
            for(int i=0; i<n; i++){
                arr[i] = in.nextInt();
            }
            for(int i=0; i<n; i++){
                if(arr[i]%2==0)
                    even +=arr[i];
                else
                    odd+=arr[i];
            }
            if(even>odd) {
                System.out.println("YES");
            }
              else{
                    System.out.println("NO");
                }
            }
        }
}