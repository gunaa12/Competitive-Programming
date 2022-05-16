package probs;

import java.util.Scanner;
import java.util.Arrays;

public class Prob4 {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int length = input.nextInt();
        int[] arr = new int[length];
        for (int x = 0; x < length; x++) {
            arr[x] = input.nextInt();
        }
        input.close();

        int[] minMax;
        if (arr.length > 100) {
            absInsertSort(arr);
            minMax = bruteForce(Arrays.copyOfRange(arr, arr.length - 100, arr.length));
        }
        else {
            minMax = bruteForce(arr);
        }
        
        // boolean allPos = true, allNeg = true;
        // for (int num: arr) {
        //     if (num < 0) {
        //         allPos = false;
        //     }
        //     else {
        //         allNeg = false;
        //     }
        //     if (allPos && allNeg) {
        //         break;
        //     }
        // }

        // int min = 0, max = 0;
        // if (allPos || allNeg) {
        //     min = arr[0] * arr[1] * arr[2] * arr[3];
        //     max = arr[length - 1] * arr[length - 2] * arr[length - 3] * arr[length - 4];
        // }
        // else {
        //     boolean maxFound = false, minFound = false;
        //     int reverseIndex = 1;
        //     while (!maxFound || !minFound) {
        //         int num = arr[length - reverseIndex] * arr[length - reverseIndex - 1] * arr[length - reverseIndex - 2] * arr[length - reverseIndex - 3];
        //         if (num < 0) {
        //             min = num;
        //             minFound = true;
        //         }
        //         else {
        //             max = num;
        //             maxFound = true;
        //         }
        //         reverseIndex++;
        //     }
            
        // }

        System.out.println(minMax[0]);
        System.out.println(minMax[1]);
    }

    public static void absInsertSort(int[] arr) {
        for (int i = 1; i < arr.length; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && Math.abs(arr[j]) > Math.abs(key)) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    public static int[] bruteForce(int[] arr) {
        int n = arr.length;
        int a = arr[0], b = arr[1], c = arr[2], d = arr[3], e = arr[0], f = arr[1], g = arr[2], h = arr[3];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if (arr[i] * arr[j] * arr[k] * arr[l] > a * b * c * d){
                            a = arr[i]; b = arr[j]; c = arr[k]; d = arr[l];
                        }
                        if (arr[i] * arr[j] * arr[k] * arr[l] < e * f * g * h){
                            e = arr[i]; f = arr[j]; g = arr[k]; h = arr[l];
                        }
                    }
                }
            }
        }
        int[] minMax = {(e * f * g * h) , (a * b * c * d)};
        return minMax;
    }
}