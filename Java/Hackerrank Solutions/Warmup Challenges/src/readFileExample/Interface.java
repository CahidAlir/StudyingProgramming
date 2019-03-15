package readFileExample;

import java.util.ArrayList;
import java.util.Scanner;

public class Interface {
	
	private int choice;
	private double biggest= 0.0;
	private double bestJoe;
	private double bestHenry;
	private double bestBob;

	Scanner input = new Scanner(System.in);
	
	public int showMenu() {
		System.out.println("\nWelcome to the competition!");
		System.out.println("Please choose the operation that you want to execute:");
		System.out.print("\n1.Show most liked face \n2.Show most liked body \n3.Show Winner\n4.Show all competitors\n5.To Exit\n");
		choice = input.nextInt();
		
		if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5) {
			return choice;
		} 
		System.out.println("Invalid option!");
		return showMenu();
	}
	
	public void transmitter(int choice, ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		switch(choice) {
		case 1:
			compareFaces(Joe, Henry, Bob);
			break;
		case 2:
			compareBodies(Joe, Henry, Bob);
			break;
		case 3:
			//
			break;
		case 4:
			showAll(Bob);
			break;
		case 5:
			System.out.println("Have a nice day!");
			break;
		}
	}
	
	public void compareFaces(ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		for(Judges j: Joe) {
			double holder = Double.parseDouble(j.getFaceScore());
			if(holder>biggest) {
				biggest=holder;
				bestJoe=Double.parseDouble(j.getNo());
			}
		}
		for(Judges joe: Joe) {
			if(bestJoe==Double.parseDouble(joe.getNo())) {
				System.out.print("Judge Joe's choice for best face is:");
				System.out.print(joe.getFirstName() + " " + joe.getLastName() + " from " + joe.getCountry());
				System.out.println(" :" + joe.getFaceScore());
			}
		}
		biggest=0.0;
		
		for(Judges h: Henry) {
			double holder = Double.parseDouble(h.getFaceScore());
			if(holder>biggest) {
				biggest=holder;
				bestHenry=Double.parseDouble(h.getNo());
			}
		}
		for(Judges henry: Henry) {
			if(bestHenry==Double.parseDouble(henry.getNo())) {
				System.out.print("Judge Henry's choice for best face is:");
				System.out.print(henry.getFirstName() + " " + henry.getLastName() + " from " + henry.getCountry());
				System.out.println(" :" + henry.getFaceScore());
			}
		}
		biggest=0.0;
		
		for(Judges b: Bob) {
			double holder = Double.parseDouble(b.getFaceScore());
			if(holder>biggest) {
				biggest=holder;
				bestBob=Double.parseDouble(b.getNo());
			}
		}
		for(Judges bob: Bob) {
			if(bestBob==Double.parseDouble(bob.getNo())) {
				System.out.print("Judge Bob's choice for best face is:");
				System.out.print(bob.getFirstName() + " " + bob.getLastName() + " from " + bob.getCountry());
				System.out.println(" :" + bob.getFaceScore());
			}
		}
	}
	
	public void compareBodies(ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		biggest=0.0;
		
		for(Judges j: Joe) {
			double holder = Double.parseDouble(j.getBodyScore());
			if(holder>biggest) {
				biggest=holder;
				bestJoe=Double.parseDouble(j.getNo());
			}
		}
		for(Judges joe: Joe) {
			if(bestJoe==Double.parseDouble(joe.getNo())) {
				System.out.print("Judge Joe's choice for best body is:");
				System.out.print(joe.getFirstName() + " " + joe.getLastName() + " from " + joe.getCountry());
				System.out.println(" :" + joe.getBodyScore());
			}
		}
		biggest=0.0;
		
		for(Judges h: Henry) {
			double holder = Double.parseDouble(h.getBodyScore());
			if(holder>biggest) {
				biggest=holder;
				bestHenry=Double.parseDouble(h.getNo());
			}
		}
		for(Judges henry: Henry) {
			if(bestHenry==Double.parseDouble(henry.getNo())) {
				System.out.print("Judge Henry's choice for best body is:");
				System.out.print(henry.getFirstName() + " " + henry.getLastName() + " from " + henry.getCountry());
				System.out.println(" :" + henry.getBodyScore());
			}
		}
		biggest=0.0;
		
		for(Judges b: Bob) {
			double holder = Double.parseDouble(b.getBodyScore());
			if(holder>biggest) {
				biggest=holder;
				bestBob=Double.parseDouble(b.getNo());
			}
		}
		for(Judges bob: Bob) {
			if(bestBob==Double.parseDouble(bob.getNo())) {
				System.out.print("Judge Bob's choice for best body is:");
				System.out.print(bob.getFirstName() + " " + bob.getLastName() + " from " + bob.getCountry());
				System.out.println(" :" + bob.getBodyScore());
			}
		}
	}
	
	public void showAll(ArrayList<Judges> judge) {
		for(Judges j: judge) {
			System.out.print(j.getNo());
			System.out.print("/ " + j.getFirstName());
			System.out.print("/ " + j.getLastName());
			System.out.println("/ " + j.getCountry());
		}
	}

}
