// Class name harus sama dengan nama file yang dibuat

import java.util.Scanner;

public class WrapperClassAndMethod {
	
	// method yang akan dipanggil ketika dirun
	public static void main(String[] args) {
		// Wrapper Class
		Integer number_integer = 5;
		Float number_float = (float)10;
		Character alphabet = 'A';
		Boolean bool = true;
		
		// bool merupakan objek, objek dapat ditetapkan sebagai null
		bool = null;
		
		// Method
//		number_integer = Integer.valueOf("170");
//		System.out.println(number_integer);
		
		// lower limit of Integer and Float
//		System.out.println(number_integer.MIN_VALUE);
//		System.out.println(number_float.MIN_VALUE);
		
		// Upper limit of Integer and Float
//		System.out.println(number_integer.MAX_VALUE);
//		System.out.println(number_float.MAX_VALUE);
		
		// String
//		String word1 = "Course-Net";
//		String word2 = new String ("Indonesia");
		
//		System.out.println(word1 + " "+ word2);
		
		// cara pertama
//		if(word1 == word2) {
//			System.out.println("word1 same as word2");
//		}else {
//			System.out.println("word1 not same with word2");
//		}
		
		// cara kedua menggunakan equals
//		if(word1.equals(word2)== true) {
//			System.out.println("word1 same as word2");
//		}else {
//			System.out.println("word1 not same with word2");
//		}
		
		// cara ketiga compare to
//		if(word1.compareTo(word2) == 0) {
//			System.out.println("word1 same as word2");
//		}else {
//			System.out.println("word1 not same with word2");
//		}
		
		// Length
		// return string length
//		System.out.println(word1.length()); // 10
		
		
		// charAt
		// get particular index
//		System.out.println(word1.charAt(2)); // u
		
		// concat
		// concatenate string
//		System.out.println(word1.concat(word2)); // 
		
		// substring
		// get particular range index
//		System.out.println(word1.substring(2, 5));
		
		// to lower case
		// convert string to lower case
//		System.out.println(word1.toLowerCase());
		
		// to upper case
		// convert string to upper case
//		System.out.println(word1.toUpperCase());
		
		// trim
		// delete right and left whitespace
//		word1 = "       Course-Net       ";
//		System.out.println(word1.trim()); // Course-Net
		
		// replace
		// replacing char with other char
//		String name = "Haryanto";
		
//		System.out.println(name.replace('a', 'o')); // Horyonto
		
		// replaceFirst
		// replacing first found character
//		name = "Haryanto";
		
//		System.out.println(name.replaceFirst("a", "o")); // Horyanto
		
		// split
		// splitting string as particular format
//		String split_string = "Course#Net#Indonesia";
//		String[] result = split_string.split("#");
		
//		for(int i = 0; i < result.length; i++) {
//			System.out.println(result[i]);
//		}
		
		// Math Method
		// ceil 
		// upper bound (rounded)
//		System.out.println(Math.ceil(4.3)); // 5
		
		// floor 
		// lower bound (rounded)
//		System.out.println(Math.floor(4.7)); // 4
		
		// round
		// round according the number
//		System.out.println(Math.round(4.7));
		
		Scanner scan = new Scanner(System.in);
		
		// Exception Handling
//		int number;
//		number = scan.nextInt();
		
//		System.out.println("Finish");
		
//		int number;
//		try {
//			System.out.println("input number: ");
//			number = scan.nextInt();
//		} catch (Exception e) {
//			System.out.println("input must be number");
//		}
//		System.out.println("Finish");
		
	}

}
