#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // Meminta pengguna untuk memasukkan tinggi segitiga
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Loop untuk mencetak segitiga
    for (int i = 1; i <= tinggi; ++i) {
        // Mencetak spasi
        for (int j = 1; j <= tinggi - i; ++j) {
            cout << " ";
        }
        // Mencetak bintang
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
