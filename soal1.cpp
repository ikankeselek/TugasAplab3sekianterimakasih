#include <stdio.h>
#include <string.h>

int main(void) {
    char kata[50];
    size_t len;

    while (1) {
        printf("Masukkan sebuah kata (minimal 10 karakter): ");
        if (fgets(kata, sizeof(kata), stdin) == NULL) {
            puts("\nInput gagal. Keluar.");
            return 1;
        }

        len = strlen(kata);
        if (len > 0 && kata[len - 1] == '\n') {
            kata[len - 1] = '\0';
            len--;
        }

        if (len >= 10) break;
        printf("Masukan terlalu pendek (panjang sekarang: %zu). Coba lagi.\n\n", len);
    }

    printf("\nMenampilkan karakter per karakter:\n");
    for (size_t i = 0; i < len; i++) {
        putchar(kata[i]);
        putchar('\n');
    }
}
// Soal Ini dikerjakan Oleh Gabrielle dan Aditya
// while (1) adalah Loop tak hingga yang digunakan supaya program terus meminta input sampai kondisi panjang terpenuhi (break untuk keluar).
// fgets mirip seperti scanf, tetapi berbeda dari scanf, fgets dapat membaca spasi
// dibawah while(1), blok syntax tsb berguna untuk menghapus karakter \n
// if (len >= 10) break; berguna untuk kalau panjang len sudah 10 atau lebih, keluar dari while (break).
// blok syntax selanjutnya berguna untuk menampilkan hasil perkarakter

