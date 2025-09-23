<?php
require_once "Toko.php";

// Class Elektronik (Child dari Toko)
class Elektronik extends Toko {
    private $kategori;
    private $jumlahStok;
    private $statusBarang;

    // Constructor default
    public function __construct($id = "", $namaProduk = "", $harga = 0, $fotoProduk = "",
                                $kategori = "", $jumlahStok = 0, $statusBarang = "") {
        // Panggil constructor parent
        parent::__construct($id, $namaProduk, $harga, $fotoProduk);
        $this->kategori = $kategori;
        $this->jumlahStok = $jumlahStok;
        $this->statusBarang = $statusBarang;
    }

    // Getter & Setter untuk kategori
    public function getKategori() {
        return $this->kategori;
    }

    public function setKategori($kategori) {
        $this->kategori = $kategori;
    }

    // Getter & Setter untuk jumlah stok
    public function getJumlahStok() {
        return $this->jumlahStok;
    }

    public function setJumlahStok($jumlahStok) {
        $this->jumlahStok = $jumlahStok;
    }

    // Getter & Setter untuk status barang
    public function getStatusBarang() {
        return $this->statusBarang;
    }

    public function setStatusBarang($statusBarang) {
        $this->statusBarang = $statusBarang;
    }
}
?>
