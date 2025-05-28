#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    mahasiswa dina;

    dina.nim = "c030324017";
    dina.nama = "Dina Arianti";
    dina.alamat = "JL. Kuin selatan";
    dina.ipk = 3.9;

    cout<<dina.nim<<"\n";
    cout<<dina.nama<<"\n";
    cout<<dina.alamat<<"\n";
    cout<<dina.ipk<<"\n";

    return 0;
}