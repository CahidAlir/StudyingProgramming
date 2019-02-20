package tutorial;

public class Test {

	public static void main(String[] args) {
	
		int[] myArr = new int[4];
		myArr[0] = 1;
		myArr[1] = 2;
		myArr[2] = 3;
		myArr[3] = 4;
		
		int total = 0;
		
		for(int i : myArr) {
			System.out.println(i);
		}
		System.out.println("\n\n");
		
		for (int i = 0; i < myArr.length; i++) {
			System.out.println(myArr[i]);
		}
	}

}
