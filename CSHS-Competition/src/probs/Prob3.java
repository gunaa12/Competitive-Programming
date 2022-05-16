package probs;

import java.util.Scanner;

public class Prob3 {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int numOfInputs = input.nextInt(), goldenNum = input.nextInt();
        int[] nums = new int[numOfInputs];
        for (int index = 0; index < numOfInputs; index++)
            nums[index] = input.nextInt();
        input.close();

        int sols = 0;
        for (int i = 0; i < numOfInputs; i++) {
            for (int j = i; j < numOfInputs; j++){
                int sum = 0;
                for (int k = i; k <= j; k++){
                    sum += nums[k]; 
                }
                if (sum == goldenNum)
                    sols++;
            }
        }
        System.out.println(sols);
    }
}