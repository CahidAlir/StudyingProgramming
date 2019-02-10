package tutorial;

import java.util.ArrayList;
import java.util.Collections;

public class Deck {
	
	private ArrayList<Card> cards;
	
	public Deck() {
		initDeck();
	}
	
	private void initDeck() {
		cards = new ArrayList<>();
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 13; j++) {
				cards.add(new Card(setCardType(i), setCardName(j)));
			}
		}
	}
	
	public Card getCard() {
		Card c = cards.get(0);
		cards.remove(0);
		return c;
	}
	
	public ArrayList<Card> getCards(int number) {
		
		ArrayList<Card> returnedCards = new ArrayList<>();
		for(int i = 0; i < number; i++) {
			returnedCards.add(getCard());
		}
		return returnedCards;
	}
	
	public void shuffle() {
		Collections.shuffle(cards);
	}
	
	private CardType setCardType(int i) {
		CardType type;
		switch(i) {
			case 0:
				type = CardType.CLUBS;
				break;
			case 1:
				type = CardType.DIAMONDS;
				break;
			case 2:
				type = CardType.HEARTS;
				break;
			case 3:
				type = CardType.SPADES;
				break;
			default:
				//No enter here
				type = CardType.CLUBS;
				break;
		}
		return type;
	}
	
	private String setCardName(int i) {
		String name = "";
		switch(i) {
		case 0:
			name = "ACE";
			break;
		case 10:
			name = "JOKER";
			break;
		case 11:
			name = "QUEEN";
			break;
		case 12:
			name = "KING";
			break;
		default:
			name = name + (i+1);
			break;
		}
		return name;
	}

	public String showDeck() {
		String deck = "";
		for(Card c: cards) {
			if (deck.equals("")) {
				deck = c.toString();
			} else {
				deck = deck + ", " + c.toString();
			}
		}
		return deck;
	}
}
