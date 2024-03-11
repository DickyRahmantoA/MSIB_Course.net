import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		Manusia andi = new Manusia("Andi", 12);
		
		Mahasiswa budi = new Mahasiswa("Budi", 20, "2201234521", (float) 3.89);
		
		// memanggil method dari parent class manusia
//		andi.ulangTahun();
//		budi.ulangTahun();
		
		// memanggil method dari parent class manusia
//		System.out.println(budi.getUmur());
		
		// membuat objek Mahasiswa dan tampung di class Manusia
		Manusia chandra = new Mahasiswa("Chandra", 21, "2201243536", (float)3.87);
		//parent mengandung semua tipe tipe headnya
		
		//chandra.ulangTahun();
		// chandra.belajar();
		// class parent hanya bisa mengakses dirinya sendiri(method
		// parent class tidak dapat mengakses class child 
		// child class dapat mengakses semua milik parent class
		// tapi child dapat mengakses parent
		
//		System.out.println(chandra.getUmur());
		
		// tidak dapat membuat objek parent class(Manusia) dan tampung di child class(mahasiswa)
		// Mahasiswa clarissa = new Manusia("Clarissa", 19);
		
		// ArrayLIst dari class
		ArrayList<Mahasiswa> listMahasiswa = new ArrayList<Mahasiswa>();
		
		listMahasiswa.add(budi);
		listMahasiswa.add(new Mahasiswa("Clarissa", 19, "2206765982", (float)3.92));
		
		System.out.println(listMahasiswa.get(1).getNama());
		
		
	}

}
