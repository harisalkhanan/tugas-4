#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk memeriksa apakah sebuah bilangan adalah bilangan prima
bool isPrime(int num) {
    if (num <= 1) return false; // Bilangan kurang dari 2 bukan prima
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; // Jika num habis dibagi i, bukan prima
    }
    return true; // Jika tidak ada pembagi, num adalah prima
}

// Fungsi untuk mendapatkan faktor dari suatu bilangan
vector<int> getFactors(int num) {
    vector<int> factors;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

int main() {
    int batas;

    // Meminta pengguna untuk memasukkan batas
    cout << "Masukkan batas: ";
    cin >> batas;

    int sumEven = 0, sumOdd = 0, sumPrime = 0;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
            sumEven += i;
        }
    }
    cout << "\nJumlah Bilangan Genap: " << sumEven << endl;

    cout << "Faktor Bilangan Genap: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 == 0) {
            vector<int> factors = getFactors(i);
            cout << "\nFaktor dari " << i << ": ";
            for (int factor : factors) {
                cout << factor << " ";
            }
        }
    }

    cout << "\n\nBilangan Ganjil: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
            sumOdd += i;
        }
    }
    cout << "\nJumlah Bilangan Ganjil: " << sumOdd << endl;

    cout << "Faktor Bilangan Ganjil: ";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 != 0) {
            vector<int> factors = getFactors(i);
            cout << "\nFaktor dari " << i << ": ";
            for (int factor : factors) {
                cout << factor << " ";
            }
        }
    }

    cout << "\n\nBilangan Prima: ";
    for (int i = 1; i <= batas; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            sumPrime += i;
        }
    }
    cout << "\nJumlah Bilangan Prima: " << sumPrime << endl;

    cout << "Faktor Bilangan Prima: ";
    for (int i = 1; i <= batas; ++i) {
        if (isPrime(i)) {
            vector<int> factors = getFactors(i);
            cout << "\nFaktor dari " << i << ": ";
            for (int factor : factors) {
                cout << factor << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
