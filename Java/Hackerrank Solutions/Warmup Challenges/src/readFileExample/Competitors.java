package readFileExample;

public class Competitors {
	
	private String no;
	private String firstName;
	private String lastName;
	private String country;
	
	public Competitors(String no, String fname, String lname, String country){
		setNo(no);
		setFirstName(fname);
		setLastName(lname);
		setCountry(country);
	}
	
	public String getNo() {
		return no;
	}
	public void setNo(String no) {
		this.no = no;
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
	public String getCountry() {
		return country;
	}
	public void setCountry(String country) {
		this.country = country;
	}
	
}
