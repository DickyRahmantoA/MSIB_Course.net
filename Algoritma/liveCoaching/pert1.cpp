#include<stdio.h>

int main() {
	// template variable;
	// [tipe data] [nama var] (= [isi]);
	// NULL vs 0
	int nilai = 100; // deklarasi
	int umur = 10; // inisialisasi
	umur = 15; // re-assignment
	
	char grade = 'A';
	
	// \n = new line
	// printf
	// printf("Hello world\n");
//	printf("Umur user = %d %d\n" , umur, angka);
//	printf("Grade adalah %c\n", grade);
	
//	printf("%-10s : %d\n", "Umur", umur);
//	printf("%-10s : %d\n", "Nilai", nilai);
//	printf("%-10s : %d\n", "Grade", grade);

//	printf("Vannesa bilang, \"Halo semua\". Baterai 100%%");

	// scanf
	// scanf("%c", &grade); // ampersand (alamat variable)
	
	// getchar
//	grade = getchar();
//	printf("%c", grade);
	
	// gets
	// string ( array of karakter)
	char alamat[100] = "Indonesia";
	// 100 = 100 karakter
	// tapi hanya ada 99 karakter yang boleh dipake
	
	scanf("%[^\n]", alamat);
	printf("%s", alamat);
	
//	gets(alamat);
//	puts(alamat);
	return 0; // mengecek error atau ngga suatu kodingan
}
