# sistem_presensi_mahasiswa
📘 Sistem Presensi Mahasiswa – C++

Program ini dibuat sebagai tugas akhir mata kuliah Praktikum Algoritma Pemrograman.
Aplikasi berjalan di terminal/console dan digunakan untuk melakukan:

Input presensi mahasiswa per pertemuan

Menyimpan status presensi (Hadir, Izin, Sakit, Alpa)

Menampilkan rekap semua mahasiswa

Menampilkan mahasiswa dengan alpa tertinggi

Mencari data presensi berdasarkan NIM

Program ini dibuat menggunakan bahasa C++ dengan penggunaan struct, array statis, pengulangan, percabangan, dan fungsi modular.

📂 Fitur Program
1️⃣ Input Presensi

User memasukkan NIM

Sistem mencari mahasiswa berdasarkan NIM

Jika ditemukan, status presensi 1 pertemuan dapat diinput

Status hanya dapat berupa:

H → Hadir

I → Izin

S → Sakit

A → Alpa

Program otomatis mendeteksi pertemuan keberapa yang belum terisi.

2️⃣ Tampilkan Rekap

Program menampilkan tabel berisi:

| NIM | Nama | Hadir | Sakit | Izin | Alpa |

Sebelum ditampilkan, fungsi hitungRekap() digunakan untuk menghitung jumlah H, I, S, A dari setiap mahasiswa.

Di bagian bawah, program juga menampilkan:

Mahasiswa dengan jumlah Alpa tertinggi

Pengurutan dilakukan dengan fungsi bubbleSortAlpa() yang mengurutkan mahasiswa berdasarkan alpa terbanyak.

3️⃣ Cari Mahasiswa

User dapat mencari mahasiswa berdasarkan NIM.
Program menampilkan:

Nama mahasiswa

Jumlah Hadir

Jumlah Sakit

Jumlah Izin

Jumlah Alpa

Jika tidak ditemukan → akan muncul pesan error.

4️⃣ Keluar Program

Menutup aplikasi.

🧠 Struktur Data yang Digunakan

Program menggunakan struktur berikut:

struct Data {
    string nim;
    string nama;
    char status[5]; // 5 pertemuan
    int hadir;
    int izin;
    int sakit;
    int alpa;
};


status[5] menyimpan presensi 5 pertemuan.

🛠️ Cara Kerja Program Secara Umum

Data awal (nim dan nama) sudah disiapkan dalam array 10 mahasiswa.

User memilih menu:

Input presensi

Tampilkan rekap

Cari mahasiswa

Jika input presensi:

Sistem mencari indeks mahasiswa (cariMahasiswa()).

Menentukan pertemuan keberapa yang kosong.

Menyimpan status presensi.

Jika tampilkan rekap:

Hitung H, I, S, A → (hitungRekap()).

Cetak tabel rekap.

Urutkan berdasarkan Alpa → (bubbleSortAlpa()).

Tampilkan mahasiswa dengan alpa tertinggi.

Jika cari mahasiswa:

Cari NIM

Tampilkan presensi lengkap.

Program berjalan sampai user memilih menu keluar.

📌 Contoh Menu Program
=== MENU PRESENSI MAHASISWA ===
1. Input Presensi
2. Tampilkan Rekap
3. Cari Mahasiswa
4. Keluar
Pilih menu:

📦 Teknologi yang Digunakan

Bahasa: C++

Compiler: g++ / MinGW / OnlineGDB / VS Code

Konsep:

Struktur data (struct)

Array

Function modular

Looping & kondisi

Sorting (Bubble Sort)

👤 Author


Mahasiswa Teknologi Informasi
Universitas Negeri Yogyakarta
