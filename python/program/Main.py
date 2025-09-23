from Toko import Toko
from Elektronik import Elektronik
from Laptop import Laptop

# Tambah laptop baru
def tambahLaptop(daftarLaptop):
    # Input data laptop dari user
    id = input("Masukkan ID: ")
    namaProduk = input("Masukkan Nama Produk: ")
    harga = int(input("Masukkan Harga: "))
    kategori = input("Masukkan Kategori: ")
    jumlahStok = int(input("Masukkan Jumlah Stok: "))
    statusBarang = input("Masukkan Status Barang: ")
    merek = input("Masukkan Merek: ")
    warna = input("Masukkan Warna: ")
    processor = input("Masukkan Processor: ")

    # Buat objek Laptop baru dan tambahkan ke daftar
    baru = Laptop(id, namaProduk, harga, kategori, jumlahStok, statusBarang,
                  merek, warna, processor)
    daftarLaptop.append(baru)


# Cari panjang kolom maksimum
def cari_panjang(data):
    id_w = 2; nama_w = 11; harga_w = 5
    kategori_w = 8; stok_w = 5; status_w = 12
    merek_w = 6; warna_w = 6; proc_w = 9

    # Cari panjang maksimum untuk setiap kolom
    for l in data:
        id_w = max(id_w, len(l.id))
        nama_w = max(nama_w, len(l.namaProduk))
        harga_w = max(harga_w, len(str(l.harga)))
        kategori_w = max(kategori_w, len(l.kategori))
        stok_w = max(stok_w, len(str(l.jumlahStok)))
        status_w = max(status_w, len(l.statusBarang))
        merek_w = max(merek_w, len(l.merek))
        warna_w = max(warna_w, len(l.warna))
        proc_w = max(proc_w, len(l.processor))

    # Tambahin padding biar rapi
    return (id_w+2, nama_w+2, harga_w+2, kategori_w+2, stok_w+2,
            status_w+2, merek_w+2, warna_w+2, proc_w+2)


# Cetak tabel
def tampilkan_tabel(data):
    if not data:
        print("Belum ada data:(")
        return

    # Hitung lebar kolom
    id_w, nama_w, harga_w, kategori_w, stok_w, status_w, merek_w, warna_w, proc_w = cari_panjang(data)

    # Fungsi untuk garis pemisah tabel
    def garis():
        print("+" + "-"*id_w + "+" + "-"*nama_w + "+" + "-"*harga_w + "+"
              + "-"*kategori_w + "+" + "-"*stok_w + "+" + "-"*status_w + "+"
              + "-"*merek_w + "+" + "-"*warna_w + "+" + "-"*proc_w + "+")

    # Cetak header tabel
    garis()
    print(f"|{'ID':<{id_w}}|{'Nama Produk':<{nama_w}}|{'Harga':<{harga_w}}|"
          f"{'Kategori':<{kategori_w}}|{'Stok':<{stok_w}}|{'Status':<{status_w}}|"
          f"{'Merek':<{merek_w}}|{'Warna':<{warna_w}}|{'Processor':<{proc_w}}|")
    garis()

    # Cetak setiap baris data
    for l in data:
        print(f"|{l.id:<{id_w}}|{l.namaProduk:<{nama_w}}|{l.harga:<{harga_w}}|"
              f"{l.kategori:<{kategori_w}}|{l.jumlahStok:<{stok_w}}|{l.statusBarang:<{status_w}}|"
              f"{l.merek:<{merek_w}}|{l.warna:<{warna_w}}|{l.processor:<{proc_w}}|")

    garis()


def main():
    daftarLaptop = [
        Laptop("L001", "ROG Zephyrus", 25000000, "Gaming", 10, "Baru", "ASUS", "Hitam", "Intel Core i9"),
        Laptop("L002", "MacBook Air M2", 19000000, "Ultrabook", 7, "Baru", "Apple", "Silver", "Apple M2"),
        Laptop("L003", "ThinkPad X1", 22000000, "Business", 5, "Baru", "Lenovo", "Hitam", "Intel Core i7"),
        Laptop("L004", "Acer Aspire 5", 9500000, "Office", 15, "Baru", "Acer", "Abu-abu", "Intel Core i5"),
        Laptop("L005", "HP Pavilion", 12500000, "Multimedia", 8, "Baru", "HP", "Biru", "AMD Ryzen 7"),
    ]

    while True:
        # Menu utama
        print("\n MENU TOKO ELEKTRONIK ")
        print("1. Tambah Laptop")
        print("2. Tampilkan Semua")
        print("3. Keluar")
        pilih = input("Pilih: ")

        if pilih == "1":
            tambahLaptop(daftarLaptop)
            print("Laptop berhasil ditambahkan:)")
        elif pilih == "2":
            tampilkan_tabel(daftarLaptop)
            print("Silahkan Dilihat dan dipilih laptop yang diinginkan:)")
        elif pilih == "3":
            print("Terima kasih telah menggujungi toko kami:)")
            break
        else:
            print("Pilihan gk ada weh:()")


if __name__ == "__main__":
    main()