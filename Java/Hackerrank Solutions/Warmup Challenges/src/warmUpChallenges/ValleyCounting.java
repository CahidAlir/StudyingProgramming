/**
 * @author Cahid Alýr
 */
package warmUpChallenges;

public class ValleyCounting {
	
	public static void main(String[] args) {
		
		String s = "UDDDUDUU";
		System.out.println(countingValleys(8, s));
	}
	
	
	/**		This function takes the number of the steps and the description of the path and
	 * 	returns the number of valleys on the path.For example:
	 * 	n = 8 steps
	 * 	s = "UDDDUDUU" the 'U' means up, 'D' means down
	 * 
	 * 	There is 1 valley.
	 * 
	 * @param n =  the number of steps taken
	 * @param s = a string describing the path
	 * @return an integer represents how many valleys there is
	 */
	public static int countingValleys(int n, String s) {
		
		int down=0, up=0, valleys=0;
		char[] charArray = s.toCharArray();
		
		for(char ch : charArray) {
			if(ch == 'D') {
				down++;
			} else {
				up++;
				if(up==down) {
					valleys++;
				}
			}
		}
		return valleys;
	}
}
