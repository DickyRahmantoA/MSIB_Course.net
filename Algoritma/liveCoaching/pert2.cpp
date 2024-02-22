//#include <stdio.h>
// prototype function
//void printByValue(int angka);
//void printByReference(int *angka);
//void printByAddress(int angka);
//void printAngka();

//int main(){
	// cara passing data di function
//	int angka = 10;
	
	// function membantu 2 hal berikut
	// 1. meningkatkan readibility 
	// 2. code recycle
	
	// 1. passing by value
//	printByValue(angka);
	
	// 2. passing by reference (pointer)
//	printByReference(*angka);
	
	// 3. passing by address
//	printByAddress(int &angka);
//	
//	printf("main = %d\n", angka);
//	printf("alamat di main = %p\n", &angka);

//	for(int i=1; i<=10; i++){
//		printf("%d ", i);
//	} puts("");
//}

//void printAngka(int init, int end, int incr){
//	for(int i=init; i<=end; i++){
//		printf("%d ", i);
//	} puts("");
//}
//void printByValue(int angka){
//	angka = 100;
//	printf("by value = %d\n", angka);
//	printf("alamat by value = %p\n, &angka");
//}
//void printByReference(int *angka){
//	*angka = 100;
//	printf("by reference = %d\n", *angka);
//	printf("alamat angka = %p\n, angka");
//	printf("alamat &angka = %p\n, &angka");
//}
//void printByAddress(int &angka){
//	angka = 100;
//	printf("by address = %d\n", angka);
//	printf("alamat &angka = %p\n, &angka");
//}


//int main()
//{
	// if else
//	if ([kondisi]){
//		....
//	}
//else {
//	....
//}

//	int nilai = 55;
//	// 100 >= 90 ? true
//	if (nilai >= 90){
		// nested selection / condition
//		if(gender == 'P'){
//			puts("hadiahnya adalah make up.");
//		} else if (gender == 'L'){
//			puts("hadiahnya adalah game.")
//		}
//	} 
	// && kemungkinan salah paling besar taro paling depan
	// || kemungkinan benar paling besar taro paling depan
	// short circuit
	
	
//	if(nilai >= '90' && gender == 'P'){
//		puts("Selamat! Kamu dapat hadiah.");
//		puts("hadiahnya adalah make up.");
//	} 
//	else if (nilai >= '90' && gender == 'L'){
//		puts("Selamat! Kamu dapat hadiah.");
//		puts("hadiahnya adalah game.");
//	} 
//	else if(nilai >= 75){
//		puts("selamat! sudah lulus.");
//	} else if(nilai >= 50){
//		puts("Mungkin bisa belajar lebih giat lagi.");
//	}
//	else {
//		puts("Sayang sekali.");
//	}
	
	// switch case
//	switch ([variable]) {
//		case [kondisi]:
//			break;
//		case [kondisi]:
//			break;
//		default:
//			break;	
//	}
//if(case == 'A' || case == 'B' || case == 'C' || case == 'D'){
//	
//}
// hanya bisa perbandingan ==

//	char grade;
//	printf("Input Grade : ");
//	scanf("%c", &grade);fflush(stdin);
//	switch(grade) {
//		case 'A':
//			puts("Baik Sekali");
//			break;
//		case 'B':
//			puts("Baik");
//			break;
//		case 'C':
//			puts("Cukup");
//			break;
//		default:
//			puts("Invalid.");
//			break;
//	}
	
	// ternary operator (?:)
	// [kondisi] ? [jika benar] : [jika salah];
//	int nilai = 100;
//	char gender = 'P';
//	
//	if(nilai >= 90){
//		if (nilai >= 90){
//		// nested selection / condition
//		if(gender == 'P'){
//			puts("hadiahnya adalah make up.");
//		} else if (gender == 'L'){
//			puts("hadiahnya adalah game.");
//		}
//	} else {
//		puts("sayang sekali.");
//	}
//	
//	nilai >= 90 ? puts("Dapat hadiah.") : puts("Sayang sekali.");
//	




// -----------------------------------------------------------------------------
// Looping / repetition / perulangan

//	int awal = 1;
//	int akhir = 10;
//	int i;
// for
// for ([inisialisasi]; [kondisi]; [perubahan data]) {
//	......
//}

// di for bisa menggunakan break; untuk mengstop jika kelebihan 
// dan bisa melanjutkan menggunakan continue; jika ingin melanjutkan melooping
//	printf("For : ");
//for ( i = awal; i <= akhir; i++) {
//	printf("%d ", i);
//} 
//puts("");

// while 
//while([kondisi]){
//	.....
//}

//printf("while : ");
//i = awal;
//while(i<=akhir){
//	printf("%d ", i);
//	i++;
//}
//puts("");

// do while
//do {
//	.....
//}while([kondisi]);

//printf("do-while : ");
//i = awal;
//do{
//	printf("%d ", i);
//	i++;
//} while(i<=akhir);
//puts("");




 // ---------------------------------------------------------------------
 // ARRAY DAN POINTER
 // array adalah kumpulan beberapa data dengan tipe data yang sama
 
 // ukuran - 1
// char alamat[100] = "Indonesia";
// char nama[10] = {'H', 'a', 'I', 'o'};

// int nilaiBahasaIndonesia = 100;
// int nilaiMatematika = 100;
// int nilaiBahasaInggris = 100;

// int nilai[3] = {100, 90, 80};

// printf("%s\n", alamat);
// printf("%d\n", nilai[0]); // data 1
// printf("%d\n", nilai[1]); // data 2
// printf("%d\n", nilai[2]); // data 3
 
//	for(int i=0; i<3; i++){
//		printf("Data ke %d = %d\n", i+1, nilai[i]);
//	}
 
 // setiap data, pasti memiliki hal berikut.
 // 1. nama
 // 2. value (isi)
 // 3. alamat (ditandai dengan &)
 // alamat bisa disimpan sebagai data.
 // bisa disebut dengan pointer
 // variabel biasa
// [tipe data][nama var] = [value];
// contoh int nilai = 100

// variabel pointer
//  [tipe data]*[nama var] = [alamat];
//  contoh int *pNilai = &pNilai;
 
 // pointer
// int angka = 10;
// int *pAngka = &angka;
// int **pAngka = &pAngka;
 
// printf("angka = %d\n", angka);
// printf("pAngka = %p\n", pAngka);
// 
// angka = 100;
// *pAngka = 123;
//  printf("*pAngka = %d\n", *pAngka); // dereference / dereferencing
 
 	
// 	char kalimat[100] = "Halo";
// 	scanf("%s", kalimat);

//	printf("kalimat = %p\n", kalimat);
//	printf("&kalimat = %p\n", &kalimat);
//	printf("&kalimat[0] = %p\n", &kalimat[0]);
//	
//	for(int i=0; i<3; i++){
//		printf("Data %d alamat %p\n, i+1, &kalimat[i]");
//	}
//	
	// array of char = decay dari pointer
 
 
 
 // -----------------------------------------------------
 // function
 
 
 
 
 
 
 
 
 
 
 
 
 
//    return 0;
//}
