# Janji
Saya Vivi Agustina Suryana dengan NIM 2400456 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.

## Diagram  
<img width="227" height="545" alt="Diagram tp2" src="https://github.com/user-attachments/assets/2871b46b-00bd-4d7f-8fd4-51594835c2e6" />


## Desain Program  

Program ini memiliki 3 class dengan hubungan **Multilevel Inheritance**:  

- **Toko:** parent dari Elektronik  
- **Elektronik:** child dari Toko, parent dari Laptop  
- **Laptop:** child dari Elektronik  

### Class Toko  
**Atribut:**  
1. `id:` kode unik produk  
2. `namaProduk:` nama laptop/produk  
3. `harga:` harga produk  
4. `fotoProduk:` path file gambar (khusus PHP)  

**Methods:**  
- Constructor (kosong & dengan parameter)  
- Getter & Setter untuk semua atribut  

### Class Elektronik  
**Atribut:**  
1. `kategori:` jenis produk elektronik  
2. `jumlahStok:` jumlah barang tersedia  
3. `statusBarang:` kondisi barang (Baru/Bekas)  

**Methods:**  
- Constructor (kosong & dengan parameter, memanggil constructor Toko)  
- Getter & Setter untuk semua atribut  

### Class Laptop  
**Atribut:**  
1. `merek:` brand laptop  
2. `warna:` warna laptop  
3. `processor:` jenis prosesor  

**Methods:**  
- Constructor (kosong & dengan parameter, memanggil constructor Elektronik)  
- Getter & Setter untuk semua atribut  


## Alur Program  

1. **Inisialisasi Data**  
   - Program otomatis memiliki 5 objek awal supaya tabel tidak kosong.  

2. **Menu Interaktif**  
   - User diberi 3 opsi: tambah data, tampilkan data, keluar.  
   - Input user menentukan aksi yang dijalankan.  
   - Menu berjalan berulang (loop) sampai user memilih keluar.  

3. **Dynamic Table**  
   - Setiap ada data baru, tabel otomatis diperbarui.  
   - Data lama tetap ada, data baru ditambahkan di bawahnya.  
   - Tampilan tabel selalu konsisten.  

4. **Exit**  
   - User memilih keluar.  
   - Program berhenti dan tidak menerima input lagi.  


## Dokumentasi Python

### 1. Tampilan menu saat program dimulai  
<img width="753" height="211" alt="menu" src="https://github.com/user-attachments/assets/02d205e0-db8b-4e0c-b604-ff41c2cdf917" />

### 2. Menampilkan data awal (opsi 2)  
<img width="891" height="351" alt="awal" src="https://github.com/user-attachments/assets/49f5ee03-dffd-4db1-aaac-7650676f77d0" />

### 3. Mengisi data baru (opsi 1)  
<img width="306" height="289" alt="input" src="https://github.com/user-attachments/assets/3a55972c-12d6-44fd-bc8d-c08c0801c7f0" />

### 4. Menampilkan tabel setelah penambahan data  
<img width="874" height="308" alt="tambah" src="https://github.com/user-attachments/assets/566dc36e-16ce-445f-bd44-ae2c0f85fe06" />

### 5. Keluar dari program (opsi 3)  
<img width="687" height="201" alt="exit" src="https://github.com/user-attachments/assets/4e720bd9-f471-4b9c-8174-67ec1960fceb" />

## Dokumentasi C++

### 1. Tampilan menu saat program dimulai  
<img width="808" height="230" alt="image" src="https://github.com/user-attachments/assets/a9c5f4c1-a1ae-4c1b-bca7-d7320a7d8ef2" />

### 2. Menampilkan data awal (opsi 2)  
<img width="900" height="385" alt="image" src="https://github.com/user-attachments/assets/1f5c3861-e5bd-4c93-9eaf-f0e51bd200d1" />

### 3. Mengisi data baru (opsi 1)  
<img width="374" height="288" alt="image" src="https://github.com/user-attachments/assets/0e0932c0-f47a-4f5f-9698-70eb14ac8d18" />

### 4. Menampilkan tabel setelah penambahan data  
<img width="890" height="311" alt="image" src="https://github.com/user-attachments/assets/6646b0ab-2e25-4d73-b324-c08b15dc88c3" />

### 5. Keluar dari program (opsi 3)  
<img width="661" height="218" alt="image" src="https://github.com/user-attachments/assets/c999fb3e-d98c-4829-a557-4d26af179442" />

## Dokumentasi Java

### 1. Tampilan menu saat program dimulai  
<img width="786" height="237" alt="image" src="https://github.com/user-attachments/assets/4d9f3486-4152-4a09-9b0c-9b41c55dd70c" />

### 2. Menampilkan data awal (opsi 2)  
<img width="1014" height="385" alt="image" src="https://github.com/user-attachments/assets/f7e0a963-8040-4025-a6c8-3efa764ad3b2" />

### 3. Mengisi data baru (opsi 1)  
<img width="366" height="292" alt="image" src="https://github.com/user-attachments/assets/7a2f3788-3bbb-4231-9ed5-c1ff44aae9b9" />

### 4. Menampilkan tabel setelah penambahan data  
<img width="1022" height="302" alt="image" src="https://github.com/user-attachments/assets/f9106c87-5dd9-405b-8762-ddda78e0712c" />

### 5. Keluar dari program (opsi 3)  
<img width="639" height="195" alt="image" src="https://github.com/user-attachments/assets/cd48ac9a-2c94-448d-8998-53d38f1db9fd" />

## Dokumentasi PHP

### Tampilan menu saat program dimulai  
<img width="1366" height="768" alt="image" src="https://github.com/user-attachments/assets/515fb33b-2166-4150-90a3-5176b85df335" />


## Catatan  
- Program ditulis menggunakan **C++, Java, Python, dan Php**.  
- Menggunakan konsep **OOP Multilevel Inheritance**.  
- Tampilan data dibuat dalam bentuk **tabel dinamis**.  
