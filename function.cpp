#include <iostream>
using namespace std;

// function dengan nama jumlahkan dengan 2 parameter yang bertipe integer
// int artinya function ini bisa mengembalikan nilai bertipe integer
int jumlahkan(int satu, int dua){ 
  // mengembalikan nilai hasil dari kalkulasi parameter (satu + dua)
  return satu + dua;
}

// function dengan nama jumlahkan dengan 2 parameter yang bertipe integer
// int artinya function ini bisa mengembalikan nilai bertipe integer
int kalikan(int satu, int dua) {
  // mengembalikan nilai hasil dari kalkulasi parameter (satu x dua)
  return satu*dua;
}

int main() {
  int a, b;
  cout << "Masukkan bilangan pertama: ";
  cin >> a;
  cout << "Masukkan ilangan kedua: ";
  cin >> b;

  cout << "Total Penjumlahan: ";
  cout << jumlahkan(a,b); // memanggil function jumlahkan dan mengisi parameter dengan variabel a & b

  cout << "Total Perkalian: ";
  cout << kalikan(a,b); // memanggil function jumlahkan dan mengisi parameter dengan variabel a & b
}

