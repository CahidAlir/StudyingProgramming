package tutorial;


public class CardGameApp {

	public static void main(String[] args) {
		
		CardGameApp app = new CardGameApp();
		app.start();
	}

	private void start() {
		
		GameManager gm = new GameManager(2, 10);
		System.out.println(gm.showPlayerHand(1));
		System.out.println(gm.showPlayerHand(2));
		System.out.println(gm.announceWinner());
	}
}
