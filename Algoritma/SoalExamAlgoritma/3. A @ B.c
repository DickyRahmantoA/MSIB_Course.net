#include <stdio.h>

// Kelas : FullStack Application
// Nama : Dicky Rahamnto Ariffirmansyah
// Soal : A @ B

// Fungsi untuk menghitung jumlah digit dari sebuah bilangan
int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10; // Menambahkan digit terakhir dari n ke sum
        n /= 10;       // Menghilangkan digit terakhir dari n
    }
    return sum; // Mengembalikan total jumlah digit
}

// Fungsi untuk menghitung hasil hash dari dua bilangan
int calculateHash(int A, int B)
{
    // Hasil hash dihitung dengan mengalikan jumlah digit dari A dan B
    return digitSum(A) * digitSum(B);
}

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
        int A, B;
        scanf("%d %d", &A, &B);
        int result = calculateHash(A, B);    // Memanggil fungsi calculateHash
        printf("Case #%d: %d\n", i, result); // Menampilkan hasil hash
    }

    return 0;
}
