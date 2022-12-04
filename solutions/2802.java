import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {

        Scanner scan = new Scanner(System.in);
        long n = scan.nextLong();
        n = 1+(((n-1)*n)/2)+((n*(n-1)*(n-2)*(n-3))/24);
        System.out.println(n);
    }
 
}
