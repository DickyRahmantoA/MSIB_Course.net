#include<stdio.h>

// prototype function
void printByValue(int angka);
void printByReference(int *angka);
void printByAddress(int &angka);
void printAngka(int init, int end, int incr);


int main() {
	// cara passing data di func
	int angka = 10;
	
	// 1. Passing by value
//	printByValue(angka);
	
	// 2. Passing by reference (pointer)
//	printByReference(&angka);
	
	// 3. Passing by address
//	printByAddress(angka);
	
//	printf("main = %d\n", angka);
//	printf("Alamat di main  = %p\n", &angka);


//	for(int i=1; i<=10; i++) {
//		printf("%d ", i);
//	} puts("");
//
//	for(int i=1; i<=100; i++) {
//		printf("%d ", i);
//	} puts("");
//
//	for(int i=1; i<=1000; i++) {
//		printf("%d ", i);
//	} puts("");

	// function membantu 2 hal berikut
	// 1. meningkatkan readibility 
	// 2. code recycle

	printAngka(1, 10, 1);
	printAngka(1, 100, 3);
	printAngka(1, 1000, 5);
	
}

void printByValue(int angka) {
	angka = 100;
	printf("by value = %d\n", angka);
	printf("Alamat by value = %p\n", &angka);
}

void printByReference(int *angka) {
	*angka = 100;
	printf("by reference = %d\n", *angka);
	printf("Alamat angka = %p\n", angka);
	printf("Alamat &angka = %p\n", &angka);
}

void printByAddress(int &angka) {
	angka = 100;
	printf("by address = %d\n", angka);
	printf("Alamat &angka = %p\n", &angka);
}

void printAngka(int init, int end, int incr) {
	for(int i=init; i<=end; i+=incr) {
		printf("%d ", i);
	} puts("");
}

//int main() {
//	
//	// Array
//	
//	// ukuran - 1
////	char alamat[100] = "Indonesia";
////	char nama[10] = {'H', 'a', 'l', 'o'};
////	
////	int nilaiBahasaIndonesia = 100;
////	int nilaiMatematika = 100;
////	int nilaiBahasaInggris = 100;
////	
////	int nilai[3] = {100, 90, 80};
////	
////	
////	printf("%s\n", alamat);
//////	printf("%d\n", nilai[0]); // data 1
//////	printf("%d\n", nilai[1]); // data 2
//////	printf("%d\n", nilai[2]); // data 3
////	
////	for(int i=0; i<3; i++) {
////		printf("Data ke %d = %d\n", i+1, nilai[i]);
////	}
//
//
//	// Pointer
////	int angka = 10;
////	int *pAngka = &angka;
////	int **pAngka = &pAngka;
////
////	printf("angka = %d\n", angka);
////	printf("pAngka = %p\n", pAngka);
////	
////	angka = 100;
////	*pAngka = 123;
////	printf("*pAngka = %d\n", *pAngka); // dereference / derefencing
//
////	char kalimat[100] = "Halo";
////	scanf("%s", kalimat);
//	
////	printf("kalimat = %p\n", kalimat);
////	printf("&kalimat = %p\n", &kalimat);
////	printf("&kalimat[0] = %p\n", &kalimat[0]);
//	
////	int nilai[5] = {100, 90, 80};
////	for(int i=0; i<5; i++) {
////		printf("Data %d alamat %p\n", i+1, &nilai[i]);
////	}
//	
////	array of char = decay dari pointer
//	
//}
