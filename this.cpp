#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
        string setget(string jdl)
        {
            //nilai parameter 'judul' untuk memberi variabel 'judul'
            this->judul = jdl;
            return this->judul;
        }
};

int main()
{
    buku bukunya;
    cout<<bukunya.setget("Matyematika");
    return 0l;

}