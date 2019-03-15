/**
 * @author Said Alýr
 */
package company;

public class Employee {
	
	private String firstName;
	private String lastName;
	private Integer id;
	private Integer salary;
	private String phoneNumber;
		

	/**
	 * Default Constructor. Initialize every attributes.
	 */
	public Employee() {
		this.firstName = "";
		this.lastName = "";
		this.id = 0;
		this.salary = 0;
		this.phoneNumber = "";
	}
	
	/**
	 * Full Constructor
	 * Initialize every attributte
	 * 
	 * @param fName First name of employee
	 * @param lName Last name of employee
	 * @param id ID of emplotee
	 * @param salary Salary of employee
	 * @param phoneNumber Phone number of mployee
	 */
	public Employee(String fName, String lName, int id, Integer salary, String phoneNumber) {
		setFirstName(fName);
		setLastName(lName);
		setId(id);
		setSalary(salary);
		setPhoneNumber(phoneNumber);
	}
	
	//Constructor overloading...
	
	/**
	 * Gets name, split into firstname and lastname, initialize constructor,
	 * 
	 * @param name Full name of employee
	 * @throws Illegal Argument Exception if name does not contains white space, or name contains 2 or less elements.
	 */
	
	public Employee(String name) {
		
		if (!name.contains(" ") || name.length() < 3) {
			throw new IllegalArgumentException();
		}
		int ch = name.indexOf(' ');
		setFirstName(name.substring(0, ch));
		setLastName(name.substring(ch + 1));
	}
	
	
	public String getFirstName() {
		return firstName;
	}
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}
	public String getLastName() {
		return lastName;
	}
	public void setLastName(String lastName) {
		this.lastName = lastName;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public Integer getSalary() {
		return salary;
	}
	public void setSalary(Integer salary) {
		this.salary = salary;
	}
	public String getPhoneNumber() {
		return phoneNumber;
	}
	public void setPhoneNumber(String phoneNumber) {
		this.phoneNumber = phoneNumber;
	}
	
	
}
