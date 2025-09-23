from Elektronik import Elektronik

# Class Laptop (Child dari Elektronik)
class Laptop(Elektronik):
    def __init__(self, id="", namaProduk="", harga=0,
                 kategori="", jumlahStok=0, statusBarang="",
                 merek="", warna="", processor=""):
        super().__init__(id, namaProduk, harga, kategori, jumlahStok, statusBarang)
        self.merek = merek
        self.warna = warna
        self.processor = processor

    # Getter & Setter
    def getMerek(self):
        return self.merek

    def setMerek(self, merek):
        self.merek = merek

    def getWarna(self):
        return self.warna

    def setWarna(self, warna):
        self.warna = warna

    def getProcessor(self):
        return self.processor

    def setProcessor(self, processor):
        self.processor = processor