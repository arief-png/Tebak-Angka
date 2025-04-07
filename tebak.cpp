#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));


	cout << "======= TEBAK ANGKA =======" << endl;
	int angka = rand() % 100 + 1;
	cout << "Coba Tebak Angka Berapa Yang Saya Pikirkan ???" << endl;
	int tebakan;

	for (int i = 1; i <= 10; i++) {
		cout << "RULES: Hanya Bisa 10 Kali Tebak !!!\n" << "(Sisa :" << 10 - i << ")" << endl;
		cout << "Tebakan ke - " << i << ":";
		cin >> tebakan;

		if (angka > tebakan) {
			cout << "Lebih Besar Lagi Angka Yang Saya Pikirkan HAHA" << endl;
		}
		else if (angka < tebakan) {
			cout << "Lebih Kecil Lagi Angka Yang Saya Pikirkan HAHA " << endl;
		}
		else if(angka == tebakan) {
			cout << "SELAMAT ANDA BENARRR !!!\nAngka Yang Saya Pikirkan Adalah = " << angka <<"\n" << endl;
			return 0;
		}
	}
	cout << "Anda Telah Menebak Angka 10 Kali Namun Tidak Ada Yang Benar Silahkan Ulang Kembali !!!" << endl;
	
	cin.get();
	return 0;
}
