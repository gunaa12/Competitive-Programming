public class Problem {
    public static void main (String args[]) {
        largestPalindromeNumber(3);
    }

    public static void largestPalindromeNumber(int productDigits) {
        int limit = (int)Math.pow(10, productDigits);
        int largestPalindrome = 0;
        for (int x = 0; x < limit; x++) {
            for (int y = 0; y < limit; y++) {
                int product = (x * y);
                if (isPalindromeNumber(product)) {
                    if (product > largestPalindrome) {
                        largestPalindrome = product;
                    }
                }
            }
        }
        System.out.println("The largest palindrome number is: " + largestPalindrome);
    }

    private static boolean isPalindromeNumber (int num) {
        int number = num;
        int reversed = 0;
        while (number != 0) {
            int digit = number % 10;
            reversed = (reversed * 10) + digit;
            number /= 10;
        }
        if (num == reversed) {
            return true;
        }
        return false;
    }
}