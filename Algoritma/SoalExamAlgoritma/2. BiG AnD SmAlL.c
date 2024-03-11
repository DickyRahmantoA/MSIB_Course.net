#include <stdio.h>

// Kelas : FullStack Application
// Nama : Dicky Rahamnto Ariffirmansyah
// Soal : Big and small

int main()
{
    int T;
    if (scanf("%d", &T) != 1)
    {             // Membaca jumlah test case
        return 1; // Menghentikan program dengan kode error
    }

    while (T--)
    {
        char S[101];
        scanf("%s", S); // Membaca teks
        int i;
        // Mengubah setiap karakter pada string
        for (i = 0; S[i] != '\0'; i++)
        {
            // Jika indeks genap dan karakter bukan spasi
            if (i % 2 == 0 && S[i] != ' ')
            {
                // Mengubah huruf ke huruf besar
                if (S[i] >= 97 && S[i] <= 122) // 'a' = 97, 'z' = 122
                    S[i] -= 32;                // Mengurangi 32 untuk mengubah huruf ke huruf besar
            }
            // Jika indeks ganjil dan karakter bukan spasi
            else if (S[i] != ' ')
            {
                // Mengubah huruf ke huruf kecil
                if (S[i] >= 65 && S[i] <= 90) // 'A' = 65, 'Z' = 90
                    S[i] += 32;               // Menambah 32 untuk mengubah huruf ke huruf kecil
            }
        }

        printf("%s\n", S); // Output teks yang telah diubah
    }

    return 0;
}
