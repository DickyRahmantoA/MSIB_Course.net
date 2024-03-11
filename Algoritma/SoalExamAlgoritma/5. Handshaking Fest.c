#include <stdio.h>

// Kelas : FullStack Application
// Nama : Dicky Rahamnto Ariffirmansyah
// Soal : Handshaking

int main()
{
    int T;
    if (scanf("%d", &T) != 1)
    {             // Membaca jumlah test case
        return 1; // Menghentikan program dengan kode error
    }
    int i;
    for (i = 1; i <= T; i++)
    {
        int total_people;
        scanf("%d", &total_people); // Input jumlah total orang

        // Menghitung jumlah jabat tangan menggunakan rumus kombinasi n * (n-1) / 2
        int handshakes = total_people * (total_people - 1) / 2;

        // Output hasil
        printf("Case #%d: %d\n", i, handshakes);
    }

    return 0;
}
