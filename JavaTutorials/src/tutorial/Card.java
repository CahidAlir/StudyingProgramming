package tutorial;

public class Card {

	private CardType type;
	private String name;
	private Integer point;
	
	
	public Card(CardType type, String name) {
		this.type = type;
		this.name = name;
		setPoint(name);
	}
	
	
	private void setPoint(String name) {
		if(name.equals("ACE")) {
			this.point = 11;
		} else if (name.equals("KING") || name.equals("QUEEN") || name.equals("JOKER")) {
			this.point = 10;
		} else {
			this.point = Integer.parseInt(name); 
		}
	}

	/**
	 * @return the type
	 */
	public CardType getType() {
		return type;
	}

	/**
	 * @return the name
	 */
	public String getName() {
		return name;
	}

	/**
	 * @return the point
	 */
	public Integer getPoint() {
		return point;
	}

	/**
	 * @param type the type to set
	 */
	public void setType(CardType type) {
		this.type = type;
	}

	/**
	 * @param name the name to set
	 */
	public void setName(String name) {
		this.name = name;
	}

	/**
	 * @param point the point to set
	 */
	public void setPoint(Integer point) {
		this.point = point;
	}
	
	@Override
	public String toString() {
		return name + " of " + type.name();
	}
}
