#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta pengguna untuk memasukkan jumlah bilangan Fibonacci yang diinginkan
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    int a = 0, b = 1, next;

    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; ++i) {
        cout << a << " "; // Menampilkan bilangan Fibonacci saat ini
        next = a + b;     // Menghitung bilangan Fibonacci selanjutnya
        a = b;            // Memperbarui a untuk bilangan selanjutnya
        b = next;        // Memperbarui b untuk bilangan selanjutnya
    }
    
    cout << endl;

    return 0;
}
