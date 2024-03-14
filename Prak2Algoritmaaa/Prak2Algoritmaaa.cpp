#include <iostream>
using namespace std;

int arr[20];                           // Membuat array  dengan panjang data 20
int n;                               // Membuat Variabel inputan n

void input() {                       // Procedur untuk input
	while (true) {
		cout << "Masukan Jumlah Data Pada Array : ";  // Membuat Inputan jumlah element array
		cin >> n;                    // Input dari pengguna
		if (n <= 20)                 // jika n kurang dari atau sama dengan 20
			break;                   // keluar dari loop
		else {                       // jika n lebih dari 20
			cout << "\nArray yang anda maksimal 20 elemen.\n";   // Menanmpilkan pesan jika data lebih dari 20

		}
	}
	cout << endl;                              // Membuat jarak per baris program
	cout << "====================" << endl;    // Membuat tampilan susunan data elemen arrat
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {              // Menggunakan perulangan for untuk menyimpan data pada array
		cout << "Data Ke-" << (i + 1) << ": ";    // Menyimpan nilai data n kedalam array arr
		cin >> arr[i];

	}
}
