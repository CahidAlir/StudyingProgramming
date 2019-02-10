package tutorial;

import java.util.ArrayList;

public class GameManager {
	
	private ArrayList<Player> players;
	private Deck deck;
	
	public GameManager() {
		initGM();
	}
	
	public GameManager(int numberOfPlayers, int numberOfCards) {
		initGM();
		for(int i = 0; i < numberOfPlayers; i++) {
			Player p = new Player((i+1) + ". Player");
			p.setCards(deck.getCards(numberOfCards));
			players.add(p);
		}
	}
	
	private void initGM() {
		players = new ArrayList<>();
		deck = new Deck();
		deck.shuffle();
	}
	
	public String announceWinner() {
		
		int highestPoint = 0;
		Player winner = new Player("");
		for(Player p : players) {
			p.calculateTotalPoint();
			if(p.getTotalPoint() > highestPoint) {
				winner = p;
				highestPoint = winner.getTotalPoint();
			}
		}
		
		return "Winner is " + winner.getName() + " with point of " + winner.getTotalPoint();
	}
	
	public String showPlayerHand(int i) {
		return players.get(i-1).showHand();
	}

}
