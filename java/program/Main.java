import java.util.ArrayList; // Library untuk menyimpan list data laptop
import java.util.Scanner; // Library untuk input data dari user

public class Main {

    // Tambah laptop baru
    public static void tambahLaptop(ArrayList<Laptop> daftarLaptop, Scanner sc) {
        System.out.print("Masukkan ID: ");
        String id = sc.nextLine();
        System.out.print("Masukkan Nama Produk: ");
        String namaProduk = sc.nextLine();
        System.out.print("Masukkan Harga: ");
        int harga = Integer.parseInt(sc.nextLine());
        System.out.print("Masukkan Kategori: ");
        String kategori = sc.nextLine();
        System.out.print("Masukkan Jumlah Stok: ");
        int jumlahStok = Integer.parseInt(sc.nextLine()); // Konversi String ke int
        System.out.print("Masukkan Status Barang: ");
        String statusBarang = sc.nextLine();
        System.out.print("Masukkan Merek: ");
        String merek = sc.nextLine();
        System.out.print("Masukkan Warna: ");
        String warna = sc.nextLine();
        System.out.print("Masukkan Processor: ");
        String processor = sc.nextLine();

        // Buat objek Laptop baru dari input user
        Laptop baru = new Laptop(id, namaProduk, harga, kategori, jumlahStok,
                                 statusBarang, merek, warna, processor);
        // Tambahkan ke list                                
        daftarLaptop.add(baru);

        System.out.println("Laptop berhasil ditambahkan:)");
    }

    // Tampilkan tabel
    public static void tampilkanTabel(ArrayList<Laptop> data) {
        if (data.isEmpty()) {
            System.out.println("Belum ada data :(");
            return;
        }

        // Header tabel
        String format = "| %-5s | %-20s | %-10s | %-12s | %-5s | %-10s | %-10s | %-10s | %-15s |%n";
        String garis = "+-------+----------------------+------------+--------------+-------+------------+------------+------------+-----------------+";

        System.out.println(garis);
        System.out.printf(format, "ID", "Nama Produk", "Harga", "Kategori", "Stok", "Status", "Merek", "Warna", "Processor");
        System.out.println(garis);

        // Cetak setiap baris
        for (Laptop l : data) {
            System.out.printf(format,
                    l.getId(),
                    l.getNamaProduk(),
                    l.getHarga(),
                    l.getKategori(),
                    l.getJumlahStok(),
                    l.getStatusBarang(),
                    l.getMerek(),
                    l.getWarna(),
                    l.getProcessor()
            );
        }
        System.out.println(garis);
        System.out.println("Silahkan Dilihat dan dipilih laptop yang diinginkan:)");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Laptop> daftarLaptop = new ArrayList<>();

        // Data awal
        daftarLaptop.add(new Laptop("L001", "ROG Zephyrus", 25000000, "Gaming", 10, "Baru", "ASUS", "Hitam", "Intel Core i9"));
        daftarLaptop.add(new Laptop("L002", "MacBook Air M2", 19000000, "Ultrabook", 7, "Baru", "Apple", "Silver", "Apple M2"));
        daftarLaptop.add(new Laptop("L003", "ThinkPad X1", 22000000, "Business", 5, "Baru", "Lenovo", "Hitam", "Intel Core i7"));
        daftarLaptop.add(new Laptop("L004", "Acer Aspire 5", 9500000, "Office", 15, "Baru", "Acer", "Abu-abu", "Intel Core i5"));
        daftarLaptop.add(new Laptop("L005", "HP Pavilion", 12500000, "Multimedia", 8, "Baru", "HP", "Biru", "AMD Ryzen 7"));

        boolean running = true; // flag pengendali loop

        while (running) {
            System.out.println("\n MENU TOKO ELEKTRONIK ");
            System.out.println("1. Tambah Laptop");
            System.out.println("2. Tampilkan Semua");
            System.out.println("3. Keluar");
            System.out.print("Pilih: ");
            String pilih = sc.nextLine();

            if (pilih.equals("1")) {
                tambahLaptop(daftarLaptop, sc);
            } else if (pilih.equals("2")) {
                tampilkanTabel(daftarLaptop);
            } else if (pilih.equals("3")) {
                System.out.println("Terima kasih telah menggujungi toko kami:)");
                running = false; // hentikan loop
            } else {
                System.out.println("Pilihan gk ada weh :()");
            }
        }

        sc.close();
    }
}