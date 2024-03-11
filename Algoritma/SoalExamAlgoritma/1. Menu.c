#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Kelas : FullStack Application
// Nama : Dicky Rahamnto Ariffirmansyah
// Soal : Menu

int i;
int jumlah, selisih;

void loopingNumber(int jumlah, int selisih)
{
    // Meminta input dari pengguna hingga nilai valid diberikan
    do
    {
        printf("Insert 2 numbers (a b) : ");
        scanf("%d %d", &jumlah, &selisih);
        fflush(stdin); // Membersihkan buffer input
    } while (jumlah < 0 || selisih < 0);

    int angka = 1;
    // Melakukan iterasi sebanyak 'jumlah' kali, dengan selisih antar angka 'selisih'
    for (i = 0; i < jumlah; ++i)
    {
        printf("%d ", angka);
        angka += selisih;
    }
    printf("\n");
}

void printRandomCapitalLetters()
{
    int i;
    // Menghasilkan 2 huruf kapital secara acak
    for (i = 0; i < 2; ++i)
    {
        char capitalLetter = 'A' + rand() % 26; // Menghasilkan huruf kapital acak
        printf("%c", capitalLetter);
    }
}

void initialName()
{
    char name[51]; // Buffer untuk menyimpan nama
    // Meminta input nama hingga nama dengan panjang yang valid diberikan
    do
    {
        printf("Insert Name[5-50]: ");
        scanf("%50[^\n]%*c", name); // Menerima input nama menggunakan scanf
    } while (strlen(name) < 5 || strlen(name) > 50);

    // Cetak 2 huruf kapital secara acak
    printRandomCapitalLetters();

    // Cetak huruf pertama dari nama dalam huruf kapital
    printf("%c", toupper(name[0]));

    // Cetak huruf pertama tiap kata dari nama dalam huruf kapital
    for (i = 1; i < strlen(name); ++i)
    {
        if (name[i - 1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
}

void triangle()
{
    int i, j, k;
    int height;

    // Meminta pengguna untuk memasukkan tinggi segitiga hingga nilai yang valid diberikan
    do
    {
        printf("Insert Triangle Height: ");
        scanf("%d", &height);
    } while (height <= 0);

    // Membuat segitiga dengan tinggi yang dimasukkan
    for (i = 1; i <= height; ++i)
    {
        for (j = 1; j <= height - i; ++j)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; ++k)
        {
            printf("*");
        }
        printf("\n");
    }
}

void grade()
{
    int score;
    // Meminta input score hingga nilai yang valid diberikan
    do
    {
        printf("Insert your algo score: ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    // Menentukan dan mencetak grade berdasarkan score
    printf("Your grade: ");
    if (score >= 90 && score <= 100)
    {
        printf("A");
    }
    else if (score >= 85 && score <= 89)
    {
        printf("A-");
    }
    else if (score >= 80 && score <= 84)
    {
        printf("B+");
    }
    else if (score >= 75 && score <= 79)
    {
        printf("B");
    }
    else if (score >= 70 && score <= 74)
    {
        printf("B-");
    }
    else if (score >= 65 && score <= 69)
    {
        printf("C");
    }
    else if (score >= 50 && score <= 64)
    {
        printf("D");
    }
    else if (score >= 0 && score <= 49)
    {
        printf("E");
    }
    printf("\n");
}

void clearScreen()
{
    // Membersihkan layar dengan mencetak beberapa baris kosong
    for (i = 0; i < 5; i++)
    {
        printf("\n");
    }
}

int main()
{
    int pilihan;

    do
    {
        printf("Menu :\n");
        printf("1. Looping Number\n");
        printf("2. Initial Name\n");
        printf("3. Triangle\n");
        printf("4. Grade\n");
        printf("5. Exit\n\n");

        // Meminta pengguna untuk memilih menu hingga nilai yang valid diberikan
        do
        {
            printf("Choose menu [1..5] : \n");
            scanf("%d", &pilihan);
            fflush(stdin); // Membersihkan buffer input
        } while (pilihan < 1 || pilihan > 5);

        // Menjalankan fungsi sesuai dengan pilihan pengguna
        switch (pilihan)
        {
        case 1:
            loopingNumber(0, 0); // Memanggil fungsi loopingNumber dengan argumen 0
            break;
        case 2:
            initialName(); // Memanggil fungsi initialName
            break;
        case 3:
            triangle(); // Memanggil fungsi triangle
            break;
        case 4:
            grade(); // Memanggil fungsi grade
            break;
        case 5:
            printf("\n\n\t\t Thankyou ! \n");
            break;
        default:
            break;
        }

        while (getchar() != '\n')
            ;               // Membersihkan buffer input
        clearScreen();      // Membersihkan layar setelah setiap iterasi menu
    } while (pilihan != 5); // Mengulang menu hingga pengguna memilih keluar

    return 0;
}
