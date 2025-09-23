<?php
require_once "Elektronik.php";

class Laptop extends Elektronik {
    private $merek;
    private $warna;
    private $processor;

    // Constructor default
    public function __construct($id = "", $namaProduk = "", $harga = 0,
                                $kategori = "", $jumlahStok = 0, $statusBarang = "",
                                $merek = "", $warna = "", $processor = "", $fotoProduk = "") {
        parent::__construct($id, $namaProduk, $harga, $kategori, $jumlahStok, $statusBarang, $fotoProduk);
        $this->merek = $merek;
        $this->warna = $warna;
        $this->processor = $processor;
    }

    // Getter & Setter
    public function getMerek() {
        return $this->merek;
    }

    public function setMerek($merek) {
        $this->merek = $merek;
    }

    public function getWarna() {
        return $this->warna;
    }

    public function setWarna($warna) {
        $this->warna = $warna;
    }

    public function getProcessor() {
        return $this->processor;
    }

    public function setProcessor($processor) {
        $this->processor = $processor;
    }
}
