
public class Manusia {
	protected String nama;
	protected int umur;
	
	public String getNama() {
		return nama;
	}
	public void setNama(String nama) {
		this.nama = nama;
	}
	public int getUmur() {
		return umur;
	}
	public void setUmur(int umur) {
		this.umur = umur;
	}
	
	// method ini akan dioverride oleh Mahasiswa
	public void rename(String nama) {
		System.out.println(this.nama + " berganti nama menjadi "+ nama);
		this.nama = nama;
	}
}
