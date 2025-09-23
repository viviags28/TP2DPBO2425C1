// Class Toko (Parent)
public class Toko {
    private String id;
    private String namaProduk;
    private int harga;

    // Constructor
    public Toko() {
        this.id = "";
        this.namaProduk = "";
        this.harga = 0;
    }

    public Toko(String id, String namaProduk, int harga) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.harga = harga;
    }

    // Getter & Setter
    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getNamaProduk() {
        return namaProduk;
    }

    public void setNamaProduk(String namaProduk) {
        this.namaProduk = namaProduk;
    }

    public int getHarga() {
        return harga;
    }

    public void setHarga(int harga) {
        this.harga = harga;
    }
}
