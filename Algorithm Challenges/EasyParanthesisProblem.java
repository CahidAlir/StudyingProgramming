/**
 * @author Said Alır - GitHub Al-Said
 * 
 */
package fun;

import java.util.Scanner;
import java.util.Stack;

public class EasyParanthesisProblem {

	public static void main(String[] args) {
		
		EasyParanthesisProblem pp = new EasyParanthesisProblem();
		Scanner scanner = new Scanner(System.in);
		pp.solve(scanner);
		scanner.close();
	}
	
	
	//Solves the question and prints the answer
	private void solve(Scanner sc) {
			
		String s = getStringFromUser(sc);
		while(!s.toLowerCase().equals("quit")) {
			if(isBalanced(s)) {
				System.out.println("Your string is valid\n\n\n");
			} else {
				System.out.println("Syntax error!\n\n\n");
			}
			s = getStringFromUser(sc);
		}
	}
	
	//Take a string from user
	//If user enters a empty string, warns user and takes a string again
	private String getStringFromUser(Scanner s) {
		
		System.out.println("\n-------Paranthesis Problem-------");
		System.out.println("Enter the string");
		System.out.println("To exit please type 'quit'");
		String st = "";
		st = s.nextLine();
		while(st.isEmpty()) {
			System.out.println("String can not be empty");
			System.out.println("Please try again");
			st = s.nextLine();
		}
		return st;
	}
	
	//Each open paranthesis push into the stack
	//If there is a close stack
	//and stack is not empty, simply pop
	//If stack is empty, returns false
	//If char is not a '(' or ')' then continue
	private boolean isBalanced(String string) {
		
		Stack<Character> stack = new Stack<Character>();
		for(int i = 0; i < string.length(); i++) {
		
			if(string.charAt(i) == '(') {
				stack.push('(');
			} else if(string.charAt(i) == ')') {
				if(stack.isEmpty()) {
					return false;
				} else {
					stack.pop();
				}
			} else {
				continue;
			}
		
		}
		
		return stack.isEmpty();
	}
}
