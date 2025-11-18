#include <iostream>
#include <string>
using namespace std;

const int JUMLAH_MHS = 10;
const int PERTEMUAN = 5;

struct Data {
    string nama;
    string nim;
    char status[PERTEMUAN];
};

Data mahasiswa[JUMLAH_MHS] = {
    {"Neshia Septiarifa",  "24051130001"},
    {"Luthfian Afif",      "24051130002"},
    {"Angger Sekarayu",    "24051130003"},
    {"Haidar Tafazul",     "24051130004"},
    {"Glenferdinza",       "24051130005"},
    {"Mulisa Kusuma",      "24051130006"},
    {"Kartika Hapsari",    "24051130007"},
    {"La D'raz Mamora",    "24051130008"},
    {"Elfrina Maya",       "24051130009"},
    {"Bayu Arya",          "24051130010"}
};

int cariMahasiswa(string nim) {
    for (int i = 0; i < JUMLAH_MHS; i++) {
        if (mahasiswa[i].nim == nim)
            return i;
    }
    return -1;
}

void inputPresensi() {
    string nim;
    cout << "\nMasukkan NIM: ";
    cin >> nim;

    int idx = cariMahasiswa(nim);
    if (idx == -1) {
        cout << "NIM tidak ditemukan!\n";
        return;
    }

    cout << "\nNama: " << mahasiswa[idx].nama << endl;

    int hari = -1;
    for (int j = 0; j < PERTEMUAN; j++) {
        if (mahasiswa[idx].status[j] == '\0') {
            hari = j;
            break;
        }
    }

    if (hari == -1) {
        cout << "Presensi sudah lengkap untuk 5 pertemuan!\n";
        return;
    }

    cout << "Mengisi presensi pertemuan ke-" << hari + 1 << endl;
    cout << "Masukkan status (H/I/S/A): ";

    char s;
    cin >> s;

    mahasiswa[idx].status[hari] = toupper(s);

    cout << "Presensi tersimpan untuk pertemuan " << hari + 1 << "!\n";
}

int main() {
    cout << "PROGRAM INPUT PRESENSI MAHASISWA\n";
    inputPresensi();
    return 0;
}
