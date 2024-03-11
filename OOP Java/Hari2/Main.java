import java.util.*;

public class Main {
	private String nama;
	Private String alamat;

	public Main() {
		// Array
//		int nilai[] = {100, 90, 70};
//		System.out.println(nilai[0]);
//		System.out.println(nilai[1]);
//		System.out.println(nilai[2]);
//		System.out.println(nilai.length);
		
		// Array List
//		ArrayList<Integer> umur = new ArrayList <>();
//		umur.add(25);
//		umur.add(30);
//		umur.add(10);
		
//		System.out.println(umur.get(0));
//		System.out.println(umur.get(1));
//		System.out.println(umur.get(2));
//		System.out.println(umur.size());
		
		// Vector
//		Vector<String> nama = new Vector<>();
//		nama.add("Indonesia");
//		nama.add("Malaysia");
//		nama.add("Filipina");
		
//		System.out.println(nama.get(0));
//		System.out.println(nama.get(1));
//		System.out.println(nama.get(2));
//		System.out.println(nama.size());
//		System.out.println(nama.capacity());
	}

	public static void main(String[] args) {
		new Main();
	}
	
	// overloading
	// 3 contoh
	// 1. beda tipe data
	// 2. beda jumlah
	// 3. beda urutan
	
	public float tambah(int a, float b) {
		return a+b;
	}
	
	public float tambah(float a, int b) {
		return a+b;
	}
	

}
