#include <stdio.h>

// void adalah function yang tidak memiliki return value dan tipe data
 
void cetak(){
 	printf("Hello\n");
 	printf("Hello2\n");
}
 
int kuadrat(int angka){
	return angka * angka;
}
// Passing by value 
// ialah melempar value dari suatu variable melalui parameter untuk diproses
// data yang di ubah di function tidak akan berubah
// karena function memiliki salinan dan bukan data yang asli
void tukarAngka(int angka1, int angka2){
	int temp;
	
	// angka1 = 10
	// angka2 = 5
	// kita ingin menukarnya
	// temp = tempat kosong
	
	temp = angka1;
	angka1 = angka2;
	angka2 = temp;
}

// passing by reference
// ialah melempar alamat dari suatu variable melalui parameter
// data yang diubah di function akan berubah di main

void tukarAngkaByReference(int &angka1, int &angka2){
	int temp;
	
	temp = angka1;
	angka1 = angka2;
	angka2 = temp;
}

// passing by pointer
void tukarAngkaByPointer(int *angka1, int *angka2){
	int temp;
	
	temp = *angka1;
*angka1 = *angka2;
	*angka2 = temp;
}


int main()
{
//	cetak();
//	int angkaDariFunction = angka();
//	printf("%d", angkaDariFunction);

//	int angkaSaya = 5;
//	int hasilKuadrat = kuadrat(angkaSaya);
//	
//	printf("%d", hasilKuadrat);
	
	int angka1 = 10;
	int angka2 = 5;
	printf("Sebelum tukar %d %d\n\n", angka1, angka2);
//	tukarAngka(angka1, angka2);
//	tukarAngkaByReference(angka1, angka2);
	tukarAngkaByPointer(&angka1, &angka2);
	
	printf("Sesudah tukar %d %d\n\n", angka1, angka2);
    return 0;
}
