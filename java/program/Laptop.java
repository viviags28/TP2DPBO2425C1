public class Laptop extends Elektronik {
    private String merek;
    private String warna;
    private String processor;

    // Constructor default
    public Laptop() {
        super();
        this.merek = "";
        this.warna = "";
        this.processor = "";
    }

    // Constructor dengan parameter
    public Laptop(String id, String namaProduk, int harga,
                  String kategori, int jumlahStok, String statusBarang,
                  String merek, String warna, String processor) {
        super(id, namaProduk, harga, kategori, jumlahStok, statusBarang); // panggil parent (Elektronik)
        this.merek = merek;
        this.warna = warna;
        this.processor = processor;
    }

    // Getter & Setter
    public String getMerek() {
        return merek;
    }

    public void setMerek(String merek) {
        this.merek = merek;
    }

    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    public String getProcessor() {
        return processor;
    }

    public void setProcessor(String processor) {
        this.processor = processor;
    }
}
