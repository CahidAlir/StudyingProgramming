/**
 * @author Said
 */
package fun;

import java.util.ArrayList;
import java.util.Scanner;

public class PerfectNumber {
	
	public static void main(String[] args) {
		PerfectNumber pn = new PerfectNumber();
		Scanner scanner = new Scanner(System.in);
		pn.showMenu(scanner);
		scanner.close();
	}
	
	private void showMenu(Scanner sc) {
		
		Integer menu = 0;
		do {
			printMenu();
			try {
				menu = Integer.parseInt(sc.nextLine());
			} catch (NumberFormatException e) {
				System.out.println("Sorry, invalid option, please try again!");
				continue;
			}
			
			if(menu == 1) {
				learnPerfectOrNot(sc);
			} 
		} while(menu != 2);
		System.out.println("Goodbye!");
	}

	private void learnPerfectOrNot(Scanner sc) {
		
		long number = takeNumber(sc);
		boolean result = isPerfect(number);
		if(result) {
			System.out.println("Yes " + number + " is a perfect number");
		} else {
			System.out.println("No " + number + " is not a perfect number");
		}
	}

	private void printMenu() {
		System.out.println("---------Perfect Number App----------");
		System.out.println("1. Learn if n is perfect or not");
		System.out.println("2. Exit");
	}

	private boolean isPerfect(long number) {
		ArrayList<Integer> divisors = new ArrayList<>();
		divisors = findDivisors(number);
		long sum = 0;
		for(long n: divisors) {
			sum = sum + n;
		}
		return sum == number;
	}

	private ArrayList<Integer> findDivisors(long number) {
		ArrayList<Integer> div = new ArrayList<>();
		for(int i = 1; i < number; i++) {
			if(number%i == 0) {
				div.add(i);
			}
		}
		return div;
	}

	private long takeNumber(Scanner sc) {
		System.out.println("Please enter the number");
		long number = 0;
		while(number <= 0) {
			
			try {
				number = Long.parseLong(sc.nextLine());
			} catch (NumberFormatException e) {
				System.out.println("Invalid number please try again");
				number = 0;
			}
			
			if(number <= 0) {
				System.out.println("Please enter positive integer!!");
			}			
		}
		
		return number;
	}
}
