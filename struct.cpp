#include <iostream>
#include <string>
using namespace std;

// struct (mirip model di bahasa pemrograman lain)
struct siswa {
  int no_induk;
  string nama;
  string kelas;
};

int main() {
  siswa bekti, luthfi; // deklarasi bahwa objek bekti dan luthfi adalah siswa

  // deklarasi data bekti
  bekti.no_induk = 111;
  bekti.nama = "Bekti Nun Ibrahim";
  bekti.kelas = "12 RPL 1";

  // deklarasi data luthfi
  luthfi.no_induk = 222;
  luthfi.nama = "Luthfi Athorique Ginanjar Putra";
  luthfi.kelas = "12 RPL 1";

  cout << luthfi.nama;
}