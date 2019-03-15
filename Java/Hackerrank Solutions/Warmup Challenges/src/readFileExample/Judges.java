package readFileExample;

public class Judges extends Competitors {
	
	private String faceScore;
	private String bodyScore;
	
	public Judges(String no, String fname, String lname, String country, String fscore, String bscore) {
		super(no, fname, lname, country);
		setFaceScore(fscore);
		setBodyScore(bscore);
	}

	public String getFaceScore() {
		return faceScore;
	}

	public void setFaceScore(String faceScore) {
		this.faceScore = faceScore;
	}

	public String getBodyScore() {
		return bodyScore;
	}

	public void setBodyScore(String bodyScore) {
		this.bodyScore = bodyScore;
	}
}