# TP3DPBO2025C1

# Janji
Saya Muhammad Ichsan Khairullah dengan NIM 2306924 mengerjakan
Tugas Praktikum 3 dalam mata kuliah Desain dan Pemograman
Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan
kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain
![TP3 drawio](https://github.com/user-attachments/assets/95b0cf28-884c-461b-9e85-46546cbf5c9b)

# Penjelasan
Program bersifat statis. Class CPU, RAM, HardDrive, dan Peripheral adalah anak dari class Komponen. Class Komputer memiliki satu CPU, satu atau lebih RAM, satu HardDrive, dan satu atau lebih Peripheral. Class User memiliki satu Komputer.

Class Komponen memiliki 2 atribut:
- merk
- nama

Class CPU mewarisi Komponen & memiliki 2 atribut:
- jumlah_core (int)
- kecepatan_GHz (float)

Class RAM mewarisi Komponen & memiliki 2 atribut:
- kapasitas_GB (int)
- ddr

Class HardDrive mewarisi Komponen & memiliki 2 atribut:
- kapasitas_GB (int)
- ddr

Class Peripheral mewarisi Komponen & memiliki 2 atribut:
- tipe (mouse, keyboard, dsb.)
- jenis_koneksi (bluetooth, HDMI, dsb.)

Class Komputer memiliki 5 atribut:
- nama
- cpu (CPU)
- ram_list (RAM)
- hard_drive (HardDrive)
- peripheral_list (Peripheral)

Class User memiliki 3 atribut:
- nama
- email
- komputer (Komputer)

Program bersifat statis sehingga tidak menerima inputan dari user. Ketika dieksekusi, program akan menampilkan detail komputer-komputer yang berisi:
- Nama pemilik
- Email pemilik
- Nama komputer
- CPU komputer
- RAM komputer
- Hard drive komputer
- Peripheral komputer

Metode display() dalam CPU dan HardDrive digunakan ketika menampilkan CPU dan hard drive komputer

# Dokumentasi (C++)
![output](https://github.com/user-attachments/assets/37a9a105-7588-42fd-8511-9c4a64d6f87a)
