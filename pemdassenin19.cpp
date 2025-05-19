#include <iostream>
using namespace std;

class mahasiswa {
    private:
        static int jumlahMhs;
    public:
        string Nama;

        mahasiswa ( string pNama) {
            Nama = pNama;
            ++ jumlahMhs;
            cout << " mahasiswa dibuat" << Nama << endl;
        };
        ~mahasiswa (){
            --jumlahMhs;
            cout << "nama terhapus: " <<  Nama << endl;
        };
            static void setjumlah(int pjumlah){
                jumlahMhs = pjumlah;
            }
        static int getjumlahMhs(){
            return jumlahMhs;
        };
};

int  mahasiswa::jumlahMhs = 0;

int main(){
    cout << " jumlah mahasiswa:" << mahasiswa::getjumlahMhs() << endl;

    mahasiswa Mhs1("andi");
    mahasiswa Mhs2("Lulu");
    cout << " jumlah mahasiswa:" << mahasiswa::getjumlahMhs() << endl;
    mahasiswa::setjumlah(5);
    {
    mahasiswa Mhs3("Husna");
    cout << "jumlah mahasiswa:" << mahasiswa::getjumlahMhs << endl;
    }
    cout << "jumlah mahasiswa:" << mahasiswa::getjumlahMhs() << endl;
    return 0;
};