//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <stdlib.h>

// Struktur data untuk mahasiswa
struct Mahasiswa {
    char nama[50];
    int umur;
    char jurusan[50];
};

// Fungsi untuk memasukkan data mahasiswa
void inputMahasiswa(struct Mahasiswa *mhs) {
    printf("Masukkan Nama Mahasiswa: ");
    scanf("%s", mhs->nama);

    printf("Masukkan Umur Mahasiswa: ");
    scanf("%d", &mhs->umur);

    printf("Masukkan Jurusan Mahasiswa: ");
    scanf("%s", mhs->jurusan);
}

int main() {
    struct Mahasiswa mhs;

    // Memanggil fungsi inputMahasiswa untuk memasukkan data mahasiswa
    inputMahasiswa(&mhs);

    // Menampilkan data mahasiswa yang dimasukkan
    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
    printf("Jurusan: %s\n", mhs.jurusan);

    return 0;
}
