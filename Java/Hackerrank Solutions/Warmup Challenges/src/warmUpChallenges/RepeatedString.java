package warmUpChallenges;

public class RepeatedString {
	
	public static void main(String[] args) {
		
		System.out.println(repeatedString("ababa", 3));
	}
	
	
	static long repeatedString(String s, long n) {
		long numberOfLetters=0;
		char[] arr = s.toCharArray();
		int length = arr.length;
		long lastStep = n%length;
		int exceptions = 0;
		long repeat = 1;
		if(n>length) {
			repeat = (n/length);
		}
		
		if(n>length) {
			for(char ch : arr) {
				if(ch=='a') {
					numberOfLetters++;
				}
			}
		} else {
			for(int j=0;j<n;j++) {
				if(arr[j]=='a') {
					numberOfLetters++;
				}
			}
		}
		if(n>length) {
			for(int i=0;i<lastStep;i++) {
				if(arr[i]=='a') {
					exceptions++;
				}
			}
		}
		
		return numberOfLetters*(repeat)+exceptions;
    }
}
