
public class OopConcept {

	public static void main(String[] args) {
		// class
		// template untuk membuat object. Class terdiri dari data member dan member function
		
		// object
		// instance dari class
		
		// class
		// adalah tipe data, sedangkan object adalah variabel
		
		// contoh
		/* 
		 * class mahasiswa
		 * data member : NIM, nama, IPK
		 * Member function : belajar, ujian
		 * Dari class mahasiswa tersebut akan dibuat object seperti Anto, Bella, dan object mahasiswa lainnya
		 */
		
		/* 
		 * Konsep OOP
		 * 1. Encapsulation
		 * class membungkus attribute dan member function ke dalam object, tujuannya untuk information hiding
		 * 
		 * 2. inheritance
		 * membuat tipe class baru dari tipe class yang sudah ada
		 * 
		 * 3. polymorphism
		 * 	a. overloading
		 * 		nama fungsi sama, parameter beda. parameter dibedakam dari jumlah parameter, tipe data parameter, 
		 * 		urutan parameter.
		 * 	b. overriding
		 * 		nama fungsi sama namun isi fungsi berbeda. Biasanya diterapkan ke class yang memiliki inharitance
		 * 
		 * setter 
		 * function yang digunakan untuk memberi nilai ke data member
		 * 
		 * getter
		 * function yang digunakan untuk memperoleh nilai data member
		 * 
		 * cunstructor 
		 * function spesial yang mendiskripsikan bagaimana instance dari class dibentuk ketika membuat instance
		 * dari class, maka constructor dipanggil. secara default, constructor tekah ada
		 * constructor juga dibuat (user-defined constructor) dan dapat di overloading
		 * 
		 * access modifier:
		 * 1. private : hanya dapat di akses oleh class sendiri
		 * 2. protected : hanya dapat diakses oleh class sendiri dan class child
		 * 3. public : dapat diakses semua class.
		 * 4. package : untuk mengorganisasikan kelas
		 * 
		 * access modifier	|	same class	|	same package	|	subclass	|	other package
		 * public			|		Y		|		Y			|		Y		|		Y
		 * protected		|		Y		|		Y			|		Y		|		N
		 * no acces modifier|		Y		|		Y			|		N		|		N
		 * private			|		Y		|		N			|		N		|		N
		 * 
		 * 
		 */

	}

}
