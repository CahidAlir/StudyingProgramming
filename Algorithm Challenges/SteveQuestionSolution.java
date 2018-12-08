package fun;

import java.util.Scanner;

public class SteveQuestionSolution {

	public static void main(String[] args) {
		
		SteveQuestionSolution app = new SteveQuestionSolution();
		app.solve();
	
		
	}

	private boolean solve() {
		
		Scanner sc = new Scanner(System.in);
		String sentence = "";
		System.out.println("Please enter the sentence : ");
		sentence = sc.nextLine();
		while(checkConditions(sentence) == false) {
			System.out.println("Your sentence is empty or does not contains any question mark!");
			System.out.println("Please enter again...");
			System.out.println("To quit please type 'quit' ");
			sentence = sc.nextLine();
			if(sentence.equals("quit")) {
				return false;
			}
		}
		sc.close();	
		sentence = bePolite(sentence);
		System.out.println(); System.out.println();
		System.out.println("Now your sentence should be!");
		System.out.println(sentence);
		return true;
		
	}

	private String bePolite(String sentence) {
		//Step 1 remove the question mark at the end
		sentence = sentence.substring(0, sentence.length()-1);
		//Step 2 add "please"
		sentence = sentence + ", please?";
		return sentence;
	}

	private boolean checkConditions(String s) {
		//Condition 1 string must has letters between 1 - 100
		if(s.length() < 1 || s.length() > 100)
			return false;
		//Condition 2 string must has contain '?'
		if(!s.contains("?"))
			return false;
		return true;
	}
}

