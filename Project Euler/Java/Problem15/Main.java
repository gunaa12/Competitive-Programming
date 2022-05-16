import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int width = input.nextInt();
        int height = input.nextInt();
        input.close();
        //need width amount of rights and height amount of downs
        BigInteger answer = factorial(width + height).divide((factorial(width).multiply(factorial(height))));
        System.out.println(answer);
    }

    public static BigInteger factorial (int num) {
        BigInteger ans = BigInteger.valueOf(1);
        if (num == 0) {
            return ans;
        }
        for (int x = 2; x <= num; x++) {
            ans = ans.multiply(BigInteger.valueOf(x));
        }
        return ans;
    }
}