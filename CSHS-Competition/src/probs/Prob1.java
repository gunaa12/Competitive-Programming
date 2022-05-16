package probs;


// Imports
import java.util.Scanner;


public class Prob1 {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt(), num2 = input.nextInt();
        char choice = input.next().charAt(0);
        input.close();
        System.out.println((choice == 'A') ? (num1 + num2): (num1 * num2));
    }
}