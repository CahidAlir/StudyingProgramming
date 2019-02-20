
public class ValleyCounting {
	
	public int countingValleys(int n, String s) {
		
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
