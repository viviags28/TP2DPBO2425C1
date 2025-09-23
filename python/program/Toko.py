# Class Toko (Parent)
class Toko:
    def __init__(self, id="", namaProduk="", harga=0):
        self.id = id
        self.namaProduk = namaProduk
        self.harga = harga

    # Getter & Setter
    def getId(self):
        return self.id

    def setId(self, id):
        self.id = id

    def getNamaProduk(self):
        return self.namaProduk

    def setNamaProduk(self, namaProduk):
        self.namaProduk = namaProduk

    def getHarga(self):
        return self.harga

    def setHarga(self, harga):
        self.harga = harga