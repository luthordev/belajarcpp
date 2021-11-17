#include <iostream>
#include <string>
using namespace std;

int main() {
    // FOR LOOP:
    // for (definisi variabel; kondisi; perhitungan) {
    //   code yang di eksekusi berkali kali
    // }

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    
    // WHILE LOOP:
    // while (kondisi)
    // {
    //     code yang di eksekusi berkali kali
    // }
    int i = 1;
    while (i <= 5) // melakukan kode dibawah selama kondisi masih bernilai true / benar
    {
        cout << i << endl; // nampilin variabel i
        i++; // nambah variabel i
    }

    // DO WHILE LOOP:
    // do {
    //     cout << i << endl;
    //     i++;
    // }
    // while(i <= 5);
    int i = 1;
    do { // lakukan perintah dibawah
        cout << i << endl;
        i++;
    }
    while(i <= 5); // selama kondisi bernilai true / benar

    // FOREACH LOOP
    // for (string item : array)
    //     code yang di eksekusi berkali kali
    // }
    string fruits[] = {"Jambu", "Mangga", "Salak", "Durian", "Rambutan"};
    for (string fruit : fruits)
    {
        cout << fruit << endl;
    }
}