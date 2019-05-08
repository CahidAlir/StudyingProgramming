package midtermQuestion;

import java.util.Scanner;

public class DiceGameApp {
	public static void main(String[] args) {
		Dice player1 = new Dice();
		Dice player2 = new Dice();
		Scanner scan = new Scanner(System.in);
		int[] score = {0,0};
		int a, b;
		
		System.out.println("Enter the winning condition");
		int win = scan.nextInt();
		
		while(score[0]<win || score[1]<win) {
			System.out.println("Player 1: ");
			a = player1.throwDice();
			System.out.println("Player 2: ");
			b = player2.throwDice();
			if(a>b) {
				score[0]++;
			} else {
				score[1]++;
			}
		}
		
		if(score[0]>score[1]) {
			System.out.println("Player 1 wins!");
		} else {
			System.out.println("Player 2 wins!");
		}
		
		scan.close();
	}
}
