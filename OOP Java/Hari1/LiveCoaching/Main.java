import java.util.Scanner;

public class Main {

	Scanner input = new Scanner(System.in);
	
	public Main() { // constructor
//		System.out.print("Hello world!");
//		System.out.println("Hello world!");
//		System.out.printf("%-10s : Hello world!\n", "Kata");
//		
//		int angka;
//		System.out.print("Angka = ");
//		angka = input.nextInt();		
//		System.out.println(angka);
//		
//		float IPK;
//		System.out.print("IPK = ");
//		IPK = input.nextFloat();
//		System.out.println(IPK);
//		
//		input.nextLine(); // string lengkap
//		input.next(); // string 1 kata
//		input.next().charAt(0); // char
		
//		int[] nilai = {100, 90, 80};
//		System.out.println(nilai[0]);
//		System.out.println(nilai[1]);
//		System.out.println(nilai[2]);
//		
//		// for each
//		for(int score : nilai) {
//			System.out.print("Input : ");
//			score = input.nextInt();
//			System.out.println(score);
//		}
//		
//		for(int i=0; i<nilai.length; i++) {
//			System.out.println(nilai[i]);
//		}
		
		
		// wrapper class
		int umur = 20;
		Integer umur2 = 20;
		
		String angka = "123";
		umur2 = Integer.parseInt(angka);
		
		System.out.println(umur2);
		
	}

	public static void main(String[] args) { // method 
		new Main();
	}

}
