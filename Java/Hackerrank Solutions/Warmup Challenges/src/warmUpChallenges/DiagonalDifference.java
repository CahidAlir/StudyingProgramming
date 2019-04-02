package warmUpChallenges;

public class DiagonalDifference {
	
	public static void main(String[] args) {
		int[][] arr = {{1,2,3},{4,5,6},{7,8,9}};
		System.out.println(diagonalDifference(arr));;
	}
	
	static int diagonalDifference(int[][] arr) {
        int difference, firstDig=0, secondDig=0;
		int length = arr.length;
        
        for(int i=0;i<length;i++) {
        	for(int j=0;j<length;j++) {
        		if(i==j) {
        			firstDig+=arr[i][j];
        		}
        		if(i+j==(length-1)) {
        			secondDig+=arr[i][j];
        		}
        	}
        }
        difference = Math.abs(firstDig-secondDig);
        
        return difference;
    }
}
