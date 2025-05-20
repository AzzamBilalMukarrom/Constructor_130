//buatlah pemograman c++ dengan class barang yang memiliki atribut namaBarang,
//kode barang
//program memiliki constructor berparameter untuk mengisi
//nilai namaBarang dan kodeBarang
//serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
   int kodeBarang;
   string namaBarang;

public:

    Barang(int kode, string nama) {
        kodeBarang = kode;
        namaBarang = nama;
    }

    void tampilkan (){
        cout << "Kode Barang : " << kodeBarang << endl;
        cout << "Nama Barang : " << namaBarang << endl; 
    }
};

int main() {

    Barang brg(505, "Artic Monkeys");
    brg.tampilkan();
    return 0;
}