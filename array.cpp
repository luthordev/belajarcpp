#include <iostream>
#include <string>
using namespace std;

int main() {


  // ========================================================
  // ARRAY 1 DIMENSI

  // Array string
  string fruits[] = {"Jeruk", "Apel", "Nanas"};

  // Array integer
  int umur[] = {10, 14, 15, 21};

  // Array float
  float nilai[] = {75.0, 46.0, 80.5};

  // Akses data dalam array 1 dimensi
  // array[index]
  cout << fruits[0] << endl; // Jeruk
  cout << fruits[2] << endl; // Nanas
  cout << fruits[1] << endl; // Apel
  // ========================================================



  // ========================================================
  // ARRAY 2 DIMENSI (Array dalam array)
  // array[index][index]
  string siswa[][2] = {
    {"Bekti", "Luthfi"},
    {"Budi", "Tono"},
    {"Caca", "Ani"}
  };

  // akses data dalam array 2 dimensi
  cout << siswa[0][1] << endl; // Luthfi
  cout << siswa[0][0] << endl; // Bekti
  cout << siswa[1][1] << endl; // Tono
  // ========================================================
}