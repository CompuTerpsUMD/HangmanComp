import java.io.*;
import java.lang.StringBuffer;

public class user_pgm {
    
    public static void printChar(char toSend) {
	System.out.println(Character.toLowerCase(toSend));
	System.exit(0);
    }
    
    public static void main(String[] args) {
	char toSend;
	Inputs inputs = new Inputs();
	inputs.setInputs();
	
	/* YOUR CODE HERE */

	printChar(toSend);
    }

    public static class Inputs {
	String state, guesses;
	int numGuesses;

	public void setInputs() {
	    Scanner input = new Scanner(System.in);

	    state = input.next();
	    guesses = input.next();
	    numGuesses = input.nextInt();

	    input.close();
	}

	public String getState() {
	    return state;
	}

	public String getGuesses() {
	    return guesses;
	}

	public int getNumGuesses() {
	    return numGuesses;
	}
	
    }
    
}
