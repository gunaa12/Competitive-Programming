import java.util.Scanner;

public class Main {
    public static int maxNum = 0;
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        System.out.print("Square Size: ");
        int squareSize = input.nextInt();
        System.out.print("Nums in adjacent: ");
        int numsInAdjacent = input.nextInt();
        int[][] nums = new int[squareSize][squareSize];
        for (int row = 0; row < squareSize; row++) {
            for (int col = 0; col < squareSize; col++) {
                nums[row][col] = input.nextInt();
            }
        }
        input.close();
        maxHor(nums, squareSize, numsInAdjacent); maxVert(nums, squareSize, numsInAdjacent); maxDiag(nums, squareSize, numsInAdjacent);
        System.out.println(maxNum);
    }

    public static void maxHor(int[][] nums, int squareSize, int numsInAdjacent) {
        for (int row = 0; row < squareSize; row++) {
            for (int col = 0; col < squareSize - numsInAdjacent; col++) {
                int prod = 1;
                for (int x = 0; x < numsInAdjacent; x++) {
                    prod *= nums[row][col + x];
                }
                if (prod > maxNum) {
                    maxNum = prod;
                }
            }
        }
    }

    public static void maxVert(int[][] nums, int squareSize, int numsInAdjacent) {
        for (int col = 0; col < squareSize; col++) {
            for (int row = 0; row < squareSize - numsInAdjacent; row++) {
                int prod = 1;
                for (int x = 0; x < numsInAdjacent; x++) {
                    prod *= nums[row + x][col];
                }
                if (prod > maxNum) {
                    maxNum = prod;
                }
            }
        }
    }

    public static void maxDiag(int[][] nums, int squareSize, int numsInAdjacent) {
        for (int row = 0; row < squareSize - numsInAdjacent; row++) {
            for (int col = 0; col < squareSize - numsInAdjacent; col++) {
                int prod = 1;
                for (int x = 0; x < numsInAdjacent; x++) {
                    prod *= nums[row + x][col + x];
                }
                if (prod > maxNum) {
                    maxNum = prod;
                }
            }
        }

        for (int row = 0; row < squareSize - numsInAdjacent; row++) {
            for (int col = squareSize - 1; col > numsInAdjacent - 1; col--) {
                int prod = 1;
                for (int x = 0; x < numsInAdjacent; x++) {
                    prod *= nums[row + x][col - x];
                }
                if (prod > maxNum) {
                    maxNum = prod;
                }
            }
        }
    }
}