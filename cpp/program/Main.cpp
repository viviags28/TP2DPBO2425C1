#include <bits/stdc++.h>
#include "Laptop.cpp"
using namespace std;

// Fungsi untuk tambah laptop
void tambahLaptop(list<Laptop> &daftarLaptop) {
    string id, namaProduk, kategori, statusBarang, merek, warna, processor;
    int harga, jumlahStok;

    // Input dari user
    cout << "Masukkan ID: ";
    getline(cin, id);

    cout << "Masukkan Nama Produk: ";
    getline(cin, namaProduk);

    cout << "Masukkan Harga: ";
    cin >> harga; cin.ignore();

    cout << "Masukkan Kategori: ";
    getline(cin, kategori);

    cout << "Masukkan Jumlah Stok: ";
    cin >> jumlahStok; cin.ignore();

    cout << "Masukkan Status Barang: ";
    getline(cin, statusBarang);

    cout << "Masukkan Merek: ";
    getline(cin, merek);

    cout << "Masukkan Warna: ";
    getline(cin, warna);

    cout << "Masukkan Processor: ";
    getline(cin, processor);

    // Buat objek Laptop baru
    Laptop baru(id, namaProduk, harga, kategori, jumlahStok, statusBarang,
                merek, warna, processor);

    // Simpan ke dalam list
    daftarLaptop.push_back(baru);

}

// Cari panjang kolom maksimum
void cari_panjang(const list<Laptop>& data,
                  int& id_w, int& nama_w, int& harga_w,
                  int& kategori_w, int& stok_w, int& status_w,
                  int& merek_w, int& warna_w, int& proc_w) {
    // Nilai minimal awal tiap kolom
    id_w = 2; nama_w = 11; harga_w = 5;
    kategori_w = 8; stok_w = 5; status_w = 12;
    merek_w = 6; warna_w = 6; proc_w = 9;

    // Cek semua data, update panjang maksimal
    for (auto& l : data) {
        id_w = max(id_w, (int)l.getId().length());
        nama_w = max(nama_w, (int)l.getNamaProduk().length());
        harga_w = max(harga_w, (int)to_string(l.getHarga()).length());
        kategori_w = max(kategori_w, (int)l.getKategori().length());
        stok_w = max(stok_w, (int)to_string(l.getJumlahStok()).length());
        status_w = max(status_w, (int)l.getStatusBarang().length());
        merek_w = max(merek_w, (int)l.getMerek().length());
        warna_w = max(warna_w, (int)l.getWarna().length());
        proc_w = max(proc_w, (int)l.getProcessor().length());
    }

    // Padding biar rapi
    id_w += 2; nama_w += 2; harga_w += 2;
    kategori_w += 2; stok_w += 2; status_w += 2;
    merek_w += 2; warna_w += 2; proc_w += 2;
}

// Cetak tabel
void tampilkan_tabel(const list<Laptop>& data) {
    if (data.empty()) {
        cout << "Belum ada data:(\n";
        return;
    }

    int id_w, nama_w, harga_w, kategori_w, stok_w, status_w, merek_w, warna_w, proc_w;
    cari_panjang(data, id_w, nama_w, harga_w, kategori_w, stok_w, status_w, merek_w, warna_w, proc_w);

    // Fungsi lokal untuk cetak garis tabel
    auto garis = [&]() {
        cout << "+"
             << string(id_w, '-') << "+"
             << string(nama_w, '-') << "+"
             << string(harga_w, '-') << "+"
             << string(kategori_w, '-') << "+"
             << string(stok_w, '-') << "+"
             << string(status_w, '-') << "+"
             << string(merek_w, '-') << "+"
             << string(warna_w, '-') << "+"
             << string(proc_w, '-') << "+"
             << endl;
    };

    // Cetak header tabel
    garis();
    cout << "|" << setw(id_w) << left << "ID"
         << "|" << setw(nama_w) << left << "Nama Produk"
         << "|" << setw(harga_w) << left << "Harga"
         << "|" << setw(kategori_w) << left << "Kategori"
         << "|" << setw(stok_w) << left << "Stok"
         << "|" << setw(status_w) << left << "Status"
         << "|" << setw(merek_w) << left << "Merek"
         << "|" << setw(warna_w) << left << "Warna"
         << "|" << setw(proc_w) << left << "Processor" << "|" << endl;
    garis();

    // Cetak semua data
    for (auto& l : data) {
        cout << "|" << setw(id_w) << left << l.getId()
             << "|" << setw(nama_w) << left << l.getNamaProduk()
             << "|" << setw(harga_w) << left << l.getHarga()
             << "|" << setw(kategori_w) << left << l.getKategori()
             << "|" << setw(stok_w) << left << l.getJumlahStok()
             << "|" << setw(status_w) << left << l.getStatusBarang()
             << "|" << setw(merek_w) << left << l.getMerek()
             << "|" << setw(warna_w) << left << l.getWarna()
             << "|" << setw(proc_w) << left << l.getProcessor() << "|" << endl;
    }

    garis();
}

int main() {
    list<Laptop> daftarLaptop;

    // Tambahkan 5 laptop awal
    daftarLaptop.push_back(Laptop("L001", "ROG Zephyrus", 25000000,
                                  "Gaming", 10, "Baru",
                                  "ASUS", "Hitam", "Intel Core i9"));
    daftarLaptop.push_back(Laptop("L002", "MacBook Air M2", 19000000,
                                  "Ultrabook", 7, "Baru",
                                  "Apple", "Silver", "Apple M2"));
    daftarLaptop.push_back(Laptop("L003", "ThinkPad X1", 22000000,
                                  "Business", 5, "Baru",
                                  "Lenovo", "Hitam", "Intel Core i7"));
    daftarLaptop.push_back(Laptop("L004", "Acer Aspire 5", 9500000,
                                  "Office", 15, "Baru",
                                  "Acer", "Abu-abu", "Intel Core i5"));
    daftarLaptop.push_back(Laptop("L005", "HP Pavilion", 12500000,
                                  "Multimedia", 8, "Baru",
                                  "HP", "Biru", "AMD Ryzen 7"));

    int pilih;

    // Menu utama
    do {
        cout << "\n MENU TOKO ELEKTRONIK \n";
        cout << "1. Tambah Laptop\n";
        cout << "2. Tampilkan Semua\n";
        cout << "3. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();

        if (pilih == 1) {
            tambahLaptop(daftarLaptop);
            cout << "Laptop berhasil ditambahkan:)\n";
        } else if (pilih == 2) {
            tampilkan_tabel(daftarLaptop);
            cout << "Silahkan Dilihat dan dipilih laptop yang diinginkan:)\n";
        }
    } while (pilih != 3);
    cout << "Terima kasih telah menggujungi toko kami:)\n";

    return 0;
}
