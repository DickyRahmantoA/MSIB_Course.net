/*

#include <stdio.h>
#include <string.h>

struct Barang
{
    char nama[50];
    int harga;
} b[100];

void clearScreen()
{
    for (int i = 0; i < 25; i++)
    {
        printf("\n");
    }

    // system("cls"); // stdlib.h
}

int idx = 0;
int pemasukan = 0;

void tampilkanBarang()
{
    if (idx < 1)
    {
        printf("Belum ada barang\n");
    }
    else
    {
        printf("%4s %-20s %s\n", "No.", "Nama", "Harga");

        for (int i = 0; i < idx; i++)
        {
            printf("%3d. %-20s Rp. %10d\n", i + 1, b[i].nama, b[i].harga);
        }
    }
}

void tambahBarang()
{
    if (idx >= 100)
    {
        printf("Data Sudah Penuh\n");
    }
    else
    {
        clearScreen();
        tampilkanBarang();

        printf("Tambah Barang\n");

        do
        {
            printf("Masukkan Nama Barang [5..15]: ");
            scanf("%[^\n]", b[idx].nama);
            fflush(stdin);
        } while (strlen(b[idx].nama) < 5 || strlen(b[idx].nama) > 15);

        do
        {
            printf("Masukkan Harga Barang: Rp. ");
            scanf("%d", &b[idx].harga);
            fflush(stdin);
        } while (b[idx].harga < 500);

        printf("\n%s berhasil ditambahkan", b[idx].nama);
        idx++;
    }
}

void jualBarang()
{
    int pilihanBarang, jumlahJual;
    int hargaTotal = 0;

    if (idx < 1)
    {
        printf("Belum ada barang\n");
    }
    else
    {
        clearScreen();

        tampilkanBarang();

        printf("\nJual Barang\n");

        do
        {
            printf("Mau jual barang yang mana? [1..%d]: ", idx);
            scanf("%d", &pilihanBarang);
            fflush(stdin);
        } while (pilihanBarang < 1 || pilihanBarang > idx);

        pilihanBarang--;

        for (int i = 0; i < idx; i++)
        {
            if (i == pilihanBarang)
            {
                do
                {
                    printf("Masukkan kuantitas: ");
                    scanf("%d", &jumlahJual);
                    fflush(stdin);
                } while (jumlahJual < 1);

                hargaTotal = jumlahJual * b[i].harga;

                printf("\n\n%d %s telah terjual dengan total Rp. %d",
                       jumlahJual, b[i].nama, hargaTotal);
                pemasukan += hargaTotal;
            }
        }
    }
}

int main()
{
    int pilihan;

    do
    {
        tampilkanBarang();

        printf("\nTotal Pemasukan: Rp. %d\n\n", pemasukan);

        printf("Course-Net IT Store\n");
        printf("--------------------\n");
        printf("1. Tambah Barang\n");
        printf("2. Jual Barang\n");
        printf("3. Exit\n\n");

        do
        {
            printf("Masukkan Pilihan: [1..3] :");
            scanf("%d", &pilihan);
            fflush(stdin);
        } while (pilihan < 1 || pilihan > 3);

        switch (pilihan)
        {
        case 1:
            tambahBarang();
            break;
        case 2:
            jualBarang();
            break;
        case 3:
            printf("\n\n\t\tTerima Kasih telah menggunakan program ini :)\n");
        default:
            break;
        }

        getchar();
        clearScreen();
    } while (pilihan != 3);

    return 0;
}
*/