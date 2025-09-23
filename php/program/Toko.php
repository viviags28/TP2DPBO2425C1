<?php
// Class Toko (Parent)
class Toko {
    private $id; // ID produk elektronik
    private $namaProduk; // Nama produk elektronik
    private $harga; // Harga dalam Rupiah
    private $fotoProduk; // Tambahan untuk menyimpan foto produk

    // Constructor
    public function __construct($id = "", $namaProduk = "", $harga = 0, $fotoProduk = "") {
        $this->id = $id;
        $this->namaProduk = $namaProduk;
        $this->harga = $harga;
        $this->fotoProduk = $fotoProduk;
    }

    // Getter & Setter untuk ID
    public function getId() {
        return $this->id;
    }

    public function setId($id) {
        $this->id = $id;
    }

    // Getter & Setter untuk Nama Produk
    public function getNamaProduk() {
        return $this->namaProduk;
    }

    public function setNamaProduk($namaProduk) {
        $this->namaProduk = $namaProduk;
    }

    // Getter & Setter untuk Harga
    public function getHarga() {
        return $this->harga;
    }

    public function setHarga($harga) {
        $this->harga = $harga;
    }

    // Getter & Setter untuk Foto Produk
    public function getFotoProduk() {
        return $this->fotoProduk;
    }

    public function setFotoProduk($fotoProduk) {
        $this->fotoProduk = $fotoProduk;
    }
}
?>
