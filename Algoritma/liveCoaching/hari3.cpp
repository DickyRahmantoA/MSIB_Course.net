// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// #include<stdlib.h>
// #include<time.h>
// #define clear() fflush(stdin);

// int main() {
//	- Stdio.h
//	printf, scanf, getchar, puts

//	- Ctype.h
// library untuk manipulasi karakter

//	char inisial = 'C';
//
//	printf("isalpha = %d\n", isalpha(inisial));
//	// apakah karakter ini adalah alfabet
//	// 1 = true (huruf besar)
//	// 2 = true (huruf kecil)
//	// 0 = false
//
//	if(inisial >= 'A' && inisial <= 'Z') {
//		puts("Ini adalah huruf kapital");
//	}
//	else if(inisial >= 'a' && inisial <= 'z') {
//		puts("Ini adalah huruf kecil");
//	}
//	else if(inisial >= '0' && inisial <= '9') {
//		puts("Ini adalah digit");
//	}
//
//	printf("isdigit = %d\n", isdigit(inisial));
//	// apakah karakter ini adalah alfabet
//	// 1 = true
//	// 0 = false
//
//	inisial = tolower(inisial);
//	printf("tolower = %c\n", tolower('A'));
//	printf("toupper = %c\n", toupper('a'));

//	- String.h
//	// manipulasi string
//	char nama[100] = "Coursenet indonesia";
//
//	// cek panjang string
//	int length = strlen(nama);
//	printf("strlen = %d\n", length);
//
//	// copy string
//	int a = 10;
//	int b = a;
//
//	char str[50] = "Coursenet";
//	// strcpy([str dest], [str source]);
//
////	strcpy(str, nama);
////	printf("str = %s\n", str);
////	printf("nama = %s\n", nama);
//
//	// membandingkan string
//	// strcmp([str1], [str2]) // string compare
//	printf("nama = str = %d\n", strcmp(nama, str));
//	printf("AA = AB = %d\n", strcmp("AA", "AB"));
//	printf("AA = AA = %d\n", strcmp("AA", "AA"));
//	printf("a = A = %d\n", strcmp("a", "A"));
//	// -1 = str1 < str2
//	// 0 = str1 == str2
//	// 1 = str1 > str2
//
//	// strrev string reverse
//	// tapi tidak direkomendasikan krna bukan bagian dr standard library
////	Halo
////	olaH

//	- Stdlib.h
//	srand(time(NULL));
//	// time(null) = brp detik yg lewat sejak jan 1990
//	for(int i=1; i<=10; i++) {
//		for(int i=1; i<=10; i++) {
//			printf("%5d ", rand());
//		}
//		puts("");
//	}

// -------------------------------------------------------

// Struct

//	char nama[10];
//	char alamat[10];
//	int umur;

//	struct [nama struct] {
//		[tipe data] [nama variable];
//		....
//	};

//	struct Mahasiswa {
//		char nama[10];
//		char alamat[10];
//		int umur;
//	};
//
//	struct Mahasiswa anton;
//	clear();
//	scanf("%[^\n]", anton.nama);
//	clear();
//	scanf("%[^\n]", anton.alamat);
//	clear();
//	scanf("%d", &anton.umur);
//
//	printf("Nama = %s\n", anton.nama);
//	printf("Alamat = %s\n", anton.alamat);
//	printf("Umur = %d\n", anton.umur);
//
//	struct Mahasiswa kampus[100]; // array of struct
//	clear();
//	scanf("%[^\n]", kampus[0].nama);
//	clear();
//	scanf("%[^\n]", kampus[0].alamat);
//	clear();
//	scanf("%d", &kampus[0].umur);

// --------------------------------------------

// puts("Odd Upper and Even Lower");
// puts("------------------------");

// char word[100];
// printf("Input words: ");
// scanf("%[^\n]", word);

// int i = 0;
// while (word[i] != NULL)
// {
// 	if (i % 2 == 0)
// 	{ // ganjil jadi kapital
// 		if (word[i] >= 'a' && word[i] <= 'z')
// 		{
// 			word[i] -= 'a' - 'A';
// 		}
// 	}
// 	else
// 	{ // genap jadi kecil
// 		if (word[i] >= 'A' && word[i] <= 'Z')
// 		{
// 			word[i] += 'a' - 'A';
// 		}
// 	}

// 	i++;
// }

// puts(word);
// }
