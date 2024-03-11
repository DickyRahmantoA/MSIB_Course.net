package models;

import java.util.ArrayList;

import main.ConsoleInput;

public class Burger {
	private String name;
	private int quantity;
	private double price;
	
	private static ArrayList<Burger> burgers = new ArrayList<>();
	
	public Burger(String name, int quantity, double price) {
		super();
		this.name = name;
		this.quantity = quantity;
		this.price = price;
	}
	
	public static void viewBurgers() {
		if(burgers.size() == 0) {
			System.out.println("There are no burgers!");
			return;
		}
		
		System.out.printf("| %-2s | %-20s | %-8s | %-6s |\n", "No", "Name", "Quantity", "Price");
		for(int i = 0; i < burgers.size(); i++) {
			Burger curr = burgers.get(i);
			System.out.printf("| %-2s | %-20s | %-8s | $ %.2f |\n", (i + 1), curr.name, Integer.toString(curr.quantity), curr.price);
		}
		
		System.out.println();
	}
	
	public static void insertBurger(Burger burger) {
		burgers.add(burger);
		
		System.out.printf("\n%s Burger(s) have been successfully added\n", burger.name);
		
		ConsoleInput.getInstance().pressEnter();
	}
}
