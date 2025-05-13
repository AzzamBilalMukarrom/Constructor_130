#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    // Constructur Dengan Parameter
    mahasiswa(int nim, string nama);
};

// Definisi Counstructor dengan parameter
mahasiswa ::mahasiswa(int nim, string nama) {
    cout <<"Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "NAMA : " << nama << endl;
}

int main ()
{
    // Memanggil constructor dengan parameter
    mahasiswa mhs(12345,"pascal");
    return 0;
}