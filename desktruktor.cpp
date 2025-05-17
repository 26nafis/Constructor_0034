#include <iostream>
using namespace std;

class Angka {
private:
    int *arr;
    int panjang;

public:
    Angka(int);  // Constructor
    Angka();    // Destructor
    void cetakData();
    void isiData();
};

// Definisi Constructor
Angka::Angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
};

// Definisi Destructor
Angka::~Angka() {
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
};






