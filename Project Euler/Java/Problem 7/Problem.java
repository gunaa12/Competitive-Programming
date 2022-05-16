public class Problem {
    public static void main (String args[]) {
        primeNumber(10001);
    }

    public static void primeNumber(int index) {
        int[] primeNums = new int[index];
        int x = 2;
        int currentIndex = 0;
        while (primeNums[index - 1] == 0) {
            if (isPrime(x)) {
                primeNums[currentIndex] = x;
                currentIndex++;
            }
            x++;
        }
        System.out.println("The " + index + "th prime number is: " + primeNums[index - 1]);
    }

    public static boolean isPrime(int number) {
        boolean prime = true;
        for (int x = 0; x < number; x++) {
            if (x != 0 && x != 1 && number % x == 0) {
                prime = false;    
            }
        }
        return prime;
    }
}