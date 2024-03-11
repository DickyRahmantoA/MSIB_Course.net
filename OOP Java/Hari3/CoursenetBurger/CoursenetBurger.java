import java.util.*;

public class CoursenetBurger {
	int idx;
	 public static void clearScreen() {    
		for (int i = 0; i < 25; i++) {
	            System.out.println(); // Mencetak baris kosong
	    }
	 }
	 
	 
	 public void tampilkanBarang() {
		    if (idx < 1) {
		       System.out.println("Belum ada barang\n");
		    } else {
		      System.out.printf("%4s %-30s %-20s %s\n", "No.", "Name", "Quantity", "Price\n");

		        for (int i = 0; i < idx; i++) {
		          
		        }
		    }
		}

	
	 public CoursenetBurger() {
		 System.out.printf("%4s %-30s %-20s %s\n", "No.", "Name", "Quantity", "Price\n");
	}

	public static void main(String[] args) {
		new CoursenetBurger();
		int pilihan;
		Scanner s = new Scanner(System.in);
		System.out.println("Total Income : $ 0.00\n");
		System.out.println("Course-Net Burger");
		System.out.println("----------------------");
		System.out.println("1. Add Burger");
		System.out.println("2. Sell Burger");
		System.out.println("3. Update Data Burger");
		System.out.println("4. Exit\n");
		
		do {
			System.out.println("Enter Your Choice[1..4] : ");
			pilihan =s.nextInt();
            s.nextLine(); // Membersihkan buffer
        } while (pilihan < 1 || pilihan > 4);
		
		switch (pilihan)
        {
        case 1:
//           addBurger();
            break;
        case 2:
 //         sellBurger();
            break;
        case 3:
//        	updateBurger();
        	break;
        case 4:
        	System.out.printf("\n\n\t\t Thankyou ! \n");
        default:
            break;
        }
		clearScreen();
	}
}
