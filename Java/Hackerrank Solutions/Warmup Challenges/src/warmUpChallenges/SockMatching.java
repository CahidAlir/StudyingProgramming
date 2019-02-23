package warmUpChallenges;

public class SockMatching {
	 
	public static void main(String[] args) {
		
	}
	
	private static int sockMerchant(int n, int[] ar) {
	        int matchs=0;

	        for(int i=0;i<n;i++) {
	        	if(ar[i]==0) {
	        		continue;
	        	}
	            for(int j=i+1;j<n;j++) {
	                if(ar[i]==ar[j]) {
	                	matchs++;
	                	ar[i]=0;
	                	ar[j]=0;
	                	break;
	                }
	            }
	        }
	        return matchs;
	    }
}
