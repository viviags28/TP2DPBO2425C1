<?php
require_once "Laptop.php";

// Hardcode data awal
$daftarLaptop = [
    new Laptop("L001", "ROG Zephyrus", 25000000, "images/rog.jpg", "Gaming", 10, "Baru", "ASUS", "Hitam", "Intel Core i9"),
    new Laptop("L002", "MacBook Air M2", 19000000, "images/macbook.jpg", "Ultrabook", 7, "Baru", "Apple", "Silver", "Apple M2"),
    new Laptop("L003", "ThinkPad X1", 22000000, "images/thinkpad.jpg", "Business", 5, "Baru", "Lenovo", "Hitam", "Intel Core i7"),
    new Laptop("L004", "Acer Aspire 5", 9500000, "images/acer.jpg", "Office", 15, "Baru", "Acer", "Abu-abu", "Intel Core i5"),
    new Laptop("L005", "HP Pavilion", 12500000, "images/hp.jpg", "Multimedia", 8, "Baru", "HP", "Biru", "AMD Ryzen 7"),
];

// Tampilkan data dalam tabel HTML
echo "
<div style='text-align: center; margin-top: 30px;'>
    <h2>Daftar Laptop di Toko Elektronik</h2>
    <table border='1' cellpadding='8' cellspacing='0' style='margin: 0 auto; border-collapse: collapse;'>
        <tr style='background-color: #f2f2f2;'>
            <th>ID</th>
            <th>Nama Produk</th>
            <th>Harga</th>
            <th>Kategori</th>
            <th>Stok</th>
            <th>Status</th>
            <th>Merek</th>
            <th>Warna</th>
            <th>Processor</th>
            <th>Foto Produk</th>
        </tr>";

// Looping untuk menampilkan setiap laptop
foreach ($daftarLaptop as $l) {
    echo "<tr>"; // Mulai baris baru
    echo "<td>" . $l->getId() . "</td>"; 
    echo "<td>" . $l->getNamaProduk() . "</td>";
    echo "<td>Rp " . number_format($l->getHarga(), 0, ',', '.') . "</td>";
    echo "<td>" . $l->getKategori() . "</td>";
    echo "<td>" . $l->getJumlahStok() . "</td>";
    echo "<td>" . $l->getStatusBarang() . "</td>";
    echo "<td>" . $l->getMerek() . "</td>";
    echo "<td>" . $l->getWarna() . "</td>";
    echo "<td>" . $l->getProcessor() . "</td>";
    echo "<td><img src='" . $l->getFotoProduk() . "' width='80'></td>";
    echo "</tr>";
}
echo "</table>";
?>
