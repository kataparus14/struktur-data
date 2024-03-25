//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nama[50];
    int umur;
    char jurusan[50];
};

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(struct Mahasiswa mhs) {
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
    printf("Jurusan: %s\n", mhs.jurusan);
}

int main() {
    // Membuat objek mahasiswa
    struct Mahasiswa mhs1 = {"fhandy", 18, "Teknik Informatika"};
    struct Mahasiswa mhs2 = {"Budi", 21, "Sistem Informasi"};

    // Memanggil fungsi untuk menampilkan data mahasiswa
    printf("Data Mahasiswa 1:\n");
    tampilkanMahasiswa(mhs1);

    printf("\nData Mahasiswa 2:\n");
    tampilkanMahasiswa(mhs2);

    return 0;
}
