
public class Mahasiswa extends Manusia {

	private String NIM;

	public Mahasiswa(String nama, String alamat, String nIM) {
		super(nama, alamat);
		NIM = nIM;
	}

	@Override
	public void perkenalanDiri() {
		System.out.println("Halo semua. Perkenalkan saya " + getNama() + ". Saya tinggal di " + getAlamat() + ". ID mahasiswa saya adalah " + NIM + ".");
	}

	
	public void belajar() {
		System.out.println("Mahasiswa sedang belajar");
	}
	
	public String getNIM() {
		return NIM;
	}

	public void setNIM(String nIM) {
		NIM = nIM;
	}
}
