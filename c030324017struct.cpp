#include <iostream>
using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
   mahasiswa dina;
   mahasiswa* prt = &dina;

   (*prt).nim = "c030324017";
   (*prt).nama = "Dina Arianti";
   (*prt).alamat = "JL. Kuin selatan";
   (*prt).ipk = 3.9;

   cout<<"nim:"<<(*prt).nim<<endl;
   cout<<"nama:"<<(*prt).nama<<endl;
   cout<<"alamat:"<<(*prt).alamat<<endl;
   cout<<"ipk:"<<(*prt).ipk<<endl;

    return 0;
}