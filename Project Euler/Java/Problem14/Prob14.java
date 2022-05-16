import java.util.Stack;

public class Prob14 {
    public static void main(String args[]) {
		Stack<String> stack = new Stack<String>();
		int longestChainNum = 1;
		int chainLength = 0;
		for (int i = 2; i < 1000000; i++) {
			int tempChainLength = chainLength(i);
			if (tempChainLength > chainLength) {
				chainLength = tempChainLength;
				longestChainNum = i;
			}
			stack.clear();
		}
		System.out.println(longestChainNum);
	}
	
	public static int chainLength(int num) {
		if (num == 1) {
			return 1;
		}
		else if (num % 2 == 0) {
			return (1 + chainLength(num / 2));
		}
		else {
			return (1 + chainLength((3 * num) + 1));
		}
	}
}