package warmUpChallenges;

import java.util.Calendar;
import java.util.Date;

public class DayOfWeek {
	public static void main(String[] args) {
		System.out.println(findDay(05,07,2019));
	}
	
	 public static String findDay(int month, int day, int year) {
	        @SuppressWarnings("deprecation")
			Date date = new Date(year, month, day);
	        Calendar c = Calendar.getInstance();
	        c.setTime(date);
	        int dayOfWeek = c.get(Calendar.DAY_OF_WEEK);
	        String s = "Hello";
	        switch(dayOfWeek) {
	            case 1:
	            	s = "SUNDAY";
	            	break;
	            case 2:
	            	s = "MONDAY";
	            	break;
	            case 3:
	            	s = "TUESDAY";
	            	break;
	            case 4:
	            	s = "WEDNESDAY";
	            	break;
	            case 5:
	            	s = "THUERSDAY";
	            	break;
	            case 6:
	            	s = "FRIDAY";
	            	break;
	            case 7:
	            	s = "SATURDAY";
	            	break;
	        }
	        return s;
	    }
}
