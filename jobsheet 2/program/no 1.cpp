//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <string.h>

// Definisikan struct untuk data mahasiswa
struct Mahasiswa {
    char NIM[20];
    char Nama[50];
    char TanggalLahir[20];
    float IPK;
};

int main() {
    // Deklarasi variabel bertipe struct Mahasiswa
    struct Mahasiswa mhs1;

    // Input data mahasiswa
    printf("Masukkan NIM: ");
    scanf("%s", mhs1.NIM);

    printf("Masukkan Nama: ");
    scanf("%s", mhs1.Nama);

    printf("Masukkan Tanggal Lahir (DD/MM/YYYY): ");
    scanf("%s", mhs1.TanggalLahir);

    printf("Masukkan IPK: ");
    scanf("%f", &mhs1.IPK);

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", mhs1.NIM);
    printf("Nama: %s\n", mhs1.Nama);
    printf("Tanggal Lahir: %s\n", mhs1.TanggalLahir);
    printf("IPK: %.2f\n", mhs1.IPK);

    return 0;
}
