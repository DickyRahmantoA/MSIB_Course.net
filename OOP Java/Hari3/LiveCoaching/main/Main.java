package main;

import models.Burger;

public class Main {
	private ConsoleInput in;
	
	public Main() {
		in = ConsoleInput.getInstance();
		
		menuHome();
	}
	
	private void title() {
		System.out.println("Course-Net Burger");
		System.out.println("-----------------");
	}
	
	private void optHome() {
		System.out.println("1. Add Burger");
		System.out.println("2. Sell Burger");
		System.out.println("3. Update Burger");
		System.out.println("4. Exit");
	}
	
	private void clear() {
		for(int i = 0; i < 25; i++) System.out.println();
	}
	
	private void menuHome() {
		boolean run = true;
		int opt = -1;
		
		while(run) {
			title();
			optHome();
			opt = in.getIntInRange("Input [1..4]: ", 1, 4);
			
			switch (opt) {
			case 1:
				menuAddBurger();
				break;
			case 2:
				menuSellBurger();
				break;
			case 3:
				menuUpdateBurger();
				break;
			default:
				run = false;
				break;
			}
			clear();
		}
	}
	
	private void menuAddBurger() {
		viewBurger();
		createBurger();
	}
	
	private void viewBurger() {
		Burger.viewBurgers();
	}
	
	private void createBurger() {
		String name = in.getStrInRange("Input Burger's name[5..20]: ", 5, 20);
		int quantity = in.getIntInRange("Input Burger's quantity[1..100]: ", 1, 100);
		double price = in.getDoubleInRange("Input Burger's price[4..9]", 4, 9);
		
		Burger.insertBurger(new Burger(name, quantity, price));
	}
	
	private void menuSellBurger() {
		
	}
	
	private void menuUpdateBurger() {
		
	}
	
	public static void main(String[] args) {
		new Main();
	}
}
