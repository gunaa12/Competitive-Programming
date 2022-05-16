//Errors: 7
import java.util.Scanner;

public class Main {
    public static void main(String args[]) throws Exception {
        Scanner input = new Scanner(System.in); // not this line
       
        int operation;
        double firstNum;
        double secondNum;

        while (true) {
            System.out.println("Welcome. Would you like to: " // not these lines
                +"\n1) add"
                +"\n2) subtract"
                +"\n3) multiply"
                +"\n4) divide"
                +"\n5) exponent?");

            operation = input.nextInt(); // not this line

            if (operation == 1) {
                System.out.println("Enter first number");
                firstNum = input.nextDouble();
                System.out.println("Enter second number");
                secondNum = input.nextDouble();

                System.out.println("Sum: " + (firstNum + secondNum));
            }
            else if (operation == 2) {
                System.out.println("Enter first number");
                firstNum = input.nextDouble();
                System.out.println("Enter second number");
                secondNum = input.nextDouble();

                System.out.println("Difference: " + (firstNum - secondNum));
            }
            else if (operation == 3) {
                System.out.println("Enter first number");
                firstNum = input.nextDouble();
                System.out.println("Enter second number");
                secondNum = input.nextDouble();

                System.out.println("Product: " + (firstNum * secondNum));
            }
            else if (operation == 4) {
                System.out.println("Enter first number");
                firstNum = input.nextDouble();
                System.out.println("Enter second number");
                secondNum = input.nextDouble();

                System.out.println("Quotient: " + (firstNum / secondNum));
            }
            else if (operation == 5) {
                System.out.println("Enter base");
                firstNum = input.nextDouble();
                System.out.println("Enter exponent");
                secondNum = input.nextDouble();

                System.out.println("Result: " + Math.pow(firstNum, secondNum)); // not this line
            }
            else {
                System.out.println("Please enter a valid operation");
            }
        //implement the other operations
        }
    }
}