package main;

import java.util.Scanner;

public class ConsoleInput {
	private Scanner in;
	
	private static ConsoleInput instance;
	
	private ConsoleInput() {
		in = new Scanner(System.in);
	}
	
	public static ConsoleInput getInstance() {
		if(instance == null) instance = new ConsoleInput();
		return instance;
	}
	
	public void pressEnter() {
		System.out.println("Press Enter to continue...");
		in.nextLine();
	}
	
	public int getIntInRange(String msg, int min, int max) {
		int res = min - 1;
		do {
			System.out.printf(msg);
			res = in.nextInt();
			in.nextLine();
		} while(res < min || res > max);
		return res;
	}
	
	public String getStrInRange(String msg, int min, int max) {
		String res = "";
		int len = min - 1;
		do {
			System.out.printf(msg);
			res = in.nextLine();
			len = res.length();
		} while(len < min || len > max);
		return res;
	}
	
	public double getDoubleInRange(String msg, double min, double max) {
		double res = min - 1;
		do {
			System.out.printf(msg);
			res = in.nextDouble();
			in.nextLine();
		} while(res < min || res > max);
		return res;
	}
}
