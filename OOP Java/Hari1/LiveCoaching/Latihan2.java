import java.util.Scanner;

public class Latihan2 {

	Scanner sc = new Scanner(System.in);
	
	public Latihan2() {
		System.out.println("Odd or Even Number");
		System.out.println("------------------");
		
		int number;
		System.out.print("Input a number : ");
		number = sc.nextInt(); sc.nextLine();
		
		// proof harus scan.nextLine habis scan.
//		char c = sc.nextLine().charAt(0);
//		System.out.println(c + "----");
//		String st = sc.nextLine();
//		System.out.println(st + "----");
		
		
		if(number % 2 == 0) { // genap
			System.out.println(number + " is even number");
		}
		else { // ganjil
			System.out.println(number + " is odd number");
		}
	}

	public static void main(String[] args) {
		new Latihan2();
	}

}
