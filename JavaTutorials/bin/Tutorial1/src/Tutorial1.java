
public class Tutorial1 {

	public static void main(String[] args) {
		  
		  int [] arr = {0, 0, 0, 0, 1, 0};
		  System.out.println(jumpingOnClouds(arr));
		 }
		 
		 private static int jumpingOnClouds(int[] c) {
			 int totalStep = 0;
			 int current = 0;
			 
			 while(current < c.length -1) {
				 if(current + 2 < c.length && c[current + 2] != 1) {
					 current += 2;
				 } else {
					 current++;
				 }
				 totalStep++;
			 }
			 return totalStep;
		 }
}
