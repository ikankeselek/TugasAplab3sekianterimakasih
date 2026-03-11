#include <stdio.h>
#include <conio.h>

int main() {
    char c;

    printf("Input karakter dengan getchar(): ");
    c = getchar();
    printf("Karakter yang dimasukkan: %c\n\n", c);

    printf("Input karakter dengan getche(): ");
    c = getche();
    printf("\nKarakter yang dimasukkan: %c\n\n", c);

    printf("Input karakter dengan getch(): ");
    c = getch();
    printf("\nKarakter yang dimasukkan: %c\n", c);

}

// Soal Ini dikerjakan oleh Aditya dan Gabrielle
// Getchar, Berbeda dengan scanf dimana scanf bisa mengambil banyak karakter, getchar hanya bisa menampung 1 karakter. Getchar juga memerlukan user menekan tombol enter untuk 
// Getche Mirip dengan Getchar, tetapi perbedaannya adalah getche tidak memerlukan user menekan tombol enter
// Getch merupakan suatu varian dari getche. sama sama tidak perlu menekan tombol enter, tetapi perbedaannya adalah getch merahasiakan nilai yg dibacanya, tidak muncul di output

