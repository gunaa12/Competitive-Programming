package probs;


// Imports
import java.util.Scanner;


public class Prob2 {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), x1 = input.nextInt(), y1 = input.nextInt(), x2 = input.nextInt(), y2 = input.nextInt();
        input.close();
        System.out.println(((n * n) - ((x2 - x1) * (y2 - y1))));
    }
}