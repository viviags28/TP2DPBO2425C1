# Janji
Saya Vivi Agustina Suryana dengan NIM 2400456 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.

# Diagram 

<img width="227" height="545" alt="Diagram tp2" src="https://github.com/user-attachments/assets/2871b46b-00bd-4d7f-8fd4-51594835c2e6" />

# Desain Program
Program ini memiliki 3 Class, yaitu Toko, Elektronik, dan Laptop yang memiliki hubungan Multilevel Inheritance dimana Toko merupakan parent dari Elektronik, Elektronik merupakan Child dari Toko dan Parent dari Laptop, dan Laptop merupakan Child dari Elektronik.

Class Toko: 
- Atribut:
  1. id: kode unik untuk produk.
  2. namaProduk: nama laptop atau produk.
  3. harga:  harga produk.
  4. fotoProduk (spesial hanya untuk PHP): menyimpan path file gambar produk.
- Methods:
  1. Constructor (kosong & dengan parameter)
  2. Getter dan Setter untuk semua atribut

Class Elektronik:
- Atribut:
  1. kategori: jenis produk elektronik.
  2. jumlahStok: jumlah barang tersedia.
  3. statusBarang: kondisi barang Baru/Bekas.
- Methods:
  1. Constructor (kosong & dengan parameter, memanggil constructor Toko)
  2. Getter dan Setter untuk kategori, jumlahStok, dan statusBarang

Class Laptop:
- Atribut:
  1. merek: brand laptop.
  2. warna: warna fisik laptop.
  3. processor: jenis prosesor laptop.
- Methods:
  1. Constructor (kosong & dengan parameter, memanggil constructor Elektronik)
  2. Getter dan Setter untuk merek, warna, dan processor

# Alur Program
Program diawali dengan inisialisasi data berupa lima objek awal agar tabel tidak kosong sejak dijalankan. Setelah itu, pengguna berinteraksi melalui menu yang berisi pilihan seperti menambah data baru atau menampilkan semua data. Setiap aksi yang dipilih akan langsung memperbarui tabel sehingga perubahan dapat terlihat secara dinamis, baik data awal maupun data tambahan dari pengguna. Program akan terus berjalan dalam loop menu ini sampai pengguna memilih keluar, lalu program berhenti dan menutup seluruh proses.

1. Inisialisasi Data:
   - Program otomatis memiliki 5 objek awal
2. Menu Interaktif:
   - User diberi 3 opsi yaitu tambah data, tampilkan data, atau keluar.
   - Program membaca input user dan menyesuaikan aksi sesuai pilihan.
   - Menu ini berjalan berulang dengan loop sampai user memilih keluar.
3. Dynamic Table:
   - Setiap kali user menambah data baru, tabel otomatis diperbarui.
   - Tabel menampilkan semua data awal ditambah data tambahan dari user.
   - Tampilan selalu konsisten, data lama tetap ada, data baru ditambahkan di bawahnya.
4. Exit:
   - Jika user memilih keluar, program menghentikan loop.
   - Program selesai dan tidak menerima input lagi.

# Dokumentasi
1. Tampilan menu setelah program dimulai.

<img width="753" height="211" alt="image" src="https://github.com/user-attachments/assets/02d205e0-db8b-4e0c-b604-ff41c2cdf917" />

2. Memilih opsi 2 untuk melihat tampilan awal.

<img width="891" height="351" alt="image" src="https://github.com/user-attachments/assets/49f5ee03-dffd-4db1-aaac-7650676f77d0" />
   
3. Memilih opsi 1 untuk mengisi data baru dan user akan di arahkan untuk mengisi data.

<img width="306" height="289" alt="image" src="https://github.com/user-attachments/assets/3a55972c-12d6-44fd-bc8d-c08c0801c7f0" />

4. Memilih opsi 2 untuk melihat penambahan data dan perubahan pada tabel.

<img width="874" height="308" alt="image" src="https://github.com/user-attachments/assets/566dc36e-16ce-445f-bd44-ae2c0f85fe06" />
   
5. Memilih opsi 3 untuk keluar dari program.

<img width="687" height="201" alt="image" src="https://github.com/user-attachments/assets/4e720bd9-f471-4b9c-8174-67ec1960fceb" />
    
