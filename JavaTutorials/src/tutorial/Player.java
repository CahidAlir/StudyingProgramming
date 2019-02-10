package tutorial;

import java.util.ArrayList;

public class Player {
	
	private String name;
	private ArrayList<Card> cards;
	private int totalPoints;
	
	public Player(String name) {
		this.name = name;
	}
	
	public void setCards(ArrayList<Card> cards) {
		this.cards = cards;
	}
	
	public int getTotalPoint() {
		return totalPoints;
	}
	
	public void calculateTotalPoint() {
		totalPoints = 0;
		for(Card c: cards) {
			totalPoints += c.getPoint();
		}
	}

	public String getName() {
		return name;
	}
	
	public String showHand() {
		String s = "";
		for (Card c : cards) {
			if(s.equals("")) {
				s = c.toString();
			} else {
				s = s + ", " + c.toString();
			}
		}
		return s;
	}
}
