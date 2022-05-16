import java.util.ArrayList;

public class problem {

    public static void main(String[] args) {
        int sum = 0;
        int num1 = 1;
        int num2 = 2;
        while (num1 < 4000000) {
            if (num1%2 == 0) {
                sum += num1;
            }
            int z = num1 + num2;
            num1 = num2;
            num2 = z;
        }
        System.out.println(sum);
    }
}