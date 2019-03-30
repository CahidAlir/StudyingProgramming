/**
 * @author Cahid Alýr
 *
 */
package warmUpChallenges;

import java.util.Arrays;
import java.util.List;

public class CompareTheTriplets {
	
	public static void main(String[] args) {
		List<Integer> a = Arrays.asList(3,5,7);
		List<Integer> b = Arrays.asList(7,5,3);
		System.out.println(compareTriplets(a, b));
	}
	
	/**
	 *This method compares two lists elements one by one and adds a 
	 *point to the list that contains bigger number in same index.
	 *Returns the list that contains scores of lists.
	 * 
	 * @param a = First list with attributes.
	 * @param b = Second list with attributes.
	 * @return	List that contains scores.
	 */
	static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
		List<Integer> comparisonPoints = Arrays.asList(0,0);
		int x=0,y=0;
		
		for(int i=0;i<a.size();i++) {
			if(a.get(i)>b.get(i)) {
				x++;
			} else if(a.get(i)<b.get(i)) {
				y++;
			}
		}
		comparisonPoints.set(0, x);
		comparisonPoints.set(1, y);
		
		return comparisonPoints;
    }
}
