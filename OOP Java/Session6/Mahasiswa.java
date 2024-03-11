
public class Mahasiswa extends Manusia{
	private String nim;
	private float ipk;
	
	public String getNim() {
		return nim;
	}
	public void setNim(String nim) {
		this.nim = nim;
	}
	public float getIpk() {
		return ipk;
	}
	public void setIpk(float ipk) {
		this.ipk = ipk;
	}
	
	// overloading, dibedakan dari tipe data, jumlah dan urutan parameter
	// method belajar tanpa parameter
	public void belajar() {
		this.ipk += 0.1;
		System.out.println("IPK " + this.nama + " meningkat 0.1 menjadi " + this.ipk);
	}
	
	// method belajar dengan 1 parameter
	public void belajar(float lama) {
		this.ipk += (lama/50);
		System.out.println(this.nama + " belajar selama " + lama + " jam. ");
	}
	
	// method belajar dengan 2 parameter
	public void belajar(float lama, String pengajar) {
		this.ipk += (lama/20);
		System.out.println(this.nama + " diajar oleh " + pengajar + " selama " + lama +  " jam. ");
	}
	
	// overriding, isi method berbeda
	public void rename(String nama) {
		System.out.println(this.nama + " berganti nama menjadi MAHASISWA " + nama);
		this.nama = nama;
	}
}
