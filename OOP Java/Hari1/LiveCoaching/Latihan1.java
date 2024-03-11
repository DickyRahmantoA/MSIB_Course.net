import java.util.Scanner;

public class Latihan1 {

	Scanner in = new Scanner(System.in);
	
	public Latihan1() {
		
		String NIM;
		String name;
		int age;
		float GPA;
		
		System.out.println("Welcome to Course-Net");
		System.out.println("---------------------");
		
		System.out.printf("%-25s : ", "Entry your NIM");
		NIM = in.nextLine();
		
		System.out.printf("%-25s : ", "Entry your full name");
		name = in.nextLine();
		
		System.out.printf("%-25s : ", "Entry your age");
		age = in.nextInt();
		in.nextLine();
		
		System.out.printf("%-25s : ", "Entry your GPA target");
		GPA = in.nextFloat();
		in.nextLine();
		
		System.out.println("\nBelow this,  they are your data :\n");
		System.out.printf("%-15s : %s\n", "NIM", NIM);
		System.out.printf("%-15s : %s\n", "Full name", name);
		System.out.printf("%-15s : %s\n", "Age", age);
		System.out.printf("%-15s : %s\n", "GPA target", GPA);
		
	}

	public static void main(String[] args) {
		new Latihan1();
	}

}
