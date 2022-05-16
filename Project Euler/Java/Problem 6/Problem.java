public class Problem {
    public static void main (String args[]) {
        findDifference(100);
    }

    public static void findDifference(int max) {
        int sum = 0;
        int sumOfSquares = 0;
        for (int x = 1; x <= max; x++) {
            sum += x;
            sumOfSquares += (int)Math.pow(x, 2);
        }
        int squareOfSum = (int)Math.pow(sum, 2);
        int difference = squareOfSum - sumOfSquares;
        System.out.println("The difference is: " + difference);
    }
}