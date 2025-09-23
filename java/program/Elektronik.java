public class Elektronik extends Toko {
    private String kategori;
    private int jumlahStok;
    private String statusBarang;

    // Constructor default
    public Elektronik() {
        super();
        this.kategori = "";
        this.jumlahStok = 0;
        this.statusBarang = "";
    }

    // Constructor dengan parameter
    public Elektronik(String id, String namaProduk, int harga,
                      String kategori, int jumlahStok, String statusBarang) {
        super(id, namaProduk, harga); // panggil constructor parent
        this.kategori = kategori;
        this.jumlahStok = jumlahStok;
        this.statusBarang = statusBarang;
    }

    // Getter & Setter
    public String getKategori() {
        return kategori;
    }

    public void setKategori(String kategori) {
        this.kategori = kategori;
    }

    public int getJumlahStok() {
        return jumlahStok;
    }

    public void setJumlahStok(int jumlahStok) {
        this.jumlahStok = jumlahStok;
    }

    public String getStatusBarang() {
        return statusBarang;
    }

    public void setStatusBarang(String statusBarang) {
        this.statusBarang = statusBarang;
    }
}
