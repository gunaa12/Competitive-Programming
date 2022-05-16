public class Problem {
    public static void main(String args[]) {
        boolean[] prime = findPrimes(2000000);
        int sum = 0;
        for (int index = 1; index < prime.length; index++) {
            if (prime[index] == true) {
                sum += index;
            }
        }
        System.out.println(sum);
    }

    private static boolean[] findPrimes(int n) {
        boolean[] prime = new boolean[n];
        for (int i = 0; i < n; i++) {
            prime[i] = true;
        }

        for (int p = 2; p * p < n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i < n; i += p) {
                    prime[i] = false;
                }
            }
        }

        return prime;
    }
}