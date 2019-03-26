package warmUpChallenges;

public class LeftRotation {

	public static void main(String[] args) {
		int[] a= {1,2,3,4,5};
		int[] b = rotLeft(a, 2);
		for(int ar: b) {
			System.out.print(ar + " ");
		}
	}
	
	static int[] rotLeft(int[] a, int d) {
		
		int size = a.length;
		int b[] = new int[size];
		
		for(int i=0;i<size;i++) {
			if(i+d>=size) {
				b[i]=a[(i+d)-size];				
			} else {
				b[i] = a[i+d];
			}
		}
		return b;
	}

}
