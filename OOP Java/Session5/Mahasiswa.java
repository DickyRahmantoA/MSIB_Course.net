
public class Mahasiswa extends Manusia{
	private String nim;
	private float ipk;
	
	public Mahasiswa(String nama, int umur, String nim, float ipk) {
		super(nama, umur);
		this.nim = nim;
		this.ipk = ipk;
	}
	
	public void belajar() {
		this.ipk += 0.1;
	}
	
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
	
	
}
