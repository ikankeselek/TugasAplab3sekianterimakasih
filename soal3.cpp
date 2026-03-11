#include <iostream>
using namespace std;

int main() {
    int detik, jam, menit, sisa;

    cout << "Masukkan waktu (detik): ";
    cin >> detik;

    jam = detik / 3600;
    sisa = detik % 3600;
    menit = sisa / 60;
    sisa = sisa % 60;

    cout << detik << " detik = " << jam << " jam " << menit << " menit " << sisa << " detik";
}

// Soal ini dikerjakan oleh Aditya dan Gabrielle
// cin membaca input dan memasukkannya ke variabel detik
// Setiap jam = 3600 detik. Jadi bagi detik dengan 3600 untuk dapat jumlah jam penuh
// % (modulus) memberi sisa detik setelah dipakai untuk jam. Misal 3670 detik → sisa = 70
// Sisa dibagi lagi dengan 60 untuk mendapatkan 1 menit, sisanya dari pembagian meenit itu adalah detik
