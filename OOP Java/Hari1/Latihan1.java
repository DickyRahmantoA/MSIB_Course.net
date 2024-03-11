import java.util.Scanner;

public class Latihan1 {
	
	Scanner in = new Scanner(System.in);
	public Latihan1() {
		String NIM;
		String name;
		int age;
		float GPA;
		
		System.out.println("Welcome ro Course-Net");
		System.out.println("-----------------------");
		
		
		
		System.out.printf("%-25s :", "Entry Your NIM");
		NIM = in.nextLine();
		
		
		System.out.printf("%-25s :", "Entry Your Full Name");
		name = in.nextLine();
		
		System.out.printf("%-25s :", "Entry Your Age");
		age = in.nextInt();
		in.nextLine();
		
		System.out.printf("%-25s :", "Entry Your GPA target");
		GPA = in.nextFloat();
		in.nextLine();
		
		System.out.println("\n Below this, they are your data : \n");
		System.out.printf("%-15 : %s\n","Your NIM" + NIM);		
		System.out.printf("%-15 : %s\n", "Your Full Name" + name);		
		System.out.printf("%-15 : %d\n","Your Age" + age);		
		System.out.printf("%-15 : %d\n","Your GPA target" + GPA);		
	}

	public static void main(String[] args) {
		new Latihan1();

	}

}
