
public class Main {

	public static void main(String[] args) {
		// error akan terjadi jika dibuat object dari Abstract class
		
		// buat object dari kelas turunan
		Cat cat = new Cat();
		
		// panggil method yang sudah dioverride dari abstract method
		cat.makeNoise();
		
		// membuat object wolf dan ditampung di abstract class
		Animal obj = new Wolf();
		obj.makeNoise();
		
		System.out.println();
		
		// tidak bisa membuat object dari interface, lewat subclass bisa
		// InterfaceSample interfaceSample = new InterfaceSample();
		
		// membuat object dari class yang implement interface
		RealClassInterface obj2 = new RealClassInterface();
		obj2.interfaceMethod();
		
		// number dari obj2 tidak dapat diganti karena merupakan final
		// obj2.number = 50;
		
		// number dari interface tidak dapat diganti karena merupakan static final
		// InterfaceSample.number = 50;
	}

}
