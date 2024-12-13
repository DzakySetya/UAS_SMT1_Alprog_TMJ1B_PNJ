#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> kategoriBarang = { "Asus","Lenovo", "Advan"};
vector<string> produk = { "Asus Tuf","Asus ROG", "Lenovo LOQ", "Advan Workplus"};
int pilih_laman, pilih_tindakan;
bool perulangan_kategoriBarang = false;
bool perulangan_produk = false;

void laman_Dashboard() {
	int banyaknya_kategoriBarang = kategoriBarang.size();
	cout << "Kategori Barang: " << banyaknya_kategoriBarang << endl;
	int banyaknya_produk = produk.size();
	cout << "Produk: " << banyaknya_produk << endl;
}


void tampil_kategoriBarang() {
	cout << "\n===== Kategori Barang Yang Tersedia =====" << endl;
	for (int i = 0; i < kategoriBarang.size(); i++) {
			cout << i + 1 << ". " << kategoriBarang[i] << endl;
	}
	
}

void tambah_kategoriBarang() {
	string kategoriBaru;
	cout << "\nMasukkan Ketegori Baru: ";
	cin.ignore();
	getline(cin, kategoriBaru);
	kategoriBarang.push_back(kategoriBaru);
	cout << "Kategori Berhasil Ditambahkan";
}

void edit_kategoriBarang() {
	int edit_kategori;
	cout << "Pilih Nomor Yang Ingin Diedit: ";
	cin >> edit_kategori;

	string edited_kategori;
	cout << "Masukkan Kategori yang Ingin Diedit: ";
	cin.ignore();
	getline(cin, edited_kategori);
	kategoriBarang[edit_kategori - 1] = edited_kategori;
	cout << "Data Berhasil Diperbarui";
}

void hapus_kategoriBarang() {
	int  hapus_kategori;
	cout << "Pilih Nomor Yang Ingin Dihapus: ";
	cin >> hapus_kategori;

	hapus_kategori -= 1;

	kategoriBarang.erase(next(kategoriBarang.begin(), hapus_kategori));
}

void tampil_produk() {
	cout << "\n===== Produk Yang Tersedia =====" << endl;
	for (int i = 0; i < produk.size(); i++) {
		cout << i + 1 << ". " << produk[i] << endl;
	}

}

void tambah_produk() {
	string produkBaru;
	cout << "\nMasukkan Produk Baru: ";
	cin.ignore();
	getline(cin, produkBaru);
	produk.push_back(produkBaru);
	cout << "Produk Berhasil Ditambahkan";
}

void edit_produk() {
	int edit_produk;
	cout << "Pilih Nomor Yang Ingin Diedit: ";
	cin >> edit_produk;

	string edited_produk;
	cout << "Masukkan Produk yang Ingin Diedit: ";
	cin.ignore();
	getline(cin, edited_produk);
	produk[edit_produk - 1] = edited_produk;
	cout << "Data Berhasil Diperbarui";
}

void hapus_produk() {
	int  hapus_produk;
	cout << "Pilih Nomor Yang Ingin Dihapus: ";
	cin >> hapus_produk;

	hapus_produk -= 1;

	produk.erase(next(produk.begin(), hapus_produk));
}



int main() 
{
	laman_Dashboard();
	
	cout << "====== Pilih Laman ======" << endl;
	cout << "1. Kategori Barang" << endl;
	cout << "2. Produk" << endl;
	cout << "Pilih: ";
	cin >> pilih_laman;

	switch (pilih_laman)
	{
	case 1:

		do {
			tampil_kategoriBarang();
			cout << "====== Pilih Tindakan ======" << endl;
			cout << "1. Tambah Kategori" << endl;
			cout << "2. Edit Kategori" << endl;
			cout << "3. Hapus Kategori" << endl;
			cout << "4. Keluar" << endl;
			cout << "Pilih: ";
			cin >> pilih_tindakan;	

			if (pilih_tindakan == 1) {
				tambah_kategoriBarang();

			}
			else if (pilih_tindakan == 2) {
				edit_kategoriBarang();

			}
			else if (pilih_tindakan == 3) {
				hapus_kategoriBarang();
			}
			else if(pilih_tindakan == 4){
				perulangan_kategoriBarang = true;
			}
			else {
				cout << "Pilihan Tidak Tersedia";
			}
		} while (perulangan_kategoriBarang == false);
		
		break;

	case 2:
		do {
			tampil_produk();
			cout << "====== Pilih Tindakan ======" << endl;
			cout << "1. Tambah Produk" << endl;
			cout << "2. Edit Produk" << endl;
			cout << "3. Hapus Produk" << endl;
			cout << "4. Keluar" << endl;
			cout << "Pilih: ";
			cin >> pilih_tindakan;

			if (pilih_tindakan == 1) {
				tambah_produk();

			}
			else if (pilih_tindakan == 2) {
				edit_produk();

			}
			else if (pilih_tindakan == 3) {
				hapus_produk();
			}
			else if (pilih_tindakan == 4) {
				perulangan_produk = true;
			}
			else {
				cout << "Pilihan Tidak Tersedia";
			}
		} while (perulangan_produk == false);
		break;

	default:
		cout << "Pilihan Tidak Tersedia";
		break;
	}	
}
