
public class Main {

	public static void main(String[] args) {
		// Membuat objek menggunakan constructor tanpa parameter
		Mahasiswa andi = new Mahasiswa();
		
		// Membuat objek menggunakan constructor dengan parameter
		Mahasiswa budi = new Mahasiswa("1234567", "Budi", (float)3.89);
		
		// akan error jika akses langsung ke variabel yang jenisnya private
		// solusinya: kita akses dengan getter dan setter
		// solusi kedua : ubah jenis variabel menjadi public atau no access modifier
		
//		System.out.println("NIM: "+andi.getNim());
//		System.out.println("Nama: "+andi.getNama());
//		System.out.println("IPK: "+andi.getIpk());
		
//		System.out.println("NIM: "+budi.getNim());
//		System.out.println("Nama: "+budi.getNama());
//		System.out.println("IPK: "+budi.getIpk());
		
		// memanggil method belajar
//		andi.belajar((float)150);
//		System.out.println("IPK: "+andi.getIpk());
		
		// memanggil static variabel
		// dapat dipanggil melalui object maupun class
		Mahasiswa.jumlah = 10;
		
		System.out.println(Mahasiswa.jumlah);
		System.out.println(andi.jumlah);
		System.out.println(budi.jumlah);
		
		andi.jumlah = 20;
		System.out.println(Mahasiswa.jumlah);
		System.out.println(andi.jumlah);
		System.out.println(budi.jumlah);
		
		// memanggil static method tambahMahasiswa
		Mahasiswa.tambahMahasiswa();
		System.out.println(Mahasiswa.jumlah);
	}

}
