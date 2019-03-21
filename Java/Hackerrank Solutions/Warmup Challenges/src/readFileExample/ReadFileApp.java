package readFileExample;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class ReadFileApp {
	private static final String FILENAME = "C:\\Users\\Cahid Alýr\\Documents\\StudyingProgramming\\Java\\Hackerrank Solutions\\Warmup Challenges\\src\\readFileExample\\filename.csv";
	
	public static void main(String[] args) {
		Interface Interface = new Interface(); 
		ArrayList<Judges> Joe = new ArrayList<>();
		ArrayList<Judges> Henry = new ArrayList<>();
		ArrayList<Judges> Bob = new ArrayList<>();
		getFile(Joe, Henry, Bob);
		int choice;
		
		System.out.println("Welcome to the competition!");

		do {
			choice = Interface.showMenu();
			Interface.transmitter(choice, Joe, Henry, Bob);
		} while(choice!=5);
		
		
		
	}
	
	/**
	 * This method reads a file line by line and contains all the information in it in the 
	 * desired locations.
	 * 
	 * @param Joe :ArrayList that will be filled with competitors and Judge Joe's scores for them.
	 * @param Henry :ArrayList that will be filled with competitors and Judge Henry's scores for them.
	 * @param Bob :ArrayList that will be filled with competitors and Judge Bob's scores for them.
	 */
	public static void getFile(ArrayList<Judges> Joe, ArrayList<Judges> Henry, ArrayList<Judges> Bob) {
		
		try (BufferedReader br = new BufferedReader(new FileReader(FILENAME))) {

			String sCurrentLine;
			
			while ((sCurrentLine = br.readLine()) != null) {
				
				
				String[] parts = sCurrentLine.split("\\,");
				
				String partNo = parts[0];
				String partFname = parts[1];
				String partLname = parts[2];
				String partCountry = parts[3];
				String partJudge1face = parts[4];
				String partJudge1body= parts[5];
				String partJudge2face = parts[6];
				String partJudge2body = parts[7];
				String partJudge3face = parts[8];
				String partJudge3body = parts[9];
				
				Joe.add(new Judges(partNo, partFname, partLname, partCountry, partJudge1face, partJudge1body));
				Henry.add(new Judges(partNo, partFname, partLname, partCountry, partJudge2face, partJudge2body));
				Bob.add(new Judges(partNo, partFname, partLname, partCountry, partJudge3face, partJudge3body));
				
				
			}

		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
