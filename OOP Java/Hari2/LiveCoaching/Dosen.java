
public class Dosen extends Manusia {

	private String NID;

	public Dosen(String nama, String alamat, String nID) {
		super(nama, alamat);
		NID = nID;
	}

	@Override
	public void perkenalanDiri() {
		System.out.println("Halo semua. Perkenalkan saya " + getNama() + ". Saya tinggal di " + getAlamat() + ". Kode ID dosen saya adalah " + NID + ".");
	}


	public void menilaiUjian() {
		System.out.println("Dosen sedang menilai ujian.");
	}
	
	public void mengajar() {
		System.out.println("Dosen sedang mengajar.");
	}

	public String getNID() {
		return NID;
	}

	public void setNID(String nID) {
		NID = nID;
	}
	
}
