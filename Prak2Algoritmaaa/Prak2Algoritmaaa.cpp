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

void insertionsort() {                        // Prosedur insertionsort
	int temp;                                 // Membuat Variabel data temporer atau penyimpanan semantara
	int i, j;                                 // Membuat variabel j sebagai penanda

	for (i = 1; i <= n - 1; i++) {            // 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];                      // 2. Simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;                            // 3. Setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) {    // 4. Looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp
			arr[j + 1] = arr[j];              // 4a. Simpan arr[j] ke dalam variabel arr[j+1]
			j--;                              // 4b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;                    // 5. simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass" << i << ": ";        // Output ke layar
		for (int k = 0; k < n; k++) {         // looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";             // Output ke layar
		}
	}
}

void display() {                                // Prosedur untuk menampilkan hasil
	cout << endl;                              // Output baris kosong
	cout << "================================" << endl;    // Output ke layar
	cout << "Elemen Array yang telah tersusun" << endl;    // Output ke layar
	cout << "================================" << endl;    // Output ke layar
	for (int j = 0; j < n; j++) {                // looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;                    // Output ke layar
	}
	cout << endl;                                // Output Baris kosong
}