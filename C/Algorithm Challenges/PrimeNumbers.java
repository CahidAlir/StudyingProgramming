/**
@author Said Alır, GitHub Al-Said 
*/

package fun;

import java.util.ArrayList;
import java.util.Scanner;

//Find the all primes in given range
//Upper limit must have 10^8
public class PrimeNumbers {
	
	Integer left = 0;
	Integer right = 0;
	public static void main(String[] args) {
		PrimeNumbers pm = new PrimeNumbers();
		pm.solve();
	}
	
	private void solve() {
		
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer> primes = new ArrayList<Integer>();
		initLeftBound(sc);
		initRightBound(sc);
		while(right <= left) { 
			System.out.println("Right bound can not less or equal to left bound");
			initLeftBound(sc);
			initRightBound(sc);
		}
		sc.close();
		primes = findPrimes();
		System.out.println("The prime numbers between them are :");
		printResult(primes);
	}

	private void printResult(ArrayList<Integer> primes) {
		
		for(int i=0; i < primes.size(); i++) {
			System.out.println(primes.get(i));
		}
		
	}

	private ArrayList<Integer> findPrimes() {
		//If a number has only 2 different divisor, then it is a prime number
		ArrayList<Integer> primes = new ArrayList<>();
		for(int i = left; i <= right; i++) {
			if(isPrime(i)) {
				primes.add(i);
			}
		}
		return primes;
	}
	
	
	//Check spesific number is it prime or not
	private boolean isPrime(int number) {
		int numberOfDivisor = 0;
		
		for(int i = 1; i <= number; i++) {
			if(number%i == 0) {
				numberOfDivisor++;
			}
			if(numberOfDivisor > 2) {
				break;
			}
		}
		if(numberOfDivisor == 2) {
			return true;
		}
		return false;
	}

	private void initRightBound(Scanner sc) {
		System.out.println("Enter right bound : (Should be less or equal to 10^8");
		try {
			right = Integer.parseInt(sc.nextLine());
		} catch (NumberFormatException e) {
			right = 0;
		}
		while(right < 1 || right > 1000000000) {
			System.out.println("You did not entered valid number!");
			System.out.println("Please enter an integer less than 10^8");
			
			try {
				right = Integer.parseInt(sc.nextLine());
			} catch (NumberFormatException e) {
				left = 0;
			}
		}
	}

	private void initLeftBound(Scanner sc) {
		System.out.println("Enter left bound : (Should be greater or equal to 1");
		try {
			left = Integer.parseInt(sc.nextLine());
		} catch (NumberFormatException e) {
			left = 0;
		}
		while(left < 1) {
			System.out.println("You did not entered valid number!");
			System.out.println("Please enter an integer greater than 1");
			
			try {
				left = Integer.parseInt(sc.nextLine());
			} catch (NumberFormatException e) {
				left = 0;
			}
		}
	}
}
