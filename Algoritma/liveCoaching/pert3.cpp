// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// #include<stdlib.h>
// #include<time.h>
// #define clear() fflush(stdin);

// int main()
// {

// - stdio.h
// printf, scanf, getchar, puts

// - ctype.h
// library untuk manipulasi karakter

//	char inisial = 'A';

//	printf("isalpha = %d\n" , isalpha(inisial));
// apakah karakter ini adalah alfabet
// 1 = true (huruf besar)
// 2 = true (huruf kecil)
// 0 = false

//	if(inisial >= 'A' && inisial <='Z'){
//		puts("ini adalah huruf kapital");
//	} else if(inisial >= 'a' && inisial; <= 'z') {
//		puts("ini adalah huruf kecil");
//	} else if (inisial >= '0' && inisial; <= '9') {
//		puts("ini adalah digit");
//	}

//	printf("isdigit = %d\n" , isdigit(inisial));

//	inisial = tolower(inisial);

//	printf("tolower = %c\n" , tolower('A'));
//	printf("toupper = %c\n" , toupper('a'));

// - string.h
// manipulasi string
// char nama[100] = {};
//	char nama[100] = "Coursenet Indonesia";
//	int angka[100] = {};

//	for(int i = 0; i < 100; i++){
//		printf("%d ", angka[i]);
//	}

// cek panjang string
//	int length = strlen(nama);
//	printf("strlen = %d\n", length);

// copy string
//	int a = 10;
//	int b = a;

//	char str[50] = "Coursenet";
//	strcpy([str dest], [str target]);
// sebelah kiri yang kosong, sebelah kanan yang isi
//	strcpy(str, nama);

//	printf("str = %s\n", str);
//	printf("nama = %s\n", nama);

// membandingkan string
// strcmp([str1], [str2]) // string compare

//	printf("nama = str = %d\n", strcmp(nama, str));
//	printf("AA = AB = %d\n", strcmp("AA", "AB"));
//	printf("AA = AA = %d\n", strcmp("AA", "AA"));
//	printf("a = A = %d\n", strcmp("a", "A"));
// -1 = str1 < str2
// 0 = str1 == str2
// 1 = str1 > str2

// sttrev string reverse
// tapi tidak direkomendasikan karna bukan bagian dari standard library

// - stdlib.h
//	srand(time(NULL));
// time(null) = berapa detik yg lewat sejak januari 1990
//	for(int i=1; i<=10; i++){
//		for(int i =1; i<=10; i++){
//			printf("%5d ", rand());
//		}
//		puts("");
//	}
//

// ----------------------------------------------------

// struct
// kumpulan data yang berbeda

//	struct

// printf("Odd Upper and Even Lower\n");
// printf("--------------------\n");
// char input[25] = "coursenet indonesia";
// printf("Input Words : %s\n\n", input);
// int length = strlen(input);

// for (int i = 0; i < length; i++)
// {
// 	if (i % 2 == 0)
// 	{
// 		printf("%c", toupper(input[i]));
// 	}
// 	else
// 	{
// 		printf("%c", tolower(input[i]));
// 	}
// }

// printf("\n");

// return 0;
// }
