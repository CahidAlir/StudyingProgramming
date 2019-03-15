/**
 * @author Said Alýr
 */
package company;

public class Engineer extends Employee {

	private EngineerType type;
	
	public Engineer() {
		super();
		this.type = EngineerType.JUNIOR;
	}
	
	public Engineer(String fname, String lname, String phoneNumber, int id, Integer salary, EngineerType type) {
		super(fname, lname, id, salary, phoneNumber);
		this.type = type;
	}

	public EngineerType getType() {
		return type;
	}

	public void setType(EngineerType type) {
		this.type = type;
	}
	
	
}
