#include <stdio.h>

// Kelas : FullStack Application
// Nama : Dicky Rahamnto Ariffirmansyah
// Soal : RIHA RINA

int main()
{
    int T;
    if (scanf("%d", &T) != 1)
    {             // Membaca jumlah test case
        return 1; // Menghentikan program dengan kode error
    }

    int i;
    for (i = 1; i <= T; i++)
    {                            // Loop untuk setiap kasus uji sebanyak T kali
        char nama1[5], nama2[5]; // Mendeklarasikan array karakter untuk menyimpan dua string dengan maksimal 4 karakter
        scanf("%s", nama1);      // Membaca string pertama dari input dan menyimpannya dalam variabel nama1
        scanf("%s", nama2);      // Membaca string kedua dari input dan menyimpannya dalam variabel nama2

        // Mencetak hasil kombinasi karakter dari kedua string sesuai dengan format yang ditentukan
        printf("Case #%d: %c%c%c%c %c%c%c%c \n", i, nama1[0], nama1[1], nama2[0], nama2[1], nama1[2], nama1[3], nama2[2], nama2[3]);
    }

    return 0; // Mengembalikan nilai 0 sebagai penanda program berakhir dengan sukses
}
