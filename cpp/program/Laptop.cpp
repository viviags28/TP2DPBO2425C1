#include <iostream>
#include "Elektronik.cpp"
using namespace std;

// Class Laptop (Child) dari class Elektronik (Parent)
class Laptop : public Elektronik {
private:
    string merek; // Atribut merek
    string warna; // Atribut warna
    string processor; // Atribut processor

    public:
    // Constructor kosong
    Laptop() {
    }

    // Constructor dengan parameter
    Laptop(string id, string namaProduk, int harga, string kategori, int jumlahStok, string statusBarang,
           string merek, string warna, string processor)
        : Elektronik(id, namaProduk, harga, kategori, jumlahStok, statusBarang) {
        this->merek = merek;
        this->warna = warna;
        this->processor = processor;
    }

    // Getter setter
    string getMerek() const {
        return merek;
    }
    void setMerek(string merek) {
        this->merek = merek;
    }

    string getWarna() const {
        return warna;
    }
    void setWarna(string warna) {
        this->warna = warna;
    }

    string getProcessor() const {
        return processor;
    }
    void setProcessor(string processor) {
        this->processor = processor;
    }
};
