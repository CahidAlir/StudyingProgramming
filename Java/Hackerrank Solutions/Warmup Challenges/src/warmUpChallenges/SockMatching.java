/**
 * @author Cahid Alýr
 * 
 */
package warmUpChallenges;

public class SockMatching {
	 
	public static void main(String[] args) {
		
		int[] ar = {10, 20, 20, 10, 10, 30, 50, 10, 20};
		
		System.out.println(sockMerchant(9, ar));
	}
	
	/**
	 *     This method takes int array and matches all element in a pair if possible.
	 *  Returns how many matches can be done. For example;
	 *  Assume your array is: int [] arr = {5,5,3};
//	 *  sockMerchant(3, arr) returns 1 since only 5's can be matches.
	 * 
	 * @param n = the number of the elements in the array
	 * @param ar = the array that contains the attributes of socks.
	 * @return Method returns the number of sock matches.
	 */
	public static int sockMerchant(int n, int[] ar) {
	        int matches=0;

	        for(int i=0;i<n;i++) {	
	        	if(ar[i]==0) {	
	        		continue;
	        	}							
	            for(int j=i+1;j<n;j++) {	
	                if(ar[i]==ar[j]) {	
	                	matches++;	
	                	ar[i]=0;	
	                	ar[j]=0;	
	                	break;		
	                }				
	            }
	        }
	        return matches;
	    }
}
