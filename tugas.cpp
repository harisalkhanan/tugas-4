#include <iostream>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah bilangan adalah bilangan prima
bool isPrime(int num) {
    if (num <= 1) return false; // Bilangan kurang dari 2 bukan prima
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; // Jika num habis dibagi i, bukan prima
    }
    return true; // Jika tidak ada pembagi, num adalah prima
}

int main() {
    int batas;

    // Meminta pengguna untuk memasukkan batas
    cout << "Masukkan batas: ";
    cin >> batas;

    cout << "Bilangan dari 1 hingga " << batas << ":\n";
    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << "\nBilangan Prima: ";
    for (int i = 1; i <= batas; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
