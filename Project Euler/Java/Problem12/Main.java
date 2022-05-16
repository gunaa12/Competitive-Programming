package Java.Problem12;

public class Main {
    public static void main(String args[]) {
        int triangleNum = 0;
        loop:
        for (int i = 1; ; i++) {
            triangleNum += i;
            if (numOfFactors(triangleNum) > 500) {
                System.out.println(triangleNum);
                break loop;
            }
        }
    }

    public static int numOfFactors(int num) {
        int numOfDiv = 1;
        for (int div = 2; div < (int)Math.sqrt(num); div++) {
            if (num % div == 0) {
                numOfDiv += 2;
            }
        }
        if (Math.pow((int)Math.sqrt(num), 2) == num) {
            numOfDiv++;
        }
        return numOfDiv;
    }
}