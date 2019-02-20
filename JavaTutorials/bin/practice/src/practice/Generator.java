package practice;

import java.util.Scanner;

public class Generator {
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Enter the name:");
		String a = scanner.nextLine();
		
		System.out.println("Enter the age:");
		int b = scanner.nextInt();
		
		System.out.println("Enter the height:");
		double c = scanner.nextDouble();
		
		System.out.println("Enter the weight");
		double d = scanner.nextDouble();
		
		Person p = new Person(a, b, c, d);
		
		p.sayHello();
		p.showAttributes(p);
	
		scanner.close();
	}
	
}
