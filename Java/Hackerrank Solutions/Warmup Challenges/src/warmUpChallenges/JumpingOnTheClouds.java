/**
 * @author Cahid Alýr
 */
package warmUpChallenges;

public class JumpingOnTheClouds {

	public static void main(String[] args) {

		int[] arr = { 0, 0, 0, 0, 1, 0 };
		System.out.println(jumpingOnClouds(arr));
	}

	
	/**
	 * 		This function takes a description of clouds that will be jumped and returns the
	 * 	number of the jumps that it will take to finish.
	 * 
	 * @param c = an array describes clouds
	 * @return	an integer represent the number of jumps
	 */
	private static int jumpingOnClouds(int[] c) {
		int totalStep = 0;
		int current = 0;

		while (current < c.length - 1) {
			if (current + 2 < c.length && c[current + 2] != 1) {
				current += 2;
			} else { 
				current++;
			}
			totalStep++;
		}
		return totalStep;
	}
}
