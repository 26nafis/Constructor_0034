#include <iostream>
using namespace std;

class Buku
{
    string judul; // Variabel private untuk menyimpan judul buku

public:
    // Setter dengan chain function
    Buku& setJudul(string judul)
    {
        this->judul = judul;
        return *this; // Mengembalikan referensi ke objek saat ini
    };

    // Getter untuk mengambil judul buku
    string getJudul()
    {
        return this->judul;
    };
};

