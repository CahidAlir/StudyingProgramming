package readFileExample;

import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Interface {
	
	private int choice;
	private double biggest= 0.0;
	private double bestJoe;
	private double bestJoeScore;
	private double bestHenry;
	private double bestHenryScore;
	private double bestBob;
	private double bestBobScore;

	Scanner input = new Scanner(System.in);
	
	/**
	 * The method that takes the decision of the user.
	 * Takes and returns integer which has been given from user.
	 * 
	 * @return integer that will decide what program will do...
	 */
	public int showMenu() {
		do {
			System.out.println("\nPlease choose the operation that you want to execute:");
			System.out.print("\n1.Show most liked face \n2.Show most liked body \n3.Show Winner\n4.Show all competitors\n5.To Exit\n");
			
			try {
				choice = input.nextInt();
			} catch (InputMismatchException e) {
				System.out.print("\nInvalid option!Please enter a number between 1-4 or 5 to exit.");
				input.nextLine();
			} 
		} while (choice<1 || choice>5);
		return choice;
	}
	
	/**
	 * This method is an operator that runs the desired operation.
	 * Takes the users choice and all the arrayList's that contains all the 
	 * information.
	 * 
	 * @param choice :integer
	 * @param Joe :ArrayList that contains the competitors and judge Joe's scores
	 * @param Henry :ArrayList that contains the competitors and judge Henry's scores
	 * @param Bob :ArrayList that contains the competitors and judge Bob's scores
	 */
	public void transmitter(int choice, ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		switch(choice) {
		case 1:
			compareFaces(Joe, Henry, Bob);
			break;
		case 2:
			compareBodies(Joe, Henry, Bob);
			break;
		case 3:
			showWinner(Joe, Henry, Bob);
			break;
		case 4:
			showAll(Bob);
			break;
		case 5:
			System.out.println("Have a nice day!");
			break;
		}
	}
	
	/**
	 * This method takes the information of judges and competitors and prints the 
	 * most voted competitors for best face.
	 * 
	 * @param Joe :ArrayList that contains info about competitors and judge Joe's scores for them
	 * @param Henry :ArrayList that contains info about competitors and judge Henry's scores for them
	 * @param Bob :ArrayList that contains info about competitors and judge Bob's scores for them
	 */
	public void compareFaces(ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		for(Judges j: Joe) {
			double holder = Double.parseDouble(j.getFaceScore());
			if(holder>biggest) {
				biggest=holder;
				bestJoe=Double.parseDouble(j.getNo());
			}
		}
		biggest=0.0;
		
		for(Judges joe: Joe) {
			if(bestJoe==Double.parseDouble(joe.getNo())) {
				System.out.print("Judge Joe's choice for best face is:");
				System.out.print(joe.getFirstName() + " " + joe.getLastName() + " from " + joe.getCountry());
				System.out.println(" :" + joe.getFaceScore());
			}
		}
		
		for(Judges h: Henry) {
			double holder = Double.parseDouble(h.getFaceScore());
			if(holder>biggest) {
				biggest=holder;
				bestHenry=Double.parseDouble(h.getNo());
			}
		}
		biggest=0.0;
		
		for(Judges henry: Henry) {
			if(bestHenry==Double.parseDouble(henry.getNo())) {
				System.out.print("Judge Henry's choice for best face is:");
				System.out.print(henry.getFirstName() + " " + henry.getLastName() + " from " + henry.getCountry());
				System.out.println(" :" + henry.getFaceScore());
			}
		}
		
		for(Judges b: Bob) {
			double holder = Double.parseDouble(b.getFaceScore());
			if(holder>biggest) {
				biggest=holder;
				bestBob=Double.parseDouble(b.getNo());
			}
		}
		biggest=0.0;
		
		for(Judges bob: Bob) {
			if(bestBob==Double.parseDouble(bob.getNo())) {
				System.out.print("Judge Bob's choice for best face is:");
				System.out.print(bob.getFirstName() + " " + bob.getLastName() + " from " + bob.getCountry());
				System.out.println(" :" + bob.getFaceScore());
			}
		}
	}
	
	/**
	 * This method takes the information of judges and competitors and prints the 
	 * most voted competitors for best face.
	 * 
	 * @param Joe :ArrayList that contains info about competitors and judge Joe's scores for them
	 * @param Henry :ArrayList that contains info about competitors and judge Henry's scores for them
	 * @param Bob :ArrayList that contains info about competitors and judge Bob's scores for them
	 */
	public void compareBodies(ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		
		for(Judges j: Joe) {
			double holder = Double.parseDouble(j.getBodyScore());
			if(holder>biggest) {
				biggest=holder;
				bestJoe=Double.parseDouble(j.getNo());
			}
		}
		biggest=0.0;
		for(Judges joe: Joe) {
			if(bestJoe==Double.parseDouble(joe.getNo())) {
				System.out.print("Judge Joe's choice for best body is:");
				System.out.print(joe.getFirstName() + " " + joe.getLastName() + " from " + joe.getCountry());
				System.out.println(" :" + joe.getBodyScore());
			}
		}
		
		for(Judges h: Henry) {
			double holder = Double.parseDouble(h.getBodyScore());
			if(holder>biggest) {
				biggest=holder;
				bestHenry=Double.parseDouble(h.getNo());
			}
		}
		biggest=0.0;
		
		for(Judges henry: Henry) {
			if(bestHenry==Double.parseDouble(henry.getNo())) {
				System.out.print("Judge Henry's choice for best body is:");
				System.out.print(henry.getFirstName() + " " + henry.getLastName() + " from " + henry.getCountry());
				System.out.println(" :" + henry.getBodyScore());
			}
		}
		
		
		for(Judges b: Bob) {
			double holder = Double.parseDouble(b.getBodyScore());
			if(holder>biggest) {
				biggest=holder;
				bestBob=Double.parseDouble(b.getNo());
			}
		}
		biggest=0.0;
		
		for(Judges bob: Bob) {
			if(bestBob==Double.parseDouble(bob.getNo())) {
				System.out.print("Judge Bob's choice for best body is:");
				System.out.print(bob.getFirstName() + " " + bob.getLastName() + " from " + bob.getCountry());
				System.out.println(" :" + bob.getBodyScore());
			}
		}
	}
	
	
	/**
	 * Takes all the competitors and all the scores to print the most liked 
	 * competitor.
	 * 
	 * @param Joe :ArrayList that contains info about competitors and judge Joe's scores for them
	 * @param Henry :ArrayList that contains info about competitors and judge Henry's scores for them
	 * @param Bob :ArrayList that contains info about competitors and judge Bob's scores for them
	 */
	public void showWinner(ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		biggest=0.0;
		
		for(Judges j: Joe) {
			double holderF = Double.parseDouble(j.getFaceScore());
			double holderB = Double.parseDouble(j.getBodyScore());
			double holder = holderF + holderB;
			if(holder>biggest) {
				biggest=holder;
				bestJoe=Double.parseDouble(j.getNo());
				bestJoeScore=biggest;
			}
		}
		biggest=0.0;
		
		for(Judges h: Henry) {
			double holderF = Double.parseDouble(h.getFaceScore());
			double holderB = Double.parseDouble(h.getBodyScore());
			double holder = holderF + holderB;
			if(holder>biggest) {
				biggest=holder;
				bestHenry=Double.parseDouble(h.getNo());
				bestHenryScore=biggest;
			}
		}
		biggest=0.0;
		
		for(Judges b: Bob) {
			double holderF = Double.parseDouble(b.getFaceScore());
			double holderB = Double.parseDouble(b.getBodyScore());
			double holder = holderF + holderB;
			if(holder>biggest) {
				biggest=holder;
				bestBob=Double.parseDouble(b.getNo());
				bestBobScore=biggest;
			}
		}
		
		double finalHold=0;
		double[] myFinal= {0,0,0};
		myFinal[0]=bestJoeScore;
		myFinal[1]=bestHenryScore;
		myFinal[2]=bestBobScore;
		
		for(int i=0;i<3;i++) {
			if(finalHold<myFinal[i])
				finalHold=myFinal[i];
		}
		
		if(finalHold==bestJoeScore) {
			for(Judges j:Joe) {
				if(Double.parseDouble(j.getNo())==bestJoe) {
					System.out.println("Winner is:"+j.getFirstName()+" "+j.getLastName()+" "+j.getCountry()+":"+bestJoeScore);
				}
			}
		} else if(finalHold==bestHenryScore) {
			for(Judges h:Henry) {
				if(Double.parseDouble(h.getNo())==bestHenry) {
					System.out.println("Winner is:"+h.getFirstName()+" "+h.getLastName()+" "+h.getCountry()+":"+bestHenryScore);
				}
			}
		} else {
			for(Judges b:Bob) {
				if(Double.parseDouble(b.getNo())==bestBob) {
					System.out.println("Winner is:"+b.getFirstName()+" "+b.getLastName()+" "+b.getCountry()+":"+bestBobScore);
				}
			}
		}
	}
	
	
	/**
	 * This method takes a random judges information and prints all the competitors.
	 * 
	 * @param judge :A random Judge that contains information of competitors.
	 */
	public void showAll(ArrayList<Judges> judge) {
		for(Judges j: judge) {
			System.out.print(j.getNo());
			System.out.print("/ " + j.getFirstName());
			System.out.print("/ " + j.getLastName());
			System.out.println("/ " + j.getCountry());
		}
	}

}
