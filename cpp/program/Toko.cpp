#include <iostream>
using namespace std;

// Class Toko (Parent)
class Toko {
private: 
    string id;          // Atribut id
    string namaProduk;  // Atribut nama Produk
    int harga;          // Atribut harga

public: 
    // Constructor kosong
    Toko() { 
    }

    // Constructor dengan parameter
    Toko(string id, string namaProduk, int harga) {
        this->id = id;
        this->namaProduk = namaProduk;
        this->harga = harga;
    }

    // Getter setter 
    string getId() const {
        return id;
    }
    void setId(string id) {
        this->id = id;
    }

    string getNamaProduk() const {
        return namaProduk;
    }
    void setNamaProduk(string namaProduk) {
        this->namaProduk = namaProduk;
    }

    int getHarga() const {
        return harga;
    }
    void setHarga(int harga) {
        this->harga = harga;
    }
};
