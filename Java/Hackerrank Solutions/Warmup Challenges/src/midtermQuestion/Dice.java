package midtermQuestion;

public class Dice {
	
	private int randomNum1=1, randomNum2=1;
	private int randomNumber;
	private int[][] memory;
	private int counter=0;
	private double averageThrow;
	
	public int throwDice() {
		
		for(int i=0;i<5;i++) {
			randomNum1+=(int)(Math.random());
			randomNum2+=(int)(Math.random());
		}
		System.out.println(randomNum1 + "," + randomNum2);
		memory[counter][0]=randomNum1;
		memory[counter][1]=randomNum2;
		
		counter++;
		return randomNumber;
	}
	
	public double showAverage() {
		
		for(int j=0;j<=counter;j++) {
			averageThrow+=memory[counter][0];
			averageThrow+=memory[counter][1];
		}
		averageThrow=averageThrow/counter;
		
		return averageThrow;
	}
}
