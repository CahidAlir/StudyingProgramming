/**
 * @author Said Al�r
 */
package company;

public class CompanyApp {

	public static void main(String[] args) {
		
		Engineer eng = new Engineer("Cahid", "Al�r", "+90-555-000-1234", 1, 0, EngineerType.INTERN);
		System.out.println(eng.getFirstName());
	}
}
