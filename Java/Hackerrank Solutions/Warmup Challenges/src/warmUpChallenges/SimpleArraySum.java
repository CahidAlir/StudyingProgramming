package warmUpChallenges;

public class SimpleArraySum {
	
	public static void main(String[] args) {
		int[] ar = {1,2,3};
		System.out.println(simpleArraySum(ar));
	}
	
	static int simpleArraySum(int[] ar) {
       int sum = 0;
       for(int x :ar) {
           sum += x; 
       }
       return sum;
	}
}