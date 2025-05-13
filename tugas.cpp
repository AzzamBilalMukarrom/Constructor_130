//Buatlah sebuah class bernama bangunDatar yang memiliki
//member sebagai berikut :
//panjang, lebar, method, hitungLuas dan hitungKeliling
//Buatlah class persegiPanjang yang memiliki member inputdata dan outputdata
//buatlah member yang ada di class persegi panjang dapat mengakses member di bangun datar 
//gunakan pointer untuk mengakses member yang ada pada class bangundatar


#include <iostream>
using namespace std;

//Deklarasi class bangun datar 
class bangunDatar;

class PersegiPanjang{
    public:
    void inputData(bangunDatar &bd);
    void outputData(bangunDatar &bd);

};

class bangunDatar
{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return panjang * lebar;

        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };
    public:
    friend void PersegiPanjang::inputData(bangunDatar &bd);
    friend void PersegiPanjang::outputData(bangunDatar &bd);
    };

    void PersegiPanjang::inputData(bangunDatar &bd){
        cout <<"Masukkan Panjang:" ;
        cin >> bd.panjang;
        cout <<"Masukkan Lebar : ";
        cin>> bd.lebar;    
    }

    void PersegiPanjang::outputData(bangunDatar &bd){
        cout <<"Luas :" << bd.hitungLuas() << endl ;
        cout <<"Keliling : " << bd.hitungKeliling() << endl;
        cin>> bd.lebar;    
    };


    // public:
    // void input()
    // {
    //     cout << "Masukkan Jari - jari : ";
    //     cin >> jarijari;
    // }
    // int LuasBd(int r)
    // {
    //     return 3.14 * r * r;
        
    // }

int main()
{

    PersegiPanjang pP;
    bangunDatar bD;
    pP.inputData(bD);
    pP.outputData(bD);

    // bangunDatar objectBD;
    // persegiPanjang ol;

    
    // cout << "Masukkan Jari - jari : ";
    // cin >> objectBD.jarijari;
    // cout << "Luas Persegi Panjang : " <<

    // objectBD.LuasBd(objectBD.jarijari) << endl;
    
};