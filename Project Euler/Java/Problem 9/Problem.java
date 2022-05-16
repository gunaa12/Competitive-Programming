public class Problem {
    public static void main(String args[]) {
        outerloop:
        for (int a = 1; a < 999; a++) {
            for (int b = 1; b < 999; b++) {
                for (int c = 1; c < 999; c++) {
                    if ((a + b + c) == 1000) {
                        if (isTriplet(a, b, c)) {
                            System.out.println("A: " + a + " B: " + b + " C: " + c);
                            break outerloop;
                        }
                    }
                }
            }
        }
    }

    private static boolean isTriplet(int a, int b, int c) {
        if ((Math.pow(a, 2) + Math.pow(b, 2)) == Math.pow(c, 2))
            return true;
        return false;
    }
}