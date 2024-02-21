//#include <stdio.h>
//
//int main()
//{
	// print kata "Halo..." 
//	for(int i=1 ; i <= 5 ; i++){
//		printf("Halo...\n");
//	}
	
	// membuat bangun datar - persegi
//	int angkaSaya;
//	
//	scanf("%d", &angkaSaya);
//	
//	for (int baris = 1; baris <= angkaSaya; baris++){
//		for(int kolom = 1; kolom <= angkaSaya; kolom++){
//				printf("*");
//			}
//		printf("\n");
//	}
	
	// persegi berlubang
//	for (int baris = 1; baris <= 5; baris++){
//		for(int kolom = 1; kolom <= 5; kolom++){
			// cara 1
//			if(baris == 1 || baris == 5 || kolom == 1 || kolom == 5 ){
//				printf("*");
//			} else {
//				printf(" ");
//			}
			
			// cara 2
//				if(baris > 1 && baris < 5 && kolom > 1 && kolom < 5  ){
//				printf(" ");
//			} else {
//				printf("*");
//			}
//		}
//		printf("\n");
//	}


//	// membuat bangun datar - segitiga
//	for (int baris = 1; baris <= 5; baris++){
//		for(int kolom = 1; kolom <= 5; kolom++){
//			if (baris >= kolom){ // A
//				printf("*"); // C
//			}
//		}
//		
//		for (int kolom = 1; kolom <= 5; kolom ++){
//			if (baris <= kolom){ // B
//				printf(" "); // D
//			}
//		}
//		printf("\n");
//	}
	
	/*
	Trik :
	1. A >=, B <=, C "*", D " "
	2. A <=, B >=, C "*", D " "
	3. A >=, B <=, C " ", D "*"
	4. A <=, B >=, C " ", D "*"
	*/
	
//    return 0;
//}
