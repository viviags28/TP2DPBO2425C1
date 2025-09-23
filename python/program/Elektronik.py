# Import class Toko
from Toko import Toko

# Class Elektronik (Child dari Toko)
class Elektronik(Toko):
    def __init__(self, id="", namaProduk="", harga=0,
                 kategori="", jumlahStok=0, statusBarang=""):
        super().__init__(id, namaProduk, harga)
        self.kategori = kategori
        self.jumlahStok = jumlahStok
        self.statusBarang = statusBarang

    # Getter & Setter
    def getKategori(self):
        return self.kategori

    def setKategori(self, kategori):
        self.kategori = kategori

    def getJumlahStok(self):
        return self.jumlahStok

    def setJumlahStok(self, jumlahStok):
        self.jumlahStok = jumlahStok

    def getStatusBarang(self):
        return self.statusBarang

    def setStatusBarang(self, statusBarang):
        self.statusBarang = statusBarang
