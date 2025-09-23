#include <iostream>
#include "Toko.cpp"
using namespace std;

// Class Elektronik (Child) dari class Toko (Parent)
class Elektronik : public Toko {
private:
    string kategori; // Atribut kategori
    int jumlahStok; // Atribut jumlah Stok
    string statusBarang; // Atribut status Barang

public:
    // Constructor kosong
    Elektronik() {
    }

    // Constructor dengan parameter
    Elektronik(string id, string namaProduk, int harga,
               string kategori, int jumlahStok, string statusBarang)
        : Toko(id, namaProduk, harga) {
        this->kategori = kategori;
        this->jumlahStok = jumlahStok;
        this->statusBarang = statusBarang;
    }

    // Getter setter
    string getKategori() const {
        return kategori;
    }
    void setKategori(string kategori) {
        this->kategori = kategori;
    }

    int getJumlahStok() const {
        return jumlahStok;
    }
    void setJumlahStok(int jumlahStok) {
        this->jumlahStok = jumlahStok;
    }

    string getStatusBarang() const {
        return statusBarang;
    }
    void setStatusBarang(string statusBarang) {
        this->statusBarang = statusBarang;
    }
};
